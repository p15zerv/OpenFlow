

#ifndef OPENFLOW_OPENFLOW_SWITCH_OF_SWITCH_H_
#define OPENFLOW_OPENFLOW_SWITCH_OF_SWITCH_H_

#include <omnetpp.h>
#include "inet/transportlayer/contract/tcp/TCPSocket.h"

#include "openflow/openflow/switch/buffer/Buffer.h"
#include "openflow/messages/openflowprotocol/OFP_Message.h"
#include "openflow/openflow/switch/flowtable/old/Flow_Table.h"
#include <vector>

namespace ofp{

/**
 * Openflow Switching Engine.
 * TODO use new FlowTable module.
 */
class OF_Switch: public cSimpleModule
{
public:
    OF_Switch();
    ~OF_Switch();
    void disablePorts(std::vector<int> ports);
    virtual void finish();

protected:
    double flowTimeoutPollInterval;
    double serviceTime;
    bool busy;
    bool sendCompletePacket;

    long controlPlanePacket;
    long dataPlanePacket;
    long flowTableHit;
    long flowTableMiss;

    //stats
    simsignal_t dpPingPacketHash;
    simsignal_t cpPingPacketHash;
    simsignal_t queueSize;
    simsignal_t bufferSize;
    simsignal_t waitingTime;

    std::list<cMessage *> msgList;
    std::vector<ofp_port> portVector;


    Buffer buffer;
    Flow_Table flowTable;
    inet::TCPSocket socket;

    virtual void initialize();
    virtual void handleMessage(cMessage *msg);
    void connect(const char *connectToAddress);

    void processQueuedMsg(cMessage *data_msg);
    void handleFeaturesRequestMessage(OFP_Message *of_msg);
    void handleFlowModMessage(OFP_Message *of_msg);
    void handlePacketOutMessage(OFP_Message *of_msg);
    void executePacketOutAction(ofp_action_output *action, inet::EthernetIIFrame *frame, uint32_t inport);
    void processFrame(inet::EthernetIIFrame *frame);
    void handleMissMatchedPacket(inet::EthernetIIFrame *frame);
};

} /*end namespace ofp*/

#endif /* OPENFLOW_OPENFLOW_SWITCH_OF_SWITCH_H_ */
