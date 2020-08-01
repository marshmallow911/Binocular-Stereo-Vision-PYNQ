#include "disparityMap.h"
#include "AESL_pkg.h"

using namespace std;

namespace ap_rtl {

void disparityMap::thread_hdltv_gen() {
    const char* dump_tv = std::getenv("AP_WRITE_TV");
    if (!(dump_tv && string(dump_tv) == "on")) return;

    wait();

    mHdltvinHandle << "[ " << endl;
    mHdltvoutHandle << "[ " << endl;
    int ap_cycleNo = 0;
    while (1) {
        wait();
        const char* mComma = ap_cycleNo == 0 ? " " : ", " ;
        mHdltvinHandle << mComma << "{"  <<  " \"ap_rst_n\" :  \"" << ap_rst_n.read() << "\" ";
        mHdltvinHandle << " , " <<  " \"in_stream_TDATA\" :  \"" << in_stream_TDATA.read() << "\" ";
        mHdltvinHandle << " , " <<  " \"in_stream_TVALID\" :  \"" << in_stream_TVALID.read() << "\" ";
        mHdltvoutHandle << mComma << "{"  <<  " \"in_stream_TREADY\" :  \"" << in_stream_TREADY.read() << "\" ";
        mHdltvinHandle << " , " <<  " \"in_stream_TUSER\" :  \"" << in_stream_TUSER.read() << "\" ";
        mHdltvinHandle << " , " <<  " \"in_stream_TLAST\" :  \"" << in_stream_TLAST.read() << "\" ";
        mHdltvoutHandle << " , " <<  " \"dMapout_TDATA\" :  \"" << dMapout_TDATA.read() << "\" ";
        mHdltvoutHandle << " , " <<  " \"dMapout_TVALID\" :  \"" << dMapout_TVALID.read() << "\" ";
        mHdltvinHandle << " , " <<  " \"dMapout_TREADY\" :  \"" << dMapout_TREADY.read() << "\" ";
        mHdltvoutHandle << " , " <<  " \"dMapout_TUSER\" :  \"" << dMapout_TUSER.read() << "\" ";
        mHdltvoutHandle << " , " <<  " \"dMapout_TLAST\" :  \"" << dMapout_TLAST.read() << "\" ";
        mHdltvinHandle << " , " <<  " \"s_axi_CONTROL_BUS_AWVALID\" :  \"" << s_axi_CONTROL_BUS_AWVALID.read() << "\" ";
        mHdltvoutHandle << " , " <<  " \"s_axi_CONTROL_BUS_AWREADY\" :  \"" << s_axi_CONTROL_BUS_AWREADY.read() << "\" ";
        mHdltvinHandle << " , " <<  " \"s_axi_CONTROL_BUS_AWADDR\" :  \"" << s_axi_CONTROL_BUS_AWADDR.read() << "\" ";
        mHdltvinHandle << " , " <<  " \"s_axi_CONTROL_BUS_WVALID\" :  \"" << s_axi_CONTROL_BUS_WVALID.read() << "\" ";
        mHdltvoutHandle << " , " <<  " \"s_axi_CONTROL_BUS_WREADY\" :  \"" << s_axi_CONTROL_BUS_WREADY.read() << "\" ";
        mHdltvinHandle << " , " <<  " \"s_axi_CONTROL_BUS_WDATA\" :  \"" << s_axi_CONTROL_BUS_WDATA.read() << "\" ";
        mHdltvinHandle << " , " <<  " \"s_axi_CONTROL_BUS_WSTRB\" :  \"" << s_axi_CONTROL_BUS_WSTRB.read() << "\" ";
        mHdltvinHandle << " , " <<  " \"s_axi_CONTROL_BUS_ARVALID\" :  \"" << s_axi_CONTROL_BUS_ARVALID.read() << "\" ";
        mHdltvoutHandle << " , " <<  " \"s_axi_CONTROL_BUS_ARREADY\" :  \"" << s_axi_CONTROL_BUS_ARREADY.read() << "\" ";
        mHdltvinHandle << " , " <<  " \"s_axi_CONTROL_BUS_ARADDR\" :  \"" << s_axi_CONTROL_BUS_ARADDR.read() << "\" ";
        mHdltvoutHandle << " , " <<  " \"s_axi_CONTROL_BUS_RVALID\" :  \"" << s_axi_CONTROL_BUS_RVALID.read() << "\" ";
        mHdltvinHandle << " , " <<  " \"s_axi_CONTROL_BUS_RREADY\" :  \"" << s_axi_CONTROL_BUS_RREADY.read() << "\" ";
        mHdltvoutHandle << " , " <<  " \"s_axi_CONTROL_BUS_RDATA\" :  \"" << s_axi_CONTROL_BUS_RDATA.read() << "\" ";
        mHdltvoutHandle << " , " <<  " \"s_axi_CONTROL_BUS_RRESP\" :  \"" << s_axi_CONTROL_BUS_RRESP.read() << "\" ";
        mHdltvoutHandle << " , " <<  " \"s_axi_CONTROL_BUS_BVALID\" :  \"" << s_axi_CONTROL_BUS_BVALID.read() << "\" ";
        mHdltvinHandle << " , " <<  " \"s_axi_CONTROL_BUS_BREADY\" :  \"" << s_axi_CONTROL_BUS_BREADY.read() << "\" ";
        mHdltvoutHandle << " , " <<  " \"s_axi_CONTROL_BUS_BRESP\" :  \"" << s_axi_CONTROL_BUS_BRESP.read() << "\" ";
        mHdltvoutHandle << " , " <<  " \"interrupt\" :  \"" << interrupt.read() << "\" ";
        mHdltvinHandle << " , " <<  " \"ap_rst_n_AXI_LITE_clk\" :  \"" << ap_rst_n_AXI_LITE_clk.read() << "\" ";
        mHdltvinHandle << "}" << std::endl;
        mHdltvoutHandle << "}" << std::endl;
        ap_cycleNo++;
    }
}

}

