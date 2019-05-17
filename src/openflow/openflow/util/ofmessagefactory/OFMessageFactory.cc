//
// This program is free software: you can redistribute it and/or modify
// it under the terms of the GNU General Public License as published by
// the Free Software Foundation, either version 3 of the License, or
// (at your option) any later version.
//
// This program is distributed in the hope that it will be useful,
// but WITHOUT ANY WARRANTY; without even the implied warranty of
// MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
// GNU General Public License for more details.
//
// You should have received a copy of the GNU General Public License
// along with this program.  If not, see http://www.gnu.org/licenses/.
//
// c Timo Haeckel, for HAW Hamburg
//

#include <openflow/openflow/util/ofmessagefactory/OFMessageFactory.h>

#include <openflow/openflow/util/ofmessagefactory/OF100MessageFactory.h>
#include <openflow/openflow/util/ofmessagefactory/OF151MessageFactory.h>

namespace ofp {

AOFMessageFactory* OFMessageFactory::instance() {
    static AOFMessageFactory* _messageFactoryInstance = nullptr;
    if (!_messageFactoryInstance) {
#if OFP_VERSION_IN_USE == OFP_100
        _messageFactoryInstance = new OF100MessageFactory();
#elif OFP_VERSION_IN_USE == OFP_151
        _messageFactoryInstance = new OF151MessageFactory();
#endif
    }
    return _messageFactoryInstance;
}
;

} /* namespace ofp */
