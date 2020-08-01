#include "ap_int.h"
#include "hls_video.h"
#include <ap_fixed.h>

struct wide_stream {
	ap_uint<32> data;
	ap_uint<1> user;
	ap_uint<1> last;
};

void disparityMap(wide_stream *in_stream,wide_stream *dMapout, ap_uint<32> rows, ap_uint<32> cols);
