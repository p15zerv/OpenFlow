//
// This program is free software: you can redistribute it and/or modifyOFP_Message
// it under the terms of the GNU Lesser General Public License as published by
// the Free Software Foundation, either version 3 of the License, or
// (at your option) any later version.
// 
// This program is distributed in the hope that it will be useful,
// but WITHOUT ANY WARRANTY; without even the implied warranty of
// MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
// GNU Lesser General Public License for more details.
// 
// You should have received a copy of the GNU Lesser General Public License
// along with this program.  If not, see http://www.gnu.org/licenses/.
// 

#ifndef OPENFLOW_MESSAGES_OPENFLOWPROTOCOL_OFP_MESSAGE_H_
#define OPENFLOW_MESSAGES_OPENFLOWPROTOCOL_OFP_MESSAGE_H_

#include <openflow/openflow/protocol/OpenFlow.h>

//include base type
#include <openflow/messages/openflowprotocol/base/OFP_Message_m.h>

//choose implementation for the OFP version.
#if OFP_VERSION_IN_USE == OFP_100
#elif OFP_VERSION_IN_USE == OFP_135
#elif OFP_VERSION_IN_USE == OFP_141
#elif OFP_VERSION_IN_USE == OFP_151
#endif

#endif /* OPENFLOW_MESSAGES_OPENFLOWPROTOCOL_OFP_MESSAGE_H_ */
