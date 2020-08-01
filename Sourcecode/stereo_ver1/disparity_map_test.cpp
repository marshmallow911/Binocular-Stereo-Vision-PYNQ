#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include "disparity_map.h"
#include "hls_opencv.h"


#define PATH_IMG_LEFT "./Tsukuba_L.bmp"
#define PATH_IMG_RIGHT "./Tsukuba_R.bmp"
#define PATH_IMG_OUT "./Tsukuba_O_color_R.bmp"

#define PACKETS (HEIGHT*WIDTH*1/2)
unsigned char input_buffer_left[WIDTH*HEIGHT];
unsigned char input_buffer_right[WIDTH*HEIGHT];
wide_stream in_stream[PACKETS];
wide_stream output_data[PACKETS];
unsigned char output_buffer[WIDTH*HEIGHT] = {0};

void reset_data(void) {
	for (int i = 0; i < PACKETS; ++i) {
		output_data[i].data = 0;
		output_data[i].last = 0;
		output_data[i].user = 0;
	}
}

int main() {

	cv::Mat imgSrc_left;
	cv::Mat imgSrc_right;
	imgSrc_left = cv::imread(PATH_IMG_LEFT,CV_8UC1);
	imgSrc_right = cv::imread(PATH_IMG_RIGHT,CV_8UC1);

	uint8_t *myData_left = imgSrc_left.data;
	uint8_t *myData_right = imgSrc_right.data;
	int width = imgSrc_left.cols;
	int height = imgSrc_left.rows;
	int _stride = imgSrc_left.step;//in case cols != strides
	main_label3:for(int i = 0; i < height; i++)
	{
	    for(int j = 0; j < width; j++)
	    {
	        input_buffer_left[i * _stride + j] = myData_left[ i * _stride + j];
	        input_buffer_right[i * _stride + j] = myData_right[ i * _stride + j];
	    }
	}

	for (int i = 0; i < PACKETS; ++i) {
		in_stream[i].data.range(7,0) = input_buffer_left[2*i];
		in_stream[i].data.range(15,8) = input_buffer_left[2*i + 1];
		in_stream[i].data.range(23,16) = input_buffer_right[2*i];
		in_stream[i].data.range(31,24) = input_buffer_right[2*i + 1];
	}

	in_stream[0].user = 1;
	in_stream[PACKETS-1].last = 1;

	disparityMap(in_stream,output_data,imgSrc_left.rows,imgSrc_left.cols);
	printf("Evaluate results\n");

	for (int i = 0; i < PACKETS/2; ++i) {
		output_buffer[4*i] = output_data[i].data.range(7,0);
		output_buffer[4*i + 1] = output_data[i].data.range(15,8);
		output_buffer[4*i + 2] = output_data[i].data.range(23,16);
		output_buffer[4*i + 3] = output_data[i].data.range(31,24);
	}
	
	cv::Mat imgHWcalc = cv::Mat(imgSrc_left.rows,imgSrc_left.cols,CV_8UC1);
	myData_left = imgHWcalc.data;
	width = imgHWcalc.cols;
	height = imgHWcalc.rows;
	_stride = imgHWcalc.step;//in case cols != strides
	for(int i = 0; i < height; i++)
	{
		for(int j = 0; j < width; j++)
		{
			myData_left[ i * _stride + j] = output_buffer[i * _stride + j];
		}
	}

	cv::imwrite(PATH_IMG_OUT, imgHWcalc);
	return 0;
}
