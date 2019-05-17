
#ifndef OPENFLOW_UTILITY_KANDOOSTRUCTS_H_
#define OPENFLOW_UTILITY_KANDOOSTRUCTS_H_

namespace ofp{

struct KandooEntry{
    std::string srcController;
    std::string trgController;
    std::string trgApp;
    std::string srcApp;
    std::string trgSwitch;
    std::string srcSwitch;
    cObject * payload;
    int type; //0 inform, 1 request, 2 reply
};

} /*end namespace ofp*/

#endif /* OPENFLOW_UTILITY_KANDOOSTRUCTS_H_ */
