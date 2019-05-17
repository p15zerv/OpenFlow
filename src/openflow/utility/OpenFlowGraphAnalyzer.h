
#ifndef OPENFLOW_UTILITY_OPENFLOWGRAPHANALYZER_H_
#define OPENFLOW_UTILITY_OPENFLOWGRAPHANALYZER_H_

#include <omnetpp.h>
#include "openflow/openflow/switch/OF_Switch.h"

using namespace omnetpp;

class Node;

namespace ofp{

class OpenFlowGraphAnalyzer : public cSimpleModule
{

public:
    virtual void finish();


protected:
        cTopology topo;

        std::list<std::list<cTopology::Node *> > computedPaths;
        std::list<cTopology::Node * > getShortestPath(cTopology::Node * src, cTopology::Node * trg);

        uint32_t maxPathLength;
        uint32_t minPathLength;
        double avgPathLength;
        int numClientNodes;
        int numSwitchNodes;
        double avgNumSwitchLinks;
        bool considerOnlyEndToEnd;

        std::map<std::string,int> swMap;
        std::map<std::string,int> clMap;


        virtual int numInitStages() const  {return inet::NUM_INIT_STAGES;}
        virtual void initialize(int stage);
        virtual void handleMessage(cMessage *msg);
};

} /*end namespace ofp*/

#endif /* OPENFLOW_UTILITY_OPENFLOWGRAPHANALYZER_H_ */
