

cplusplus {{
    #include "openflow/openflow/protocol/OpenFlow.h"
}};

class ofp::ofp_header extends void;

namespace ofp;

// base class for all OpenFlow protocol messages; only contains the OpenFlow header
packet OFP_Message
{
    ofp_header header;
    
}