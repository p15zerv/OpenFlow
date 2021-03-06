
#ifndef OPENFLOW_KANDOO_KANDOO_AGENT_H_
#define OPENFLOW_KANDOO_KANDOO_AGENT_H_

#include <omnetpp.h>
#include "openflow/controllerApps/AbstractTCPControllerApp.h"
#include "inet/transportlayer/contract/tcp/TCPSocket.h"
#include "openflow/messages/kandoo/KN_Packet_m.h"

namespace ofp{

struct SwitchControllerMapping {
    std::string switchId;
    std::string controllerId;
    inet::TCPSocket *socket;
};

class KandooAgent:public AbstractTCPControllerApp {


public:
    KandooAgent();
    ~KandooAgent();

    bool getIsRootController();

    void sendRequest(KandooEntry entry);
    void sendReply(KN_Packet * knpck,KandooEntry entry);

    void handleKandooPacket(KN_Packet * knpck);

    void sendReplyToSwitchAuthoritive(std::string switchId, KandooEntry entry);

protected:

    void initialize();
    virtual void handleMessage(cMessage *msg);
    virtual void processQueuedMsg(cMessage *data_msg);

    bool isRootController;

    std::list<SwitchControllerMapping> switchControllerMapping;

    simsignal_t kandooEventSignalId;


};

} /*end namespace ofp*/

#endif /** OPENFLOW_KANDOO_KANDOO_AGENT_H_ **/
