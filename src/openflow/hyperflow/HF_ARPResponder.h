
#ifndef OPENFLOW_HYPERFLOW_HFARPRESPONDER_H_
#define OPENFLOW_HYPERFLOW_HFARPRESPONDER_H_

#include <omnetpp.h>
#include "openflow/messages/openflowprotocol/OFP_Packet_In.h"
#include "openflow/controllerApps/ARPResponder.h"
#include "openflow/hyperflow/HyperFlowAgent.h"
#include "openflow/hyperflow/HF_ReFire_Wrapper.h"

using namespace omnetpp;

namespace ofp{

class HF_ARPResponder:public ARPResponder {


public:
    HF_ARPResponder();
    ~HF_ARPResponder();


protected:
    void receiveSignal(cComponent *src, simsignal_t id, cObject *obj, cObject *details) override;
    void initialize();
    void handlePacketIn(OFP_Packet_In * packet_in_msg);

    HyperFlowAgent * hfAgent;
    simsignal_t HyperFlowReFireSignalId;
};

} /*end namespace ofp*/

#endif /** OPENFLOW_HYPERFLOW_HFARPRESPONDER_H_ **/
