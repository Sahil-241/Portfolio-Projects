# SSH Brute-Force Attack Detection & Log Analysis Lab

## 📌 Project Overview
This project demonstrates a Security Operations Center (SOC) analyst workflow by simulating an SSH Brute-Force attack on a Linux host (Kali Linux 2025/2026 architecture) and analyzing the generated security logs using modern systemd journal auditing tools.

## 🛠️ Environment & Tools Used
* **OS Environment:** Kali Linux (Rolling Release)
* **Service Monitored:** SSH Daemon (`sshd` on Port 22)
* **Log Analysis Tool:** `journalctl` (Modern Linux systemd architecture)

## 🔍 Attack Simulation & Detection Workflow
1. **Attack Generation:** Initiated multiple malicious connection requests using invalid user credentials (`galatuser`) to trigger system authentication failures.
2. **Log Extraction:** Since modern Kali systems deprecate `/var/log/auth.log`, leveraged systemd journals to extract live security events using:
   `sudo journalctl -u ssh -n 20`
3. **Analysis Findings:** Identified explicit indicators of compromise (IoC) including:
   * `Invalid user galatuser from 127.0.0.1`
   * Multiple sequential `Failed password for invalid user` log entries, confirming a dictionary/brute-force attack pattern.
