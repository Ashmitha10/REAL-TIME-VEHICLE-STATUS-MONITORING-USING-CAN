# 🚗 Real-Time Vehicle Status Monitoring Using CAN

## 📌 Project Overview

This project implements a Real-Time Vehicle Status Monitoring System using the Controller Area Network (CAN) protocol. The system continuously monitors important vehicle parameters such as fuel level, indicator status, and airbag deployment status, and displays them on an LCD dashboard.

The project demonstrates how different vehicle subsystems communicate through CAN bus to share information efficiently.All nodes communicate through the CAN bus, enabling real-time data exchange.

--------------------------------------------------
🎯 AIM

To design and implement a real-time vehicle monitoring system using CAN protocol that displays important vehicle parameters such as:

. Fuel percentage
. Indicator status
. Airbag activation
--------------------------------------------------
1. Real-time Fuel Level Monitoring
2. Airbag Deployment Detection
3. Accident Detection using Accelerometer
4. Indicator Control through CAN Communication
5. Multi-node CAN Network Architecture
6. LCD Display for Vehicle Parameters
7. External Interrupt-based Indicator Control

--------------------------------------------------
SYSTEM ARCHITECTURE
--------------------------------------------------
The system consists of three CAN nodes:

1. MAIN NODE
   - Reads accelerometer data
   - Detects accident conditions
   - Displays airbag status
   - Receives fuel data from Fuel Node
   - Sends indicator commands to Indicator Node

2. FUEL NODE
   - Reads fuel gauge sensor values using ADC
   - Sends fuel percentage to Main Node through CAN

3. INDICATOR NODE
   - Receives commands from Main Node
   - Controls vehicle indicator LEDs

--------------------------------------------------
HARDWARE REQUIREMENTS
--------------------------------------------------
- LPC2129 Microcontroller
- MCP2551 CAN Transceiver
- LCD Display
- MMA7660 Accelerometer
- Fuel Gauge Sensor
- LEDs
- Switches
- USB to UART Converter

--------------------------------------------------
SOFTWARE REQUIREMENTS
--------------------------------------------------
- Embedded C
- Keil uVision IDE
- Flash Magic

--------------------------------------------------
WORKING PRINCIPLE
--------------------------------------------------
1. Fuel Node reads fuel sensor data and transmits it via CAN.
2. Main Node receives fuel information and displays it.
3. Accelerometer data is continuously monitored.
4. If acceleration exceeds the threshold, an accident is detected.
5. Airbag deployment status is displayed on the LCD.
6. External interrupts trigger indicator signals.
7. Indicator commands are sent to the Indicator Node through CAN communication.

--------------------------------------------------
PROJECT OBJECTIVE
--------------------------------------------------
To enhance vehicle safety and monitoring by implementing a CAN-based communication system capable of transmitting and displaying critical vehicle information in real time.

--------------------------------------------------
APPLICATIONS
--------------------------------------------------
- Automotive Safety Systems
- Vehicle Monitoring Systems
- Smart Transportation
- Embedded Automotive Networks
- Industrial CAN Communication Systems

--------------------------------------------------
SKILLS GAINED
--------------------------------------------------
- Embedded C Programming
- LPC2129 Microcontroller Programming
- CAN Protocol Implementation
- ADC Interfacing
- Interrupt Handling
- Sensor Interfacing
- Embedded System Design

--------------------------------------------------
AUTHOR
--------------------------------------------------
Asmitha

--------------------------------------------------
LICENSE
--------------------------------------------------
This project is developed for educational and academic purposes.
