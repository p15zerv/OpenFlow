

cplusplus {{
    #include "openflow/openflow/protocol/OpenFlow.h"
    #include "openflow/messages/openflowprotocol/base/OFP_Message_m.h"
    #include "inet/linklayer/ethernet/EtherFrame_m.h"
    
    namespace ofp {
        inline std::ostream& operator<<(std::ostream& os, oxm_basic_match match)
        {
        	os << "OFB_ETH_TYPE: " << std::hex << match.dl_type << ", OFB_ETH_SRC: " << match.dl_src;
        	os << ", OFB_ETH_DST: " << match.dl_dst << ", OFB_IN_PORT: " << match.in_port << endl; 
    		os << ", OFB_ARP_OP: " << match.nw_proto << ", OFB_ARP_SHA: " << match.nw_src;
    		os << ", OFB_ARP_THA: " << match.nw_dst << ", OFB_ARP_SPA: " << match.tp_src;
    		os << ", OFB_ARP_TPA: " << match.tp_dst << endl;
    		return os;
    	}
    }
}};

struct ofp::ofp_header;
//class EthernetIIFrame;
struct ofp::oxm_basic_match;
struct ofp::oxm_tlv;
packet ofp::OFP_Message;

namespace ofp;

// When packets are received by the data plane and sent to the connected controller,
// the OFP_PACKET_IN messages are used. If the complete packet needs to be sent to the controller, because it can not be
// stored in the bufer, it is encapsulated in the packet-in message.
packet OFP_Packet_In extends OFP_Message
{
    uint32_t buffer_id;     // ID assigned by datapath. 
    uint16_t total_len;     // Full length of frame. 
    uint8_t reason;         // Reason packet is being sent (one of OFPR_*) 
//    EthernetIIFrame frame;
    oxm_basic_match match;
//   	oxm_tlv tlv[];
//    uint8_t data[0];        // Ethernet frame, halfway through 32-bit word,
                            // so the IP header is 32-bit aligned.  The
                            // amount of data is inferred from the length
                            // field in the header.  Because of padding,
                            // offsetof(struct ofp_packet_in, data) ==
                            // sizeof(struct ofp_packet_in) - 2. 
    
}