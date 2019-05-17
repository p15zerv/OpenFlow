#include "openflow/hyperflow/HF_ReFire_Wrapper.h"

namespace ofp{

HF_ReFire_Wrapper::HF_ReFire_Wrapper(){

}


HF_ReFire_Wrapper::~HF_ReFire_Wrapper(){

}


const DataChannelEntry& HF_ReFire_Wrapper::getDataChannelEntry() const{
    return this->dataChannelEntry;
}

void HF_ReFire_Wrapper::setDataChannelEntry(const DataChannelEntry& dataEntry){
    this->dataChannelEntry = dataEntry;
}

} /*end namespace ofp*/
