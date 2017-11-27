
#ifndef KNLLDPAGENT_H_
#define KNLLDPAGENT_H_

#include <omnetpp.h>
#include "openflow/controllerApps/LLDPAgent.h"
#include "openflow/controllerApps/AbstractControllerApp.h"
#include "openflow/messages/LLDP_m.h"
#include "inet/transportlayer/contract/tcp/TCPSocket.h"
#include "openflow/openflow/controller/Switch_Info.h"
#include "openflow/controllerApps/LLDPMibGraph.h"
#include "openflow/messages/OFP_Features_Reply_m.h"
#include "openflow/messages/OFP_Packet_In_m.h"
#include "openflow/kandoo/KandooAgent.h"
#include "openflow/utility/LLDP_Wrapper.h"


class KN_LLDPAgent:public LLDPAgent {


public:
    KN_LLDPAgent();
    ~KN_LLDPAgent();
    LLDPMibGraph * getMibGraph();

protected:
    void receiveSignal(cComponent *src, simsignal_t id, cObject *obj);
    void initialize();
    void handlePacketIn(OFP_Packet_In * packet_in_msg);
    KandooAgent * kandooAgent;
    simsignal_t kandooEventSignalId;
    std::string appName;
};


#endif