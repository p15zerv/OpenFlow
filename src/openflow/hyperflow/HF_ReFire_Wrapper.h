

#ifndef OPENFLOW_HYPERFLOW_HF_REFIRE_WRAPPER_H_
#define OPENFLOW_HYPERFLOW_HF_REFIRE_WRAPPER_H_

#include <omnetpp.h>
#include "inet/linklayer/common/MACAddress.h"
#include "openflow/hyperflow/HyperFlowStructs.h"

using namespace std;

namespace ofp{

class HF_ReFire_Wrapper: public cObject {

public:
    HF_ReFire_Wrapper();
    ~HF_ReFire_Wrapper();


    const DataChannelEntry& getDataChannelEntry() const;
    void setDataChannelEntry(const DataChannelEntry& dataEntry);


protected:
    DataChannelEntry dataChannelEntry;
};

} /*end namespace ofp*/


#endif /* OPENFLOW_HYPERFLOW_HF_REFIRE_WRAPPER_H_ */
