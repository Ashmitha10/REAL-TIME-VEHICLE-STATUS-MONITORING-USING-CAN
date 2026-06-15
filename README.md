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

## 🏗️ System Architecture

The system consists of three nodes connected through a CAN bus:

### 1️⃣ Main Node
- Reads accelerometer data.
- Detects accident conditions.
- Displays airbag deployment status.
- Receives fuel percentage from Fuel Node.
- Sends indicator control signals to Indicator Node.

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
