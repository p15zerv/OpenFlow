

package openflow.kandoo;
import openflow.controllerApps.AbstractControllerApp;


simple KN_LLDPForwarding like AbstractControllerApp
{
    parameters:
        @class(ofp::KN_LLDPForwarding);
        @signal[KandooEvent];
        @signal[cpPingPacketHash](type="unsigned long");
        @statistic[cpPingPacketHash](title="CpPingPacketHash"; record=vector?,stats; interpolationmode=none);
        @display("i=block/app");
        int flowModHardTimeOut = default(0);
        int flowModIdleTimeOut = default(1);
        bool printMibGraph = default(false);
        bool dropIfNoRouteFound = default(true);
        bool ignoreArpRequests = default(false);

}
