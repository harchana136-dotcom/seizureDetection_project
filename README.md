# Smart Wearable Seizure Detection and Assistive Alert System

## Project Overview
This project presents a low-cost wearable assistive device designed to detect abnormal body movements associated with epileptic seizures. The system monitors motion patterns using an MPU6050 accelerometer and physiological signals such as heart rate. When abnormal conditions are detected, the device activates alert mechanisms including a buzzer and vibration motor to notify caregivers and improve patient safety.

## Problem Statement
Epileptic seizures often occur suddenly and can lead to injuries or delayed medical assistance. Many patients, especially in low-resource settings, lack access to continuous monitoring systems. This project aims to develop an affordable, open-source wearable solution that detects seizure-like movements and immediately provides assistive alerts.

## Objectives
- Detect abnormal motion patterns related to seizures
- Monitor physiological signals such as heart rate
- Trigger assistive alerts using buzzer and vibration motor
- Provide a low-cost and portable monitoring solution

## Hardware Components
- Arduino UNO
- MPU6050 Accelerometer & Gyroscope Module
- Heart Rate Sensor
- Active Buzzer
- Vibration Motor
- NPN Transistor (C1815)
- Diode (1N4007)
- Resistors
- Breadboard
- Jumper Wires
- Li-ion Battery Power Supply

## System Architecture
The device continuously collects motion data from the MPU6050 sensor and heart rate values from the pulse sensor. The Arduino processes these signals and determines whether the values exceed predefined thresholds indicating abnormal movement. When such a condition is detected, the system activates alert mechanisms.

## Working Principle
1. The MPU6050 sensor measures acceleration along three axes.
2. The Arduino calculates overall motion intensity.
3. The heart rate sensor provides pulse data through analog input.
4. If motion or physiological thresholds exceed safe limits:
   - The buzzer produces an audible alert
   - The vibration motor activates to notify nearby caregivers.
5. The system continues monitoring in real time.

## Pin Connections

| Component | Arduino Pin |
|----------|-------------|
| MPU6050 VCC | 5V |
| MPU6050 GND | GND |
| MPU6050 SDA | A4 |
| MPU6050 SCL | A5 |
| Heart Rate Sensor | A0 |
| Buzzer | Digital Pin 8 |
| Motor (via transistor) | Digital Pin 9 |

## Demo Instructions
1. Power the Arduino board.
2. Upload the seizure detection code.
3. Open the Serial Monitor at 9600 baud.
4. Shake the MPU6050 sensor to simulate abnormal movement.
5. The system will detect high motion values and trigger alerts.

## Expected Output
- Serial monitor displays motion and heart rate values
- When abnormal movement is detected:
  - Buzzer sounds
  - Vibration motor activates

## Applications
- Epileptic seizure monitoring
- Assistive healthcare devices
- Remote patient monitoring
- Wearable biomedical systems

## Future Improvements
- Integration with mobile application
- Cloud-based health monitoring
- AI-based seizure prediction
- GPS alert system for caregiver notification

## Conclusion
The proposed wearable seizure detection system demonstrates a simple and affordable assistive technology solution for epilepsy monitoring. By combining motion sensing and physiological monitoring, the device can help improve patient safety and enable faster caregiver response.
