

cplusplus {{
    #include "openflow/openflow/controller/Switch_Info.h"    
    namespace ofp{
        typedef std::list<Switch_Info *> SwitchInfoList;
    }
}};


class noncobject ofp::SwitchInfoList;   


namespace ofp;

// When packets are received by the data plane and sent to the connected controller,
// the OFP_PACKET_IN messages are used. If the complete packet needs to be sent to the controller, because it can not be
// stored in the bufer, it is encapsulated in the packet-in message.
packet HF_ReportIn{
    string controllerId;
    SwitchInfoList switchInfoList; 
}