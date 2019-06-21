

#ifndef OPENFLOW_OPENFLOW_SWITCH_BUFFER_H_
#define OPENFLOW_OPENFLOW_SWITCH_BUFFER_H_

#include <deque>
#include <map>
#include "inet/linklayer/ethernet/EtherFrame_m.h"

namespace ofp{

class Buffer {

public:
    Buffer();
    Buffer(int cap);
    ~Buffer();
    bool isfull();
    uint32_t storeMessage(inet::EthernetIIFrame *msg);
    bool deleteMessage(inet::EthernetIIFrame *msg);
    inet::EthernetIIFrame *returnMessage(uint32_t buffer_id);
    uint32_t getCapacity();
    int size();


protected:
    std::map<uint32_t, inet::EthernetIIFrame *> pending_msgs;
    uint32_t capacity;
    uint32_t next_buffer_id;
};

} /*end namespace ofp*/


#endif /* OPENFLOW_OPENFLOW_SWITCH_BUFFER_H_ */
