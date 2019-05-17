

#ifndef OPENFLOW_UTILITY_LLDP_WRAPPER_H_
#define OPENFLOW_UTILITY_LLDP_WRAPPER_H_

#include <omnetpp.h>

using namespace omnetpp;

namespace ofp{

class LLDP_Wrapper: public cObject {

public:
    LLDP_Wrapper();
    ~LLDP_Wrapper();

    const std::string& getDstId() const;
    void setDstId(const std::string& dstId);
    int getDstPort() const;
    void setDstPort(int dstPort);
    const std::string& getSrcId() const;
    void setSrcId(const std::string& srcId);
    int getSrcPort() const;
    void setSrcPort(int srcPort);


protected:
    std::string dstId;
    std::string srcId;
    int dstPort;
    int srcPort;

};

} /*end namespace ofp*/


#endif /* OPENFLOW_UTILITY_LLDP_WRAPPER_H_ */
