
#ifndef OPENFLOW_OPENFLOW_SWITCH_FLOW_TABLE_H_
#define OPENFLOW_OPENFLOW_SWITCH_FLOW_TABLE_H_

#include <openflow/openflow/protocol/OpenFlow.h>
#include <vector>
#include "openflow/openflow/switch/Flow_Table_Entry.h"
#include <string>
#include <omnetpp.h>


namespace ofp{

class Flow_Table {
public:
    Flow_Table();
    void addEntry(Flow_Table_Entry entry);
    Flow_Table_Entry * lookup(oxm_basic_match &match);
    void removeExpiredEntries();
    std::string exportToXML();
    void importFromXML(omnetpp::cXMLElement* xmlDoc);


private:
    std::list<Flow_Table_Entry> entryList;
};

} /*end namespace ofp*/



#endif /* OPENFLOW_OPENFLOW_SWITCH_FLOW_TABLE_H_ */
