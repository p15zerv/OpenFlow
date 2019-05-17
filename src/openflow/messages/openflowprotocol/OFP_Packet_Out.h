/*
 * OFP_Packet_Out.h
 *
 *  Created on: Nov 9, 2018
 *      Author: timo
 */

#ifndef OPENFLOW_MESSAGES_OPENFLOWPROTOCOL_OFP_PACKET_OUT_H_
#define OPENFLOW_MESSAGES_OPENFLOWPROTOCOL_OFP_PACKET_OUT_H_

#include <openflow/openflow/protocol/OpenFlow.h>

//include base type
#include <openflow/messages/openflowprotocol/base/OFP_Packet_Out_m.h>

//choose implementation for the OFP version.
#if OFP_VERSION_IN_USE == OFP_100
#elif OFP_VERSION_IN_USE == OFP_135
#elif OFP_VERSION_IN_USE == OFP_141
#elif OFP_VERSION_IN_USE == OFP_151
#endif



#endif /* OPENFLOW_MESSAGES_OPENFLOWPROTOCOL_OFP_PACKET_OUT_H_ */
