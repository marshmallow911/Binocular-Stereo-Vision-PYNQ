#include "camera_settings.h"
#include "hls_math.h"
void camera(ap_uint<32> rows, ap_uint<32> cols,GRAY_IMG &imgL_in,GRAY_IMG &imgR_in, GRAY_IMG &imgL_rmap,GRAY_IMG &imgR_rmap)
{
	hls::Window<3, 3, float > PAR_L_CAMM;
	hls::Window<3, 3, float > PAR_R_CAMM;
	hls::Window<3, 3, float > PAR_L_RINV;
	hls::Window<3, 3, float > PAR_R_RINV;

	for (int i=0;i<3;i++){
	#pragma HLS PIPELINE
			for(int j=0;j<3;j++)
			{
				PAR_L_CAMM.val[i][j] = PAR_L_CAMM_RAW[i*3+j];
				PAR_R_CAMM.val[i][j] = PAR_R_CAMM_RAW[i*3+j];
				PAR_L_RINV.val[i][j] = PAR_L_RM_INV[i*3+j];
				PAR_R_RINV.val[i][j] = PAR_R_RM_INV[i*3+j];
			}
		}

	float one_three[3];
	float pos1[3];
	float pos2[3];
	float x1,y1,r1,x2,y2,r2,xx1,yy1,xx2,yy2,xxx1,yyy1,xxx2,yyy2,w1,h1,w2,h2;
	float fx1 = PAR_L_CAMM.val[0][0];
	float fy1 = PAR_L_CAMM.val[1][1];
	float cx1 = PAR_L_CAMM.val[0][2];
	float cy1 = PAR_L_CAMM.val[1][2];
	float fx2 = PAR_R_CAMM.val[0][0];
	float fy2 = PAR_R_CAMM.val[1][1];
	float cx2= PAR_R_CAMM.val[0][2];
	float cy2 = PAR_R_CAMM.val[1][2];
	float fx = (fx1 + fx2)/2;
	float fy = (fy1 + fy2)/2;
	float cx = (cx1 + cx2)/2;
	float cy = (cy1 + cy2)/2;
	float k11 = PAR_L_DISTC[0];
	float k12 = PAR_L_DISTC[1];
	float k13 = PAR_L_DISTC[4];
	float p11 = PAR_L_DISTC[2];
	float p12 = PAR_L_DISTC[3];

	float k21 = PAR_R_DISTC[0];
	float k22 = PAR_R_DISTC[1];
	float k23 = PAR_R_DISTC[4];
	float p21 = PAR_R_DISTC[2];
	float p22 = PAR_R_DISTC[3];

	for (int v= 10; v<rows-10; v++){
		for (int u = 25;u<cols-2;u++){
			one_three[0] = (u-cx)/fx;
			one_three[1] = (v-cy)/fy;
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
				//imgL_rmap.val[v-10][u-25]=ap_uint<8>((hls::floor(w1+1)-w1) * (hls::floor(h1+1)-h1) * imgL_in.val[0][0] + (hls::floor(w1+1)-w1) * (h1-hls::floor(h1)) * imgL_in.val[0][0] + (w1-hls::floor(w1)) * (hls::floor(h1+1)-h1) * imgL_in.val[0][0] + (w1-hls::floor(w1)) * (h1-hls::floor(h1)) * imgL_in.val[0][0]);
				imgL_rmap.val[v-10][u-25]=ap_uint<8>((hls::floor(w1+1)-w1) * (hls::floor(h1+1)-h1) * imgL_in.val[h1_floor][w1_floor] + (hls::floor(w1+1)-w1) * (h1-hls::floor(h1)) * imgL_in.val[h1_floor+1][w1_floor] + (w1-hls::floor(w1)) * (hls::floor(h1+1)-h1) * imgL_in.val[h1_floor][w1_floor+1] + (w1-hls::floor(w1)) * (h1-hls::floor(h1)) * imgL_in.val[h1_floor+1][w1_floor+1]);
			}
			if(xxx2 > 1 && yyy2 >1 &&  xxx2 <= cols && yyy2 <=rows)
			{
				w2 = xxx2;
				h2 = yyy2;
				int h2_floor = hls::floor(h2);
				int w2_floor = hls::floor(w2);
				imgR_rmap.val[v-10][u-25]=ap_uint<8>((hls::floor(w2+1)-w2) * (hls::floor(h2+1)-h2) * imgR_in.val[h2_floor][w2_floor] + (hls::floor(w2+1)-w2) * (h2-hls::floor(h2)) * imgR_in.val[h2_floor+1][w2_floor] + (w2-hls::floor(w2)) * (hls::floor(h2+1)-h2) * imgR_in.val[h2_floor][w2_floor+1] + (w2-hls::floor(w2)) * (h2-hls::floor(h2)) * imgR_in.val[h2_floor+1][w2_floor+1]);
			}
		}
	}
}
