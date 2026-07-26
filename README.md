# 💊 ESP32 Smart Medicine Reminder and Automatic Pill Dispensing System

## 🚀 IoT-Based Healthcare Automation using ESP32

An intelligent embedded healthcare solution that provides **timely medicine reminders**, **automatic pill dispensing**, and **user confirmation** using the ESP32 microcontroller, Real-Time Clock (RTC), OLED display, servo motor, buzzer, LEDs, and push button.

---

# 🌟 Project Highlights

- ⏰ Real-Time Clock (RTC) based medicine reminders
- 💊 Automatic pill dispensing using a servo motor
- 📺 OLED display for reminder and confirmation messages
- 🔔 Audible alerts using an active buzzer
- 🔴 Visual reminder using a red LED
- 🟢 Confirmation indication using a green LED
- 🔘 Push button for medicine intake confirmation
- ⚡ ESP32-based embedded healthcare system
- 🌐 Wokwi simulation support
- 🖥 Ready for KiCad PCB implementation

---

# 📑 Table of Contents

- 🚀 Overview
- 🎯 Objectives
- ✨ Key Features
- 🛠 Hardware Components
- 🔌 Circuit Connections
- 🏗 System Architecture
- 💻 Software & Tools
- ⚙ Working Principle
- 📸 Project Gallery
- 📂 Project Files
- 📁 Repository Structure
- 🚀 Future Roadmap
- 📊 Project Status
- ⚠ Disclaimer
- 👨‍💻 Author
- 📄 License

---

# 🚀 Overview

The **ESP32 Smart Medicine Reminder and Automatic Pill Dispensing System** is an IoT-enabled embedded healthcare project designed to help patients take their medications on time.

The system continuously monitors the current time using the **DS1307 Real-Time Clock (RTC)** module. Once the scheduled medicine time is reached, the ESP32 automatically activates multiple reminder mechanisms including:

- 🔔 Buzzer Alert
- 🔴 Red LED Indicator
- 📺 OLED Display Notification
- 💊 Servo Motor for Automatic Pill Dispensing

After taking the medicine, the user confirms the action by pressing the push button. The ESP32 then stops the alert, closes the medicine compartment, displays **"Medicine Taken"**, and blinks the green LED to indicate successful medicine intake.

This project demonstrates the integration of **Embedded Systems**, **Internet of Things (IoT)**, **Real-Time Control**, and **Healthcare Automation**.

---

# 🎯 Objectives

- Provide timely medicine reminders.
- Improve medication adherence.
- Automate pill dispensing.
- Minimize human error.
- Provide clear visual and audio alerts.
- Enable user confirmation after medicine intake.
- Demonstrate an IoT-based healthcare application.

---

# ✨ Key Features

| Feature | Description |
|----------|-------------|
| ⏰ RTC Scheduling | Real-time medicine reminders |
| 💊 Servo Motor | Automatic pill compartment opening |
| 📺 OLED Display | Reminder & confirmation messages |
| 🔴 Red LED | Reminder indication |
| 🟢 Green LED | Medicine taken confirmation |
| 🔔 Active Buzzer | Audible medicine alert |
| 🔘 Push Button | User confirmation |
| ⚡ ESP32 Controller | Main processing unit |
| 🌐 Wokwi Compatible | Complete simulation support |

---

# 🛠 Hardware Components

| Component | Quantity |
|-----------|---------:|
| ESP32 DevKit V1 | 1 |
| DS1307 RTC Module | 1 |
| SSD1306 OLED Display | 1 |
| SG90 Servo Motor | 1 |
| Push Button | 1 |
| Active Buzzer | 1 |
| Red LED | 1 |
| Green LED | 1 |
| 220Ω Resistor | 2 |
| Breadboard | 1 |
| Jumper Wires | As Required |

---

# 🔌 Circuit Connections

| Component | ESP32 GPIO |
|------------|-----------|
| RTC SDA | GPIO21 |
| RTC SCL | GPIO22 |
| OLED SDA | GPIO21 |
| OLED SCL | GPIO22 |
| Servo Motor | GPIO18 |
| Active Buzzer | GPIO25 |
| Red LED | GPIO26 |
| Green LED | GPIO27 |
| Push Button | GPIO19 |
| RTC VCC | 5V |
| OLED VCC | 3.3V |
| Servo VCC | 5V |
| Common Ground | GND |

