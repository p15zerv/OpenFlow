

cplusplus {{
    #include "openflow/openflow/protocol/OpenFlow.h"
    #include "openflow/messages/openflowprotocol/base/OFP_Message_m.h"
    #include "inet/linklayer/ethernet/EtherFrame_m.h"
    
    namespace ofp {
        inline std::ostream& operator<<(std::ostream& os, ofp_action_output action)
        {
    		os << "Port (hex): " << std::hex << action.port << endl;
    		return os;
    	}
    }
}};

//struct ofp_action_header;
struct ofp::ofp_action_output;
class inet::EthernetIIFrame;
packet ofp::OFP_Message;

namespace ofp;

//When the controller decides to send a packet out through the data plane, it uses the
//OFP PACKET OUT message.
packet OFP_Packet_Out extends OFP_Message
{
	uint32_t buffer_id; // ID assigned by datapath (OFP_NO_BUFFER
                        //if none). 
	uint32_t in_port; // Packet�s input port or OFPP_CONTROLLER. 

	 ofp_action_output actions[]; // Action list. 
//	 EthernetIIFrame frame;
	 uint8_t data[0];   // Packet data. The length is inferred
							//from the length field in the header.
							//(Only meaningful if buffer_id == -1.) 
}