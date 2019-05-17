package openflow.utility;

// Calculates a Spanning Tree in the OpenFlow network.
// The purpose is to prevent packet loops in the network.
simple ControllerInvolvementFilter
{
    parameters:
        @class(ofp::ControllerInvolvementFilter);
        @signal[cpPingPacketHash](type="unsigned long");
        @statistic[cpPingPacketHash](title="CpPingPacketHash"; record=vector?,stats; interpolationmode=none);
        @display("i=spanning-tree");
}
