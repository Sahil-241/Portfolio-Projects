# Wireshark Network Traffic Analysis Lab

## 📌 Project Overview
This project demonstrates network traffic monitoring and packet analysis using Wireshark during an active reconnaissance phase (Nmap Scan) inside an isolated virtual lab environment.

## 🛠️ Tools Used
* **VirtualBox:** Isolated network setup for security testing.
* **Kali Linux (Attacker IP: `192.168.31.48`):** Running network mapping.
* **Metasploitable (Target IP: `10.0.2.15`):** Vulnerable machine.
* **Wireshark:** Packet capturing and protocol filtering.

## 🔍 Key Insights & Analysis
* **Protocol Filtered:** `TCP`
* **Attack Pattern Identified:** Multiple `[SYN]` packets sent from the attacker to various destination ports (21, 111, 587, 8080) in a very short time window, indicating an automated TCP SYN port scan.
* **Closed Ports:** Target responded with `[RST, ACK]` (Reset) packets for closed ports, confirming the network security posture of the target machine.
