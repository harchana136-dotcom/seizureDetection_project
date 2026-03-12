Seizure Detection & Assistive Alert System

📌 Project Overview

Epileptic seizures often occur suddenly and can expose patients to serious injuries or delayed medical assistance. Continuous monitoring in daily life is difficult using conventional hospital-based systems such as EEG monitoring.

This project presents a low-cost wearable assistive device that detects abnormal body movements and physiological signals associated with seizures. The system integrates motion sensing and heart rate monitoring to identify possible seizure events in real time.
When abnormal patterns are detected, the device triggers immediate alerts through a buzzer and vibration motor, helping caregivers respond quickly and improving patient safety.
The solution is designed using open-source hardware and software, making it affordable, scalable, and suitable for use in low-resource healthcare environments.

🎯 Objectives

The main objectives of this project are:

• Detect abnormal body movements that resemble seizure activity

• Monitor physiological signals such as heart rate

• Provide real-time alerts to assist patients and caregivers

• Create a low-cost wearable assistive technology solution

• Enable future expansion for remote monitoring and medical analysis


🧩 System Architecture

The system consists of the following main components:
Motion Detection Module
MPU6050 accelerometer and gyroscope sensor
Detects sudden abnormal body movements
Physiological Monitoring Module
Heart rate sensor
Monitors pulse variations
Processing Unit
Arduino UNO microcontroller
Processes sensor data and detects abnormal conditions
Alert System
Buzzer for audible alert
Vibration motor for tactile feedback
Data Output
Serial monitor output for system monitoring and debugging

⚙️ Hardware Components

Component
Description
Arduino UNO
Microcontroller used for processing sensor data
MPU6050
Accelerometer and gyroscope sensor for motion detection
Heart Rate Sensor
Detects pulse rate
Buzzer
Generates audible alert
Vibration Motor
Provides tactile alert
NPN Transistor
Drives vibration motor
Diode (1N4007)
Protects circuit from reverse voltage
Breadboard
Circuit prototyping platform
Jumper Wires
Electrical connections
Portable power supply
🔌 Pin Configuration
Component
Arduino Pin
MPU6050 VCC
5V
MPU6050 GND
GND
MPU6050 SDA
A4
MPU6050 SCL
A5
Heart Rate Sensor
A0
Buzzer
Digital Pin 8
Vibration Motor
Digital Pin 9

🧠 Working Principle

The proposed system continuously monitors both body motion and heart rate signals.
The MPU6050 sensor detects acceleration changes in three axes (X, Y, Z).
Sudden abnormal movements are analyzed to determine whether they resemble seizure-like motion.
Simultaneously, the heart rate sensor measures pulse activity, which may change during seizure events.
The Arduino processes these signals and evaluates the motion magnitude.
If the motion threshold exceeds a predefined limit or abnormal physiological changes occur, the system identifies it as a potential seizure event.
Once detected, the device activates:
Buzzer alert
Vibration motor
These alerts notify nearby caregivers or the patient themselves.

🚨 Alert Levels

The system classifies motion patterns into three categories:
Motion Level
Condition
System Response
Normal
Low movement
No alert
Moderate
Abnormal movement detected
Buzzer warning
Severe
Possible seizure event
Buzzer + vibration motor

📊 Output Monitoring

During operation, sensor readings are displayed through the Arduino Serial Monitor, allowing developers and researchers to observe system behavior in real time.

Example output:
Copy code

Heart: 520
Motion: 12000
Normal Condition

Heart: 540 
Motion: 18000
Warning: Abnormal Movement

Heart: 560 
Motion: 30000

ALERT: Possible Seizure Detected

💻 Software Requirements

• Arduino IDE

• MPU6050 Library

• USB Driver for Arduino (CH340 driver if required)

🔬 Applications

This system can be used for:
• Epilepsy patient monitoring

• Assistive healthcare technologies

• Remote patient monitoring systems

• Smart wearable medical devices

• Early seizure detection research

🚀 Future Improvements

Future work can further improve the system by integrating:

• Machine learning algorithms for accurate seizure prediction

• Mobile application for caregiver notifications

• GPS-based emergency location tracking

• Cloud data storage for long-term medical analysis

• Integration with wearable devices such as smart bands

🌍 Impact

This project contributes to the development of affordable assistive healthcare technology that can improve the quality of life for individuals with epilepsy, especially in regions where continuous medical supervision is not available.

👩‍💻 Contributors

Project developed by:

Team Members
H.Archana
S.Kavyapriya
J.Mahalakshmi
S.Sreenidhi

📜 License

This project is released as an open-source educational and research prototype to encourage further innovation in assistive medical technologies.
