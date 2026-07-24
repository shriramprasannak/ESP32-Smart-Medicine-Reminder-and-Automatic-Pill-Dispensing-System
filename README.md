\# ESP32 Smart Medicine Reminder and Automatic Pill Dispensing System



\## 📌 Project Overview



The \*\*ESP32 Smart Medicine Reminder and Automatic Pill Dispensing System\*\* is an IoT-based healthcare project designed to help patients take their medicines on time. The system uses a Real-Time Clock (RTC) to monitor the current time and automatically reminds the user when it is time to take medication. It displays reminder messages on an OLED screen, activates a buzzer, blinks a red LED, and opens the medicine compartment using a servo motor. After the medicine is taken, the user confirms it by pressing a push button, upon which the green LED blinks, the OLED displays a confirmation message, and the servo closes the compartment.



\---



\## 🎯 Objectives



\- Provide timely medicine reminders.

\- Reduce the chances of missing medication.

\- Display reminder notifications on an OLED display.

\- Automatically open the medicine compartment.

\- Confirm medicine intake using a push button.

\- Provide visual and audible alerts.



\---



\## ✨ Features



\- Real-Time Clock (RTC) based reminders

\- OLED Display for status messages

\- Automatic pill dispensing using Servo Motor

\- Push Button confirmation

\- Red LED reminder indication

\- Green LED confirmation indication

\- Active Buzzer alert

\- ESP32-based embedded system



\---



\## 🛠 Components Required



\- ESP32 DevKit V1

\- DS1307 RTC Module

\- SSD1306 OLED Display (128×64, I2C)

\- SG90 Micro Servo Motor

\- Push Button Switch

\- Active Buzzer

\- Red LED

\- Green LED

\- 220Ω Resistors (2)

\- Jumper Wires

\- Breadboard



\---



\## 🔌 Circuit Connections



| Component | ESP32 Pin |

|-----------|-----------|

| RTC SDA | GPIO21 |

| RTC SCL | GPIO22 |

| OLED SDA | GPIO21 |

| OLED SCL | GPIO22 |

| Servo PWM | GPIO18 |

| Buzzer | GPIO25 |

| Red LED | GPIO26 |

| Green LED | GPIO27 |

| Push Button | GPIO19 |

| RTC VCC | 5V |

| OLED VCC | 3.3V |

| Servo VCC | 5V |

| All GND Pins | GND |



\---



\## 📂 Project Files



\- `ESP32\_Smart\_Medicine\_Reminder.ino` – Arduino source code

\- `diagram.json` – Wokwi circuit design

\- `Circuit\_Design.png` – Circuit image

\- `Schematic\_Diagram.pdf` – Circuit schematic

\- `Take\_medicine.png` – Reminder output

\- `Medicine\_taken.png` – Confirmation output

\- `Components\_list.csv` – Components used

\- `README.md` – Project documentation



\---



\## ⚙ Software Requirements



\- Arduino IDE

\- Wokwi Simulator

\- ESP32 Board Package



\### Required Libraries



\- Wire.h

\- RTClib

\- Adafruit\_GFX

\- Adafruit\_SSD1306

\- ESP32Servo



\---



\## 🚀 Working Procedure



1\. The ESP32 continuously reads the current time from the DS1307 RTC module.

2\. The OLED displays the current system time.

3\. At the scheduled reminder time:

&#x20;  - Servo motor opens the medicine compartment.

&#x20;  - Red LED starts blinking.

&#x20;  - Buzzer sounds.

&#x20;  - OLED displays \*\*"Take Medicine"\*\*.

4\. The user presses the push button after taking the medicine.

5\. The system:

&#x20;  - Stops the buzzer.

&#x20;  - Turns OFF the red LED.

&#x20;  - Closes the servo.

&#x20;  - Displays \*\*"Medicine Taken"\*\* on the OLED.

&#x20;  - Blinks the green LED for confirmation.



\---



\## 📷 Project Output



\### Circuit Design



!\[Circuit Design](Circuit\_Design.png)



\### Medicine Reminder



!\[Take Medicine](Take\_medicine.png)



\### Medicine Taken Confirmation



!\[Medicine Taken](Medicine\_taken.png)



\---



\## 📈 Future Enhancements



\- Mobile application integration

\- Wi-Fi notifications

\- SMS reminder using GSM

\- Cloud data logging

\- Multiple medicine schedules

\- Voice reminder system



\---



\## 👨‍💻 Developed By



\*\*Shriram Prasanna K\*\*



B.Tech Electronics and Communication Engineering (ECE)



\---



\## 📄 License



This project is developed for educational and learning purposes.

