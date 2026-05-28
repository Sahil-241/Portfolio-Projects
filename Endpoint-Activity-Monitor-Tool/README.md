# Endpoint Activity & Keystroke Monitor (Internal Auditing Tool)

## 📌 Project Overview
This project is a Python-based Endpoint Monitoring tool developed to log user activity and keystrokes for internal security auditing and compliance verification. It simulates how an Endpoint Detection and Response (EDR) agent monitors user input at the kernel/OS level.

## 🛠️ Features & Tools Used
* **Language:** Python 3
* **Libraries:** `pynput` (for monitoring keyboard events), `threading`
* **OS Environment:** Kali Linux / Ubuntu
* **Logging:** Captures alphanumeric keys, special system keys (Space, Backspace, Ctrl, Enter), and exports them to a structured local log file (`system_logs.txt`).

## 🔍 Code Execution & Output Verification
The tool successfully hooks into system input events and records inputs cleanly:
* Captured clear text formatting along with meta-keys like `[SPACE]` and `[Key.backspace]`.
* Handled clean exits via `KeyboardInterrupt` (`Ctrl+C`) during the session teardown.
