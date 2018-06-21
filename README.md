# titan.core

TTCN-3 is a standardized, modular language specifically designed for testing. 
Eclipse Titan offers a free and open source (FOSS) compiler both for TTCN-3 and for 
ASN.1 (Abstract Syntax Notation One).

# Standards page (also including downloadable code):

* http://www.ttcn-3.org/

# Main project page:

* https://projects.eclipse.org/projects/tools.titan

# Community forum:

* https://www.eclipse.org/forums/index.php/f/297/

# Bugzilla

* https://bugs.eclipse.org/bugs/buglist.cgi?field0-0-0=product&field0-0-1=component&list_id=15328562&order=changeddate%2Cbug_status%20DESC%2Creporter%20DESC%2Ccomponent%2Cassigned_to%2Cpriority%2Cbug_severity&query_based_on=&query_format=advanced&type0-0-0=substring&type0-0-1=substring&value0-0-0=Titan&value0-0-1=Titan

# Openhub page:

* https://www.openhub.net/p/eclipse_titan/


## Introductory video of a presentation about Titan held at EclipseCon 2014: 
* https://www.youtube.com/watch?v=2knzZuwzn-Y.

## Titan Datasheet on polarsys.org:
http://polarsys.org/sites/default/files/custom_uploads/TITAN%20Datasheet%20A4%202.1.pdf

## Ericsson TTCN-3 Course, Presentation material
https://www.eclipse.org/downloads/download.php?file=/titan/TTCN3_Course_PartI_EclipseLicensed.pdf

## Ericsson TTCN-3 Course, Presentation material, part II (Titan specifics)
https://www.eclipse.org/downloads/download.php?file=/titan/TTCN3_Course_PartII_EclipseLicensed.pdf




## Binaries for a number of Linux platforms can be downloaded from:


* https://projects.eclipse.org/projects/tools.titan/downloads

# Contributor workflows:

## Simplified Titan contributor workflow ( to be applied when agreed previously)
Committing directly to github.com/eclipse/titan.* using Gerrithub:

* https://docs.google.com/presentation/d/1j5RxJC13gFCCGcLB7ZwyDVCzBWroapUR9AVdqB5fdig/edit#slide=id.p

## Titan contributor workflow to github.com/eclipse/titan.*
covering Gerrit code review

* https://docs.google.com/presentation/d/1AVi3Be3qYmkYm6VEf4BnYHYa3hwpjjIM5EQc7W6LtNE/edit#slide=id.p

## Titan contributor workflow to Eclipse git
Committing to git.eclipse.org/titan.* through gerrit code review

* https://docs.google.com/presentation/d/15zA7HjTlvEOshSb5W9qFQ7e4zIAU6Blk3_EV8ewYy_Y/edit#slide=id.p


# Related products:

(Note: the git.eclipse.org links below are to be used in git operations only, not as http url's)

## Eclipse IDE plug-ins (Designer, Executor, LogViewer, Titanium):

Source code:

* https://github.com/eclipse/titan.EclipsePlug-ins

Compressed update site and SHA512 checksum:

* https://projects.eclipse.org/projects/tools.titan/downloads
 
## Test Ports:
 
* [Common_Components.Abstract_Socket](https://github.com/eclipse/titan.TestPorts.Common_Components.Abstract_Socket)
* [Common_Components.Socket-API](https://github.com/eclipse/titan.TestPorts.Common_Components.Socket-API)
* [HTTPmsg](https://github.com/eclipse/titan.TestPorts.HTTPmsg)
* [IPL4asp](https://github.com/eclipse/titan.TestPorts.IPL4asp)
* [LANL2asp](https://github.com/eclipse/titan.TestPorts.LANL2asp)
* [LDAPasp_RFC4511](https://github.com/eclipse/titan.TestPorts.LDAPasp_RFC4511)
* [LDAPmsg](https://github.com/eclipse/titan.TestPorts.LDAPmsg)
* [PCAPasp](https://github.com/eclipse/titan.TestPorts.PCAPasp)
* [PIPEas](https://github.com/eclipse/titan.TestPorts.PIPEas)
* [SCTPasp](https://github.com/eclipse/titan.TestPorts.SCTPasp)
* [SIPmsg](https://github.com/eclipse/titan.TestPorts.SIPmsg)
* [SQLasp](https://github.com/eclipse/titan.TestPorts.SQLasp)
* [SSHCLIENTasp](https://github.com/eclipse/titan.TestPorts.SSHCLIENTasp)
* [STDINOUTmsg](https://github.com/eclipse/titan.TestPorts.STDINOUTmsg)
* [SUNRPCasp](https://github.com/eclipse/titan.TestPorts.SUNRPCasp)
* [TCPasp](https://github.com/eclipse/titan.TestPorts.TCPasp)
* [TELNETasp](https://github.com/eclipse/titan.TestPorts.TELNETasp)
* [UDPasp](https://github.com/eclipse/titan.TestPorts.UDPasp)
* [UNIX_DOMAIN_SOCKETasp](https://github.com/eclipse/titan.TestPorts.UNIX_DOMAIN_SOCKETasp)
* [GPIO](http://git.eclipse.org/c/titan/titan.TestPorts.GPIO.git)  
* [MTP3](http://git.eclipse.org/c/titan/titan.TestPorts.MTP3.git)
* [Serial](http://git.eclipse.org/c/titan/titan.TestPorts.Serial.git)
* [SocketCANasp](http://git.eclipse.org/c/titan/titan.TestPorts.SocketCANasp.git) 
 
 
## Protocol Modules:

* [COMMON](https://github.com/eclipse/titan.ProtocolModules.COMMON)
* [DHCP](https://github.com/eclipse/titan.ProtocolModules.DHCP)
* [DHCPv6](https://github.com/eclipse/titan.ProtocolModules.DHCPv6)
* [DIAMETER_ProtocolModule_Generator](https://github.com/eclipse/titan.ProtocolModules.DIAMETER_ProtocolModule_Generator)
* [DNS](https://github.com/eclipse/titan.ProtocolModules.DNS)
* [FrameRelay](https://github.com/eclipse/titan.ProtocolModules.FrameRelay)
* [H248_v2](https://github.com/eclipse/titan.ProtocolModules.H248_v2)
* [HTTP2](https://github.com/eclipse/titan.ProtocolModules.HTTP2.0)
* [ICAP](https://github.com/eclipse/titan.ProtocolModules.ICAP)
* [ICMP](https://github.com/eclipse/titan.ProtocolModules.ICMP)
* [ICMPv6](https://github.com/eclipse/titan.ProtocolModules.ICMPv6)
* [IKEv2](https://github.com/eclipse/titan.ProtocolModules.IKEv2)
* [IMAP_4rev1](https://github.com/eclipse/titan.ProtocolModules.IMAP_4rev1)
* [IP](https://github.com/eclipse/titan.ProtocolModules.IP)
* [IPsec](https://github.com/eclipse/titan.ProtocolModules.IPsec)
* [IUA](https://github.com/eclipse/titan.ProtocolModules.IUA)
* [JSON_v07_2006](https://github.com/eclipse/titan.ProtocolModules.JSON_v07_2006)
* [L2TP](https://github.com/eclipse/titan.ProtocolModules.L2TP)
* [M3UA](https://github.com/eclipse/titan.ProtocolModules.M3UA)
* [MIME](https://github.com/eclipse/titan.ProtocolModules.MIME)
* [MSRP](https://github.com/eclipse/titan.ProtocolModules.MSRP)
* [PPP](https://github.com/eclipse/titan.ProtocolModules.PPP)
* [ProtoBuff](https://github.com/eclipse/titan.ProtocolModules.ProtoBuff)
* [RADIUS_ProtocolModule_Generator](https://github.com/eclipse/titan.ProtocolModules.RADIUS_ProtocolModule_Generator)
* [RTP](https://github.com/eclipse/titan.ProtocolModules.RTP)
* [RTSP](https://github.com/eclipse/titan.ProtocolModules.RTSP)
* [SMPP](https://github.com/eclipse/titan.ProtocolModules.SMPP)
* [SMTP](https://github.com/eclipse/titan.ProtocolModules.SMTP)
* [SNMP](https://github.com/eclipse/titan.ProtocolModules.SNMP)
* [SRTP](https://github.com/eclipse/titan.ProtocolModules.SRTP)
* [TCP](https://github.com/eclipse/titan.ProtocolModules.TCP)
* [UDP](https://github.com/eclipse/titan.ProtocolModules.UDP)
* [WebSocket](https://github.com/eclipse/titan.ProtocolModules.WebSocket)
* [XMPP](https://github.com/eclipse/titan.ProtocolModules.XMPP)
* [BSSAPP_v7.3.0](http://git.eclipse.org/c/titan/titan.ProtocolModules.BSSAPP_v7.3.0.git)
* [BSSGP_v13.0.0](http://git.eclipse.org/c/titan/titan.ProtocolModules.BSSGP_v13.0.0.git)
* [BSSMAP_v11.2.0](http://git.eclipse.org/c/titan/titan.ProtocolModules.BSSMAP_v11.2.0.git)
* [CoAP](http://git.eclipse.org/c/titan/titan.ProtocolModules.CoAP.git)
* [DSS1_ETSI](http://git.eclipse.org/c/titan/titan.ProtocolModules.DSS1_ETSI.git)
* [DUA](http://git.eclipse.org/c/titan/titan.ProtocolModules.DUA.git)
* [EAP](http://git.eclipse.org/c/titan/titan.ProtocolModules.EAP.git)
* [GRE](http://git.eclipse.org/c/titan/titan.ProtocolModules.GRE.git)
* [GTP_v13.5.0](http://git.eclipse.org/c/titan/titan.ProtocolModules.GTP_v13.5.0.git)
* [GTPv2_v13.7.0](http://git.eclipse.org/c/titan/titan.ProtocolModules.GTPv2_v13.7.0.git)
* [HTTP2](http://git.eclipse.org/c/titan/titan.ProtocolModules.HTTP2.git)
* [ISUP_Q.762](http://git.eclipse.org/c/titan/titan.ProtocolModules.ISUP_Q.762.git)
* [LLC_v7.1.0](http://git.eclipse.org/c/titan/titan.ProtocolModules.LLC_v7.1.0.git)
* [M2PA](http://git.eclipse.org/c/titan/titan.ProtocolModules.M2PA.git)
* [M2UA](http://git.eclipse.org/c/titan/titan.ProtocolModules.M2UA.git)
* [MQTT](http://git.eclipse.org/c/titan/titan.ProtocolModules.MQTT.git)
* [MobileL3_v13.4.0](http://git.eclipse.org/c/titan/titan.ProtocolModules.MobileL3_v13.4.0.git)
* [MongoDB](http://git.eclipse.org/c/titan/titan.ProtocolModules.MongoDB.git)
* [NDP](http://git.eclipse.org/c/titan/titan.ProtocolModules.NDP.git)
* [NS_v7.3.0](http://git.eclipse.org/c/titan/titan.ProtocolModules.NS_v7.3.0.git)
* [NTAF](http://git.eclipse.org/c/titan/titan.ProtocolModules.NTAF.git)
* [OPC_UA](http://git.eclipse.org/c/titan/titan.ProtocolModules.OPC_UA.git)
* [ROSE](http://git.eclipse.org/c/titan/titan.ProtocolModules.ROSE.git)
* [SCTP](http://git.eclipse.org/c/titan/titan.ProtocolModules.SCTP.git)
* [SDP](http://git.eclipse.org/c/titan/titan.ProtocolModules.SDP.git)
* [SNDCP_v7.0.0](http://git.eclipse.org/c/titan/titan.ProtocolModules.SNDCP_v7.0.0.git)
* [STOMP](http://git.eclipse.org/c/titan/titan.ProtocolModules.STOMP.git)
* [STUN_RFC5389](http://git.eclipse.org/c/titan/titan.ProtocolModules.STUN_RFC5389.git)
* [SUA](http://git.eclipse.org/c/titan/titan.ProtocolModules.SUA.git)
* [TLS](http://git.eclipse.org/c/titan/titan.ProtocolModules.TLS.git)
* [WTP](http://git.eclipse.org/c/titan/titan.ProtocolModules.WTP.git)
* [XTDP](http://git.eclipse.org/c/titan/titan.ProtocolModules.XTDP.git)


## Protocol Emulations

* [M3UA](http://git.eclipse.org/c/titan/titan.ProtocolEmulations.M3UA.git)
* [SCCP](http://git.eclipse.org/c/titan/titan.ProtocolEmulations.SCCP.git)
* [SUA](http://git.eclipse.org/c/titan/titan.ProtocolEmulations.SUA.git)

## Libraries:

* [TCCUsefulFunctions](https://github.com/eclipse/titan.Libraries.TCCUsefulFunctions)
* [CLL](http://git.eclipse.org/c/titan/titan.Libraries.CLL.git)
* [ServiceFramework](http://git.eclipse.org/c/titan/titan.Libraries.ServiceFramework.git)
* [TLS](http://git.eclipse.org/c/titan/titan.Libraries.TLS.git)
* [Web_GUI](http://git.eclipse.org/c/titan/titan.Libraries.Web_GUI.git)

## Application Libraries:

* [CoAP](http://git.eclipse.org/c/titan/titan.ApplicationLibraries.CoAP.git)
* [LWM2M](http://git.eclipse.org/c/titan/titan.ApplicationLibraries.LWM2M.git)
* [MQTT](http://git.eclipse.org/c/titan/titan.ApplicationLibraries.MQTT.git)
 
## Applications:

* [IoT_Functiontest_Framework](http://git.eclipse.org/c/titan/titan.Applications.IoT_Functiontest_Framework.git)
* [IoT_Loadtest_Framework](http://git.eclipse.org/c/titan/titan.Applications.IoT_Loadtest_Framework.git)
* [RIoT](http://git.eclipse.org/c/titan/titan.Applications.RIoT.git)

## Miscellaneous projects: 

* https://github.com/eclipse/titan.misc
(VSBOT, SIP_ETSI,DIAMETER_Rx_ETSI, CoAP Conformance test cases,  CoAP and MQTT protocol modules for IOT-moved to Eclipse git,  more to come...) 
