#include "ap_int.h"
#include "hls_video.h"
#include <ap_fixed.h>

#define BIT_ACCURATE

// Image dim
#define HEIGHT 288
#define WIDTH 384

// Shift factor
//#define shift 1023
struct wide_stream {
	ap_uint<32> data;
	ap_uint<1> user;
	ap_uint<1> last;
};
// Max disparity
#define DMAX 15

// 8 bit pixel type
typedef ap_uint<8> ptype;


typedef hls::Scalar<3, unsigned char>         RGB_PIXEL;
typedef hls::Scalar<1, unsigned char>         GRAY_PIXEL;
typedef hls::Mat<HEIGHT, WIDTH, HLS_8UC1>     GRAY_IMAGE;
typedef hls::Mat<HEIGHT, WIDTH, HLS_8UC3>     RGB_IMAGE;

// Disparity map function
/*void disparityMap(ptype leftImage[HEIGHT * WIDTH],
					ptype rightImage[HEIGHT * WIDTH],
					ptype dMap[HEIGHT * WIDTH]);*/

void disparityMap(wide_stream *in_stream,wide_stream *dMapout, ap_uint<32> rows, ap_uint<32> cols);
