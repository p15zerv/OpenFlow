
#ifndef OPENFLOW_HYPERFLOW_HYPERFLOWSYNCHRONIZER_H_
#define OPENFLOW_HYPERFLOW_HYPERFLOWSYNCHRONIZER_H_

#include "inet/transportlayer/contract/tcp/TCPSocket.h"
#include <omnetpp.h>
#include "openflow/openflow/controller/Switch_Info.h"
#include "openflow/messages/hyperflow/HF_ReportIn_m.h"
#include "openflow/messages/hyperflow/HF_SyncRequest_m.h"
#include "openflow/messages/hyperflow/HF_SyncReply_m.h"
#include "openflow/messages/hyperflow/HF_ChangeNotification_m.h"
#include "openflow/hyperflow/HyperFlowStructs.h"


namespace ofp{

class HyperFlowSynchronizer: public cSimpleModule
{
public:
    HyperFlowSynchronizer();
    ~HyperFlowSynchronizer();



protected:

    //stats
    simsignal_t queueSize;
    simsignal_t waitingTime;

    inet::TCPSocket socket;

    virtual void initialize();
    virtual void handleMessage(cMessage *msg);

    std::map< int,inet::TCPSocket * > socketMap;

    std::list<ControlChannelEntry> controlChannel;
    std::list<DataChannelEntry> dataChannel;
    long dataChannelSizeCache;

    double serviceTime;
    std::list<cMessage *> msgList;
    bool busy;

    inet::TCPSocket *findSocketFor(cMessage *msg);
    void handleSyncRequest(HF_SyncRequest *msg);
    void handleChangeNotification(HF_ChangeNotification *msg);
    void handleReportIn(HF_ReportIn *msg);
    void processQueuedMsg(cMessage * msg);

};

} /*end namespace ofp*/

#endif /* OPENFLOW_HYPERFLOW_HYPERFLOWSYNCHRONIZER_H_ */
