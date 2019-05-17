

cplusplus {{
    #include "openflow/openflow/protocol/OpenFlow.h"
    #include "openflow/messages/openflowprotocol/base/OFP_Message_m.h"
}};



packet ofp::OFP_Message;

namespace ofp;

//Upon session establishment, the controller sends an OFP Features Request message
//to get information about the capabilities of a switch. This message does
//not contain a body beyond the OpenFlow header. The switch responds with an
//OFP Features Reply message.
packet OFP_Features_Request extends OFP_Message
{
}