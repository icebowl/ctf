#!/usr/bin env python
#import scapy
from scapy.all import *

pcap = rdpcap("capture.pcap")

for p in pcap[UDP]:
	p.show()
