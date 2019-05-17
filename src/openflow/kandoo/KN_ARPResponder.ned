package openflow.kandoo;

import openflow.controllerApps.AbstractControllerApp;

simple KN_ARPResponder like AbstractControllerApp
{
    parameters:
        @class(ofp::KN_ARPResponder);
        @signal[KandooEvent];
        @display("i=block/app");
}
