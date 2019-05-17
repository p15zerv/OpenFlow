
#ifndef ARPRESPONDER_H_
#define ARPRESPONDER_H_

#include <omnetpp.h>
#include "openflow/controllerApps/AbstractControllerApp.h"
#include "inet/transportlayer/contract/tcp/TCPSocket.h"
#include "openflow/openflow/controller/Switch_Info.h"
#include "openflow/messages/openflowprotocol/OFP_Features_Reply.h"
#include "openflow/messages/openflowprotocol/OFP_Packet_In.h"

namespace ofp{

class ARPResponder:public AbstractControllerApp {


public:
    ARPResponder();
    ~ARPResponder();
    virtual void finish();

    bool addEntry(std::string srcIp, inet::MACAddress srcMac);

protected:
    void receiveSignal(cComponent *src, simsignal_t id, cObject *obj, cObject *details) override;
    void initialize();
    virtual void handleMessage(cMessage *msg);
    virtual void handlePacketIn(OFP_Packet_In * packet_in_msg);

    virtual inet::EthernetIIFrame * createArpReply(inet::IPv4Address srcIp, inet::IPv4Address dstIp, inet::MACAddress srcMac, inet::MACAddress dstMac);

    std::map<inet::MACAddress,std::string> macToIp;
    std::map<std::string,inet::MACAddress> ipToMac;

    long answeredArp;
    long floodedArp;
};

} /*end namespace ofp*/

#endif
