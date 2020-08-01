#include "disparity_map.h"
#include "hls_math.h"
//计算绝对值的函数
ptype abs_ptype (ptype a_val, ptype b_val)
{
	if (a_val >= b_val)
		return a_val - b_val;
	else
		return b_val - a_val;
}


// 计算点数成本的函�?(2像素色水平的绝对值差)
ptype cost_d (ptype pixel_1, ptype pixel_2)
{
	return abs_ptype(pixel_1, pixel_2);
}


// 恢复渗�?�率值的功能?在两个像素之�?
ap_uint<10> permeability (ptype pixel_1, ptype pixel_2, ap_uint<10> exponentials[])
{
	return exponentials[ abs_ptype(pixel_1, pixel_2) ];
}

/*void scaleGray(ptype &dMap, unsigned char max_value, ptype &dMap_scale,ap_uint<32> rows, ap_uint<32> cols)
{
    float scale = 255.0 / max_value;
scale_gray:
    for (int x = 0; x < rows; x++)
        scaleGray_label0:for (int y = 0; y < cols; y++)
        {
        	dMap_scale[x*cols+y]=static_cast<ap_uint<8>>(dMap[x*cols+y] * scale + 0.5);
        }
}*/

/*void graytorgb(ptype &gray_scaled[rows * cols], ptype &color_out[rows * cols],ap_uint<32> rows, ap_uint<32> cols)
{
Gray_to_color:
	for (int x = 0; x < rows; x++)
		graytorgb_label1:for (int y = 0; y < cols; y++)
		{
			if (gray_scaled[x*cols+y] <= 51)
			{
				img_out.val[0] = 255;
				img_out.val[1] = img_scaled.val[0] * 5;
				img_out.val[2] = 0;
			}
			else if (img_scaled.val[0] <= 102)
			{
				img_scaled.val[0] -= 51;
				img_out.val[0] = 255 - img_scaled.val[0] * 5;
				img_out.val[1] = 255;
				img_out.val[2] = 0;
			}
			else if (img_scaled.val[0] <= 153)
			{
				img_scaled.val[0] -= 102;
				img_out.val[0] = 0;
				img_out.val[1] = 255;
				img_out.val[2] = img_scaled.val[0] * 5;
			}
			else if (img_scaled.val[0] <= 204)
			{
				img_scaled.val[0] -= 153;
				img_out.val[0] = 0;
				img_out.val[1] = 255 - static_cast<ap_uint<8>>(img_scaled.val[0] * 128.0 / 51 + 0.5);
				img_out.val[2] = 255;
			}
			else if (img_scaled.val[0] <= 255)
			{
				img_scaled.val[0] -= 204;
				img_out.val[0] = 0;
				img_out.val[1] = 127 - static_cast<ap_uint<8>>(img_scaled.val[0] * 127.0 / 51 + 0.5);
				img_out.val[2] = 255;
			}
			color_out<<img_out;
		}
};*/

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
	ptype dMap[HEIGHT * WIDTH];
	//ptype scaled[rows * cols];
	//ptype rainbow[rows * cols];
	ptype leftImage[HEIGHT * WIDTH];
	ptype rightImage[HEIGHT * WIDTH];

	const int col_packets = cols/2;
	const int packets = col_packets*rows;
	const int pixel_cnt = rows*cols;

	for(int r = 0; r < packets; r++){
	#pragma HLS pipeline II=2
		ap_uint<32> dat = in_stream->data;
		leftImage[2*r]=dat.range(7,0);
		leftImage[2*r+1]=dat.range(15,8);
		rightImage[2*r]=dat.range(23,16);
		rightImage[2*r+1]=dat.range(31,24);
		++in_stream;
	}
	// 包含指数256的向�?(1024)
	static ap_uint<10> exponentials[256] = {1023, 989, 957, 925, 895, 865, 837, 810, 783, 757, 733, 708, 685, 663, 641, 620, 600, 580, 561, 543, 525, 508, 491, 475, 459, 444, 430, 415, 402, 389, 376, 364, 352, 340, 329, 318, 308, 298, 288, 278, 269, 260, 252, 243, 235, 228, 220, 213, 206, 199, 193, 186, 180, 174, 169, 163, 158, 153, 147, 143, 138, 133, 129, 125, 121, 117, 113, 109, 106, 102, 99, 95, 92, 89, 86, 83, 81, 78, 75, 73, 71, 68, 66, 64, 62, 60, 58, 56, 54, 52, 50, 49, 47, 46, 44, 43, 41, 40, 39, 37, 36, 35, 34, 33, 31, 30, 29, 28, 27, 27, 26, 25, 24, 23, 22, 22, 21, 20, 20, 19, 18, 18, 17, 16, 16, 15, 15, 14, 14, 13, 13, 12, 12, 12, 11, 11, 10, 10, 10, 9, 9, 9, 8, 8, 8, 8, 7, 7, 7, 7, 6, 6, 6, 6, 6, 5, 5, 5, 5, 5, 4, 4, 4, 4, 4, 4, 4, 3, 3, 3, 3, 3, 3, 3, 3, 2, 2, 2, 2, 2, 2, 2, 2, 2, 2, 2, 2, 2, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0};
	// 存储图像左像素最后一行的向量
	ptype pixel_values_left[WIDTH];
	// 存储图像�?后DMAX + 1像素的向�?
	//索引�?0的元素包含最后读取的像素
	static ptype pixel_values_right[DMAX + 1];
	// 存储�?后一行每个像素的右扫描成本的向量(每个d)
	// BRAM in hardware
	ap_uint<18> cost_last_line[WIDTH][DMAX + 1];
	// 暂时存储新分析像素成本的向量(每个d)
	// 用于下一个像素的正确扫描，以避免访问BRAM
	static ap_uint<18> cost_d_temp_right[DMAX + 1];
	// 对角线像素的临时成本
	ap_uint<18> cost_d_temp_diagonal;

	ap_uint<16> cost_d_actual;
	ap_uint<18> cost_d_right;
	ap_uint<18> cost_d_diagonal;

	ap_uint<18> min_cost;

	ptype assigned_d;

	// Permeabilit?
	ap_uint<10> mu_right;
	ap_uint<10> mu_diagonal;

	GRAY_PIXEL out_pixel;
	// 条纹扫描
	Loop_Row:	for(int row = 0; row < rows; row++)
		{
			// Scansione per colonne e right scan
			Loop_Col:	for(int col = 0; col < cols; col++)
			{
#pragma HLS PIPELINE
				// 左像素读�?
				pixel_values_left[col] = leftImage[row * cols + col];

				// 右侧像素更新
				for (int q = DMAX; q > 0; q--)
					pixel_values_right[q] = pixel_values_right[q - 1]; // 以前的像素移�?
				pixel_values_right[0] = rightImage[row * cols + col]; // 新的像素图像读取

				// permeabilit计算?为了正确的扫�?
				if (col > 0)
					mu_right = permeability(pixel_values_left[col], pixel_values_left[col - 1], exponentials);

				//permeabilit计算?对角线扫�?
				// 左像素[col + 1]表示与当前像素相关的对角�?(右上�?)像素
				if ((row > 0) && (col < cols - 1))
					mu_diagonal = permeability(pixel_values_left[col], pixel_values_left[col + 1], exponentials);

				assigned_d = 0;
				min_cost = 65535;

				// 扫描差异?
				Loop_d: for(int d = 0; d <= DMAX; d++)
				{
					// BRAM对角线读取像素成�?
					cost_d_temp_diagonal = cost_last_line[col + 1][d];

					if (col - d >= 0)
					{
						cost_d_actual = cost_d(pixel_values_left[col], pixel_values_right[d]);

						// Right scan
						if ((col > 0) && (col - 1 - d >= 0))
							cost_d_right = mu_right * cost_d_temp_right[d];

						cost_d_actual += cost_d_right(17,10); // Shift di 10 bit (1024)

						// 成本存储在临时矢量中
						cost_d_temp_right[d] = cost_d_actual;

						// Diagonal scan
						if ((row > 0) && (col < cols - 1))
							cost_d_diagonal = mu_diagonal * cost_d_temp_diagonal;

						cost_d_actual += cost_d_diagonal(17,10); // Shift di 10 bit (1024)

						if(cost_d_actual < min_cost)
						{
							min_cost = cost_d_actual;
							assigned_d = d;
						}
					}

					// 成本计算 BRAM
					cost_last_line[col][d] = cost_d_temp_right[d];
				}
			// Risultato scritto in uscita
			dMap[row * cols + col] = assigned_d * 255 / DMAX;
			/*if(dMap[row * cols + col]>max_value)
			{
				max_value = dMap[row * cols + col];
			}*/
		}
	}
	//scaleGray(dMap, max_value, scaled,rows,cols);
    for(int r = 0; r < packets/2; r++){
    #pragma HLS pipeline II=4
		ap_uint<32> dat;
		dat.range(7,0) = dMap[4*r];
		dat.range(15,8) = dMap[4*r+1];
		dat.range(23,16) = dMap[4*r+2];
		dat.range(31,24) = dMap[4*r+3];
		dMapout->data = dat;
		dMapout->user = (r == 0)? 1: 0;
		dMapout->last = (r == packets/2-1)? 1: 0;
		++dMapout;
	}
}


