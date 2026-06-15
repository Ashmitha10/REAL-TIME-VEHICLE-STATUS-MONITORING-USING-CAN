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


### 1️⃣ Main Node
- Displays fuel percentage on LCD
- Displays airbag status
- Sends indicator signals to indicator node
- Receives fuel information from fuel node
- Reads accelerometer data for accident detection

### 2️⃣ Fuel Node
- Reads fuel sensor data using ADC.
- Calculates fuel percentage.
- Sends fuel information to Main Node via CAN.

### 3️⃣ Indicator Node
- Receives CAN messages from Main Node.
- Controls left and right indicator LEDs.

## ✨ Features
- Real-time fuel monitoring
- Accident detection using accelerometer
- Airbag status indication
- CAN-based communication
- Interrupt-driven indicator control
- LCD display of vehicle parameters

## 🛠️ Hardware Requirements
- LPC2129 Microcontroller
- MCP2551 CAN Transceiver
- LCD Display
- MMA7660 Accelerometer
- Fuel Gauge Sensor
- LEDs
- Switches
- USB-to-UART Converter

## 💻 Software Requirements
- Embedded C
- Keil uVision
- Flash Magic

## 🚘 Applications
- Vehicle Safety Systems
- Automotive Monitoring
- Smart Transportation
- Embedded CAN Networks
