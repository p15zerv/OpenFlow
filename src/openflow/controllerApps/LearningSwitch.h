
#ifndef LEARNINGSWITCH_H_
#define LEARNINGSWITCH_H_

#include <omnetpp.h>
#include "openflow/controllerApps/AbstractControllerApp.h"
#include "inet/linklayer/common/MACAddress.h"
#include <stdint.h>

using namespace omnetpp;

namespace ofp{

class LearningSwitch:public AbstractControllerApp {


public:
    LearningSwitch();
    ~LearningSwitch();

protected:
    void receiveSignal(cComponent *src, simsignal_t id, cObject *obj, cObject *details) override;
    void initialize();
    void doSwitching(OFP_Packet_In *packet_in_msg);

    std::map<Switch_Info *, std::map<inet::MACAddress,uint32_t> > lookupTable;

    int idleTimeout;
    int hardTimeout;


};

} /*end namespace ofp*/

#endif
