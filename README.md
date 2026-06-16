# 🚗 Real-Time Vehicle Status Monitoring Using CAN

## 📌 Project Overview

This project implements a Real-Time Vehicle Status Monitoring System using the Controller Area Network (CAN) protocol. The system continuously monitors important vehicle parameters such as fuel level, indicator status, and airbag deployment status, and displays them on an LCD dashboard.

The project demonstrates how different vehicle subsystems communicate through CAN bus to share information efficiently.All nodes communicate through the CAN bus, enabling real-time data exchange.

--------------------------------------------------

## 🎯 Aim
To design and implement a real-time vehicle monitoring system using CAN (Controller Area Network) protocol that displays important vehicle parameters such as:

- ⛽ Fuel Percentage
- 🚦 Indicator Status
- 💥 Airbag Activation Status

---------------------------------------------------

## 🏗️ System Architecture
The system consists of three nodes connected through a CAN bus:

<img width="1195" height="896" alt="image" src="https://github.com/user-attachments/assets/1380db90-ace1-42ac-8e64-10970b34e1d3" />


## 1️⃣ Main Node

This node is responsible for displaying vehicle status.
- Displays fuel percentage on LCD
- Displays airbag status
- Sends indicator signals to indicator node
- Receives fuel information from fuel node
- Reads accelerometer data for accident detection

## 2️⃣ Fuel Node

This node is responsible for fuel monitoring.
- Reads fuel sensor data using ADC.
- Calculates ADC value into fuel percentage.
- Sends fuel information to Main Node via CAN.

## 3️⃣ Indicator Node

This node is responsible for vehicle indications(left indicator/right indicator)
- Receives CAN messages from Main Node.
- Controls left and right indicator LEDs.
--------------------------------------------------------

## 🛠️ Hardware Requirements
- LPC2129 Microcontroller
- MCP2551 CAN Transceiver
- LCD Display
- MMA7660 Accelerometer
- Fuel Gauge Sensor
- LEDs
- Switches
- USB-to-UART Converter
  
--------------------------------------------------------

## 💻 Software Requirements

- Embedded C
- Keil uVision
- Flash Magic
  
--------------------------------------------------------

# 📦 Project Modules

## 🖥 LCD Module
Displays:
- Fuel percentage
- Indicator status
- Airbag status
- Dashboard information

---

## 📟 ADC Module
Reads fuel sensor value and converts it into fuel percentage.

---

## 📡 CAN Module
Handles communication between nodes.

### Operations:
- Transmit data
- Receive data
- Frame formatting

---

## ⚡ Interrupt Module
Handles external interrupts for:
- Left indicator
- Right indicator

---

## 🔌 I2C Module
Used for communication with the MMA7660 accelerometer sensor.

---

## 📍 Accelerometer Module
Reads X, Y, Z acceleration values and detects accidents.

If acceleration exceeds threshold → Airbag is triggered.

---

# 📨 CAN Message Format

| CAN ID | Data            | Description            |
|-------|-----------------|------------------------|
| 1     | Fuel Percentage | Sent from Fuel Node    |
| 2     | 0x01            | Left Indicator         |
| 2     | 0x02            | Right Indicator        |

---

# 🔄 Project Workflow

1. Fuel node reads fuel value using ADC.
2. Fuel percentage is calculated.
3. Fuel data is transmitted to main node using CAN.
4. Main node receives fuel data and displays it on LCD.
5. External interrupt detects indicator button press.
6. Indicator command is sent to indicator node via CAN.
7. Indicator node receives command and activates LEDs.
8. Accelerometer detects sudden movement.
9. If crash detected → airbag status is displayed.

---

# 📊 Output

The LCD dashboard displays:
- Fuel percentage
- Left/Right indicator status
- Airbag activation status

# 🔌 Overall Hardware Connection


<img width="1600" height="720" alt="WhatsApp Image 2026-06-16 at 2 09 55 PM" src="https://github.com/user-attachments/assets/e9517eb8-4e13-40df-b40b-7a51d33cc654" />


## LCD Display


<img width="1600" height="931" alt="WhatsApp Image 2026-06-16 at 2 03 55 PM" src="https://github.com/user-attachments/assets/93e7baaf-3cf6-4609-8d47-fadecee95ae8" />


🔕 When No Accident Occurs


<img width="1600" height="1200" alt="image" src="https://github.com/user-attachments/assets/b67fb3ae-2f74-439d-a469-30f2c6dc7fe0" />


🔔 When Accident Occurs


<img width="1600" height="1200" alt="image" src="https://github.com/user-attachments/assets/085b67de-21f4-44c6-91fd-f7f90ce6226f" />

-----------------------------------------------------------------

## ✨ Features
- Real-time fuel monitoring
- Accident detection using accelerometer
- Airbag status indication
- CAN-based communication
- Interrupt-driven indicator control
- LCD display of vehicle parameters

---

# 💡 Applications

- Automotive monitoring systems
- Vehicle dashboard systems
- Safety systems in vehicles
- CAN-based embedded systems

---

# 🚀 Future Enhancements

- Add GPS for real-time vehicle tracking
- Integrate GSM module for accident alerts
- Monitor additional parameters (temperature, tire pressure, battery)
- Develop mobile/web dashboard for remote monitoring
- Implement cloud or SD card data logging

---

# ✅ Conclusion

This project demonstrates how CAN protocol enables reliable communication between multiple vehicle subsystems.

The system improves:
- Vehicle safety
- Real-time monitoring
- Efficient communication between nodes

---

# 👨‍💻 Author

# Korra Ashmitha
Electronics and Communication Engineering  
Developer of Real-Time Vehicle Status Monitoring Using CAN

---

# 📄 License

This project is developed for academic and learning purposes.  
You are free to modify and enhance it with proper credit.

⭐ If you find this project useful, consider giving it a star on GitHub.