---

# 🏗 System Architecture

The ESP32 acts as the central controller of the system.

It continuously reads the current time from the DS1307 RTC module through the I²C interface.

When the preset medicine time is reached, the ESP32:

- Activates the buzzer
- Blinks the red LED
- Displays **Take Medicine** on the OLED
- Rotates the servo motor to open the medicine compartment

After the user presses the confirmation button, the ESP32:

- Stops the buzzer
- Turns OFF the red LED
- Closes the servo
- Displays **Medicine Taken**
- Blinks the green LED

The system then returns to standby mode and waits for the next scheduled reminder.

![System Architecture](System_Architecture.png)

---

# 💻 Software & Tools

| Software | Purpose |
|----------|---------|
| Arduino IDE | Code Development |
| Wokwi Simulator | Circuit Simulation |
| KiCad | PCB Design |
| GitHub | Version Control |

## Required Libraries

```cpp
Wire.h
RTClib
Adafruit_GFX
Adafruit_SSD1306
ESP32Servo
```

---

# ⚙ Working Principle

### Step 1

ESP32 reads the current time from the RTC.

↓

### Step 2

Current time is displayed on the OLED.

↓

### Step 3

When reminder time arrives:

- Servo opens the medicine compartment.
- OLED displays **Take Medicine**.
- Red LED blinks.
- Buzzer sounds.

↓

### Step 4

The user takes the medicine.

↓

### Step 5

The user presses the push button.

↓

### Step 6

The ESP32 confirms medicine intake.

↓

### Step 7

The servo motor closes the medicine compartment.

↓

### Step 8

The green LED blinks.

↓

### Step 9

The system returns to standby mode and waits for the next scheduled reminder.

---

# 📸 Project Gallery

## Circuit Design

![Circuit Design](Circuit_Design.png)

---

## Medicine Reminder

![Take Medicine](Take_medicine.png)

---

## Medicine Confirmation

![Medicine Taken](Medicine_taken.png)

---

# 📂 Project Files

| File | Description |
|------|-------------|
| ESP32_Smart_Medicine_Reminder.ino | Arduino Source Code |
| diagram.json | Wokwi Circuit |
| Circuit_Design.png | Circuit Design |
| System_Architecture.png | System Architecture |
| Schematic_Diagram.pdf | Circuit Schematic |
| Components_list.csv | Components List |
| README.md | Project Documentation |

---

# 📁 Repository Structure

```text
ESP32-Smart-Medicine-Reminder/
│
├── README.md
├── ESP32_Smart_Medicine_Reminder.ino
├── diagram.json
├── Circuit_Design.png
├── System_Architecture.png
├── Schematic_Diagram.pdf
├── Components_list.csv
├── Take_medicine.png
├── Medicine_taken.png
└── LICENSE
```

---

# 🚀 Future Roadmap

- [ ] Mobile Application Integration
- [ ] Wi-Fi Notifications
- [ ] Firebase Cloud Database
- [ ] SMS Alerts using GSM
- [ ] Voice Reminder System
- [ ] Cloud Dashboard
- [ ] Battery Backup
- [ ] Multiple User Profiles
- [ ] Medicine Intake Analytics
- [ ] AI-Based Reminder Suggestions

---

# 📊 Project Status

| Module | Status |
|--------|--------|
| Hardware Design | ✅ Completed |
| Embedded Programming | ✅ Completed |
| Wokwi Simulation | ✅ Completed |
| Documentation | ✅ Completed |
| KiCad PCB Design | 🚧 In Progress |
| Cloud Integration | 🔜 Planned |

---

# ⚠ Disclaimer

This project was developed for educational and academic purposes. It demonstrates embedded systems and IoT concepts and **should not be used in real-world medical applications without proper testing, validation, and regulatory approval.**

---

# 👨‍💻 Author

**Shriram Prasanna K**

**Bachelor of Technology (B.Tech)**

**Electronics and Communication Engineering (ECE)**

**VIT-AP University**

---

# 📄 License

This project is released for **educational and learning purposes**.

You are welcome to **use, modify, and enhance** this project for academic, research, and personal learning with appropriate credit to the original work.
