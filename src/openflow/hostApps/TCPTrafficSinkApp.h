
#ifndef OPENFLOW_HOSTAPPS_TCP_TRAFFIC_SINK_APP_H_
#define OPENFLOW_HOSTAPPS_TCP_TRAFFIC_SINK_APP_H_

#include "inet/common/INETDefs.h"
#include <iostream>
#include <fstream>
#include <string>
#include <vector>
#include "inet/transportlayer/contract/tcp/TCPSocket.h"

namespace ofp{

/**
 * Single-connection TCP application.
 */
class TCPTrafficSinkApp : public cSimpleModule, public virtual inet::TCPSocket::CallbackInterface
{

  protected:
    int localPort;
    const char * localAddress;
    inet::TCPSocket socket;
    virtual void initialize() override;
    virtual void handleMessage(cMessage *msg) override;
    virtual void socketDataArrived(int connId, void *yourPtr, cPacket *msg, bool urgent) override;
    virtual void socketEstablished(int connId, void *yourPtr) override;
    virtual void socketPeerClosed(int connId, void *yourPtr) override;
    virtual void socketClosed(int connId, void *yourPtr) override;
    virtual void socketFailure(int connId, void *yourPtr, int code) override;
    virtual void socketStatusArrived(int connId, void *yourPtr, inet::TCPStatusInfo *status) override;

};

} /*end namespace ofp*/

#endif /** OPENFLOW_HOSTAPPS_TCP_TRAFFIC_SINK_APP_H_**/

