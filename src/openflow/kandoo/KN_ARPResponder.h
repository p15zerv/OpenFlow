
#ifndef OPENFLOW_KANDOO_KNARPRESPONDER_H_
#define OPENFLOW_KANDOO_KNARPRESPONDER_H_

#include <omnetpp.h>
#include "openflow/messages/openflowprotocol/OFP_Packet_In.h"
#include "openflow/controllerApps/ARPResponder.h"
#include "openflow/kandoo/KandooAgent.h"

using namespace omnetpp;

namespace ofp{

class KN_ARPResponder:public ARPResponder {


public:
    KN_ARPResponder();
    ~KN_ARPResponder();


protected:
    void receiveSignal(cComponent *src, simsignal_t id, cObject *obj, cObject *details) override;
    void initialize();
    void handlePacketIn(OFP_Packet_In * packet_in_msg);

    KandooAgent * knAgent;
    simsignal_t kandooEventSignalId;
    std::string appName;
};

} /*end namespace ofp*/

#endif /** OPENFLOW_KANDOO_KNARPRESPONDER_H_ **/
