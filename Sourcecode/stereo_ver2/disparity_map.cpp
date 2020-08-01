#include "disparity_map.h"
#include "hls_math.h"
#include "camera_settings.h"
ptype abs_ptype (ptype a_val, ptype b_val)
{
	if (a_val >= b_val)
		return a_val - b_val;
	else
		return b_val - a_val;
}

ptype cost_d (ptype pixel_1, ptype pixel_2)
{
	return abs_ptype(pixel_1, pixel_2);
}

ap_uint<10> permeability (ptype pixel_1, ptype pixel_2, ap_uint<10> exponentials[])
{
	return exponentials[ abs_ptype(pixel_1, pixel_2) ];
}


void disparityMap (wide_stream *in_stream,wide_stream *dMapout, ap_uint<32> rows, ap_uint<32> cols)
{
#pragma HLS INTERFACE axis port=in_stream bundle=INPUT
#pragma HLS INTERFACE axis port=dMapout bundle=OUTPUT

#pragma HLS INTERFACE s_axilite port=rows bundle=CONTROL_BUS offset=0x14 clock=AXI_LITE_clk
#pragma HLS INTERFACE s_axilite port=cols bundle=CONTROL_BUS offset=0x1C clock=AXI_LITE_clk
#pragma HLS INTERFACE s_axilite port=return bundle=CONTROL_BUS clock=AXI_LITE_clk

#pragma HLS INTERFACE ap_stable port=rows
#pragma HLS INTERFACE ap_stable port=cols


	unsigned char max_value=0;
	GRAY_IMAGE dMap;
	GRAY_PIXEL OUT_PIXEL;
	ptype leftImage_in[HEIGHT][WIDTH];
	ptype rightImage_in[HEIGHT][WIDTH];
	ptype right_value;

#pragma HLS DATAFLOW

	const int col_packets = cols/2;
	const int packets = col_packets*rows;
	const int pixel_cnt = rows*cols;

	disparityMap_label1:for(int r = 0; r < rows; r++){
		for(int c =0;c< cols/2;c++)
		{
#pragma HLS pipeline II=2
			ap_uint<32> dat = in_stream->data;
			leftImage_in[r][2*c] = dat.range(7,0);
			leftImage_in[r][2*c+1] = dat.range(15,8);
			rightImage_in[r][2*c] = dat.range(23,16);
			rightImage_in[r][2*c+1] = dat.range(31,24);
			++in_stream;
		}
	}
	hls::Window<3, 3, float > PAR_L_CAMM;
	hls::Window<3, 3, float > PAR_R_CAMM;
	hls::Window<3, 3, float > PAR_L_RINV;
	hls::Window<3, 3, float > PAR_R_RINV;

	for (int i=0;i<3;i++){
	#pragma HLS PIPELINE
			disparityMap_label0:for(int j=0;j<3;j++)
			{
				PAR_L_CAMM.val[i][j] = PAR_L_CAMM_RAW[i*3+j];
				PAR_R_CAMM.val[i][j] = PAR_R_CAMM_RAW[i*3+j];
				PAR_L_RINV.val[i][j] = PAR_L_RM_INV[i*3+j];
				PAR_R_RINV.val[i][j] = PAR_R_RM_INV[i*3+j];
			}
		}

	float one_three[3],pos1[3],pos2[3];

	float x1,y1,r1,x2,y2,r2,xx1,yy1,xx2,yy2,xxx1,yyy1,xxx2,yyy2,w1,h1,w2,h2;

	float fx1 = PAR_L_CAMM.val[0][0],fy1 = PAR_L_CAMM.val[1][1],cx1 = PAR_L_CAMM.val[0][2],cy1 = PAR_L_CAMM.val[1][2];

	float fx2 = PAR_R_CAMM.val[0][0],fy2 = PAR_R_CAMM.val[1][1],cx2= PAR_R_CAMM.val[0][2],cy2 = PAR_R_CAMM.val[1][2];

	float fx = (fx1 + fx2)/2,fy = (fy1 + fy2)/2,cx = (cx1 + cx2)/2,cy = (cy1 + cy2)/2;

	float k11 = PAR_L_DISTC[0],k12 = PAR_L_DISTC[1],k13 = PAR_L_DISTC[4],p11 = PAR_L_DISTC[2],p12 = PAR_L_DISTC[3];

	float k21 = PAR_R_DISTC[0],k22 = PAR_R_DISTC[1],k23 = PAR_R_DISTC[4],p21 = PAR_R_DISTC[2],p22 = PAR_R_DISTC[3];

	static ap_uint<10> exponentials[256] = {1023, 989, 957, 925, 895, 865, 837, 810, 783, 757, 733, 708, 685, 663, 641, 620, 600, 580, 561, 543, 525, 508, 491, 475, 459, 444, 430, 415, 402, 389, 376, 364, 352, 340, 329, 318, 308, 298, 288, 278, 269, 260, 252, 243, 235, 228, 220, 213, 206, 199, 193, 186, 180, 174, 169, 163, 158, 153, 147, 143, 138, 133, 129, 125, 121, 117, 113, 109, 106, 102, 99, 95, 92, 89, 86, 83, 81, 78, 75, 73, 71, 68, 66, 64, 62, 60, 58, 56, 54, 52, 50, 49, 47, 46, 44, 43, 41, 40, 39, 37, 36, 35, 34, 33, 31, 30, 29, 28, 27, 27, 26, 25, 24, 23, 22, 22, 21, 20, 20, 19, 18, 18, 17, 16, 16, 15, 15, 14, 14, 13, 13, 12, 12, 12, 11, 11, 10, 10, 10, 9, 9, 9, 8, 8, 8, 8, 7, 7, 7, 7, 6, 6, 6, 6, 6, 5, 5, 5, 5, 5, 4, 4, 4, 4, 4, 4, 4, 3, 3, 3, 3, 3, 3, 3, 3, 2, 2, 2, 2, 2, 2, 2, 2, 2, 2, 2, 2, 2, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0};
	ptype pixel_values_left[WIDTH];

	static ptype pixel_values_right[DMAX + 1];

	ap_uint<18> cost_last_line[WIDTH][DMAX + 1];

	static ap_uint<18> cost_d_temp_right[DMAX + 1];
	ap_uint<18> cost_d_temp_diagonal;

	ap_uint<16> cost_d_actual;
	ap_uint<18> cost_d_right;
	ap_uint<18> cost_d_diagonal;

	ap_uint<18> min_cost;

	ptype assigned_d;

	ap_uint<10> mu_right;
	ap_uint<10> mu_diagonal;

	Loop_Row:	for(int row = 0; row < rows; row++)
		{
			Loop_Col:	for(int col = 0; col < cols; col++)
			{
#pragma HLS PIPELINE
				one_three[0] = (col-cx)/fx;
				one_three[1] = (row-cy)/fy;
				one_three[2] = 1;
				pos1[0] = PAR_L_RINV.val[0][0]*one_three[0]+PAR_L_RINV.val[0][1]*one_three[1]+PAR_L_RINV.val[0][2]*one_three[2];
				pos1[1] = PAR_L_RINV.val[1][0]*one_three[0]+PAR_L_RINV.val[1][1]*one_three[1]+PAR_L_RINV.val[1][2]*one_three[2];
				pos1[2] = PAR_L_RINV.val[2][0]*one_three[0]+PAR_L_RINV.val[2][1]*one_three[1]+PAR_L_RINV.val[2][2]*one_three[2];
				pos2[0] = PAR_R_RINV.val[0][0]*one_three[0]+PAR_R_RINV.val[0][1]*one_three[1]+PAR_R_RINV.val[0][2]*one_three[2];
				pos2[1] = PAR_R_RINV.val[1][0]*one_three[0]+PAR_R_RINV.val[1][1]*one_three[1]+PAR_R_RINV.val[1][2]*one_three[2];
				pos2[2] = PAR_R_RINV.val[2][0]*one_three[0]+PAR_R_RINV.val[2][1]*one_three[1]+PAR_R_RINV.val[2][2]*one_three[2];
				x1 = pos1[0]/pos1[2];
				y1 = pos1[1]/pos1[2];
				r1 = x1*x1+y1*y1;
				x2 = pos2[0]/pos2[2];
				y2 = pos2[1]/pos2[2];
				r2 = x2*x2+y2*y2;
				xx1 =  x1*(1 + k11*r1 + k12*r1*r1 + k13*r1*r1*r1) + 2*p11*x1*y1 + p12*(r1 + 2*x1*x1) ;
				yy1 =  y1*(1 + k11*r1 + k12*r1*r1 + k13*r1*r1*r1) + 2*p12*x1*y1 + p11*(r1 + 2*y1*y1) ;


				xx2 =  x2*(1 + k21*r2 + k22*r2*r2 +k23*r2*r2*r2) + 2*p21*x2*y2 + p22*(r2 + 2*x2*x2) ;
				yy2 =  y2*(1 + k21*r2 + k22*r2*r2 +k23*r2*r2*r2) + 2*p22*x2*y2 + p21*(r2 + 2*y2*y2) ;

				xxx1 = xx1*fx1 + cx1;
				yyy1 = yy1*fy1 + cy1;

				xxx2 = xx2*fx2 + cx2;
				yyy2 = yy2*fy2 + cy2;

				if( xxx1 > 1 && yyy1 >1 &&  xxx1 <= cols && yyy1 <=rows)
				{
					w1 = xxx1;
					h1 = yyy1;
					int h1_floor = hls::floor(h1);
					int w1_floor = hls::floor(w1);
					pixel_values_left[col]=ap_uint<8>((hls::floor(w1+1)-w1) * (hls::floor(h1+1)-h1) * leftImage_in[h1_floor][w1_floor] + (hls::floor(w1+1)-w1) * (h1-hls::floor(h1)) * leftImage_in[h1_floor+1][w1_floor] + (w1-hls::floor(w1)) * (hls::floor(h1+1)-h1) * leftImage_in[h1_floor][w1_floor+1] + (w1-hls::floor(w1)) * (h1-hls::floor(h1)) * leftImage_in[h1_floor+1][w1_floor+1]);
				}
				if(xxx2 > 1 && yyy2 >1 &&  xxx2 <= cols && yyy2 <=rows)
				{
					w2 = xxx2;
					h2 = yyy2;
					int h2_floor = hls::floor(h2);
					int w2_floor = hls::floor(w2);
					right_value=ap_uint<8>((hls::floor(w2+1)-w2) * (hls::floor(h2+1)-h2) * rightImage_in[h2_floor][w2_floor] + (hls::floor(w2+1)-w2) * (h2-hls::floor(h2)) * rightImage_in[h2_floor+1][w2_floor] + (w2-hls::floor(w2)) * (hls::floor(h2+1)-h2) * rightImage_in[h2_floor][w2_floor+1] + (w2-hls::floor(w2)) * (h2-hls::floor(h2)) * rightImage_in[h2_floor+1][w2_floor+1]);
				}

				for (int q = DMAX; q > 0; q--)
					pixel_values_right[q] = pixel_values_right[q - 1];
					pixel_values_right[0] = right_value;

				if (col > 0)
					mu_right = permeability(pixel_values_left[col], pixel_values_left[col - 1], exponentials);

				if ((row > 0) && (col < cols - 1))
					mu_diagonal = permeability(pixel_values_left[col], pixel_values_left[col + 1], exponentials);

				assigned_d = 0;
				min_cost = 65535;

				Loop_d: for(int d = 0; d <= DMAX; d++)
				{
					cost_d_temp_diagonal = cost_last_line[col + 1][d];

					if (col - d >= 0)
					{
						cost_d_actual = cost_d(pixel_values_left[col], pixel_values_right[d]);

						if ((col > 0) && (col - 1 - d >= 0))
							cost_d_right = mu_right * cost_d_temp_right[d];

						cost_d_actual += cost_d_right(17,10); // Shift di 10 bit (1024)
						cost_d_temp_right[d] = cost_d_actual;

						if ((row > 0) && (col < cols - 1))
							cost_d_diagonal = mu_diagonal * cost_d_temp_diagonal;

						cost_d_actual += cost_d_diagonal(17,10); // Shift di 10 bit (1024)

						if(cost_d_actual < min_cost)
						{
							min_cost = cost_d_actual;
							assigned_d = d;
						}
					}

					cost_last_line[col][d] = cost_d_temp_right[d];
				}
				OUT_PIXEL.val[0] = assigned_d * 255 / DMAX;
				dMap<<OUT_PIXEL;
		}
	}
	for(int r = 0; r < packets/2; r++)
    	{
    #pragma HLS pipeline II=4
			ap_uint<32> dat;
			dat.range(7,0) = dMap.read().val[0];
			dat.range(15,8) = dMap.read().val[0];
			dat.range(23,16) = dMap.read().val[0];
			dat.range(31,24) = dMap.read().val[0];
			dMapout->data = dat;
			dMapout->user = (r == 0)? 1: 0;
			dMapout->last = (r == packets/2-1)? 1: 0;
			++dMapout;
    	}
    }
}


