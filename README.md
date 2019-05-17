# OpenFlow
OpenFlow framework is an open source extension to the [INET-Framework](https://inet.omnetpp.org/) for the event-based simulation of real-time Ethernet in the [OMNEST/OMNeT++](https://omnetpp.org/) simulation system. It provides implementations for network devices, controllers and controller applications supporting the [OpenFlow protocol](https://www.opennetworking.org/software-defined-standards/specifications/). It was originally created by the University of Würzburg, Germany and is now managed within the [INET frameworks](https://github.com/inet-framework/openflow).

This fork contains modified sources to increase compatibility to the other frameworks developed at the [CoRE (Communication over Realtime Ethernet)](https://core-researchgroup.de/) research group at the [HAW-Hamburg (Hamburg University of Applied Sciences)](https://www.haw-hamburg.de/english.html).

<img src="/doc/images/OpenFlow.png" alt="OpenFlow Environment" width="35%">

## Quick Start
1. Download OMNeT++ 5.1.1
    * [https://omnetpp.org/download/old](https://omnetpp.org/download/old)
2. Install OMNeT++
    * [https://doc.omnetpp.org/omnetpp/InstallGuide.pdf](https://doc.omnetpp.org/omnetpp/InstallGuide.pdf)
3. Get INET framework 3.5
    * [https://inet.omnetpp.org/Download.html](https://inet.omnetpp.org/Download.html)
4. Install CoRE plugins (optional)
    * OMNEST/OMNeT++ -> Help -> Install New Software...
    * URL `http://sim.core-rg.de/updates/`
    * Check [Abstract Network Description Language] | [CoRE Simulation Model Installer] | [Gantt Chart Timing Analyzer]
5. Get OpenFlow framework
    * GitHub: Clone framework and import it in OMNEST/OMNeT++
6. Select at least the following INET Project Features TCP Common, TCP(INET), IPv4 protocol, IPv6 protocol, Multi network layer, UDP protocol, SCTP, Ethernet, PPP, MPLS support (incl. LDP and RSVP-TE), HTTPTools, IEEE802.1d

## Continuous Integration

There is currently no CI environment set-up for this project.

### Tested Environment:  
	OS: Only tested using Ubuntu Linux 18.04.  
	OMNETPP: Running in OMNETPP 5.1.1 not tested in any other Version  
	INET: Running with INET v3.5.0  