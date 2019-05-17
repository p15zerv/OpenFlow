
cplusplus {{
    #include "openflow/openflow/protocol/OpenFlow.h"
    #include "openflow/messages/openflowprotocol/base/OFP_Message_m.h"    
    
}};


//struct ofp_action_header;
packet ofp::OFP_Message;

namespace ofp;

packet OFP_Port_Mod extends OFP_Message
{
	uint32_t port_no;
	//uint8_t pad[4];
	uint8_t hw_addr[6]; 
	//uint8_t pad2[2];        //Pad to 64 bits.
	uint32_t config;          //Bitmap of OFPPC_* flags.
	uint32_t mask;            //Bitmap of OFPPC_* flags to be changed.
	uint32_t advertise;       //Bitmap of OFPPF_*.  Zero all bits to prevent any action taking place.
	//uint8_t pad3[4];        //Pad to 64 bits
}