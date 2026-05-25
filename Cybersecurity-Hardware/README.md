# USB HID Keystroke Injection & Brute-Force Emulator

## 📌 Project Overview
A specialized hardware-based simulation script developed for penetration testing and physical audit assessments. Built on top of a low-cost microcontroller architecture, it models a standard human interface peripheral to safely demonstrate system defensive postures against rapid external automated typing vulnerabilities.

## 🛠️ Tech Stack & Implementation
* **Language/IDE:** C / C++ (Arduino Core Libraries)
* **Hardware Supported:** Digispark ATtiny85 Development Board
* **Key Features:**
  * Embedded keystroke emulator mimicking raw HID keyboard signals directly into endpoints.
  * Automated sequential variable array configurations for zero-padded numeric brute-force emulation.
  * Native hardware rate-limiting handling mechanisms to balance interface execution time gaps.
