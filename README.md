# Wireless House Wire Detection System

## Introduction

The Wireless House Wire Detection System is a DIY project designed to provide a non-intrusive solution for detecting live wires behind walls. This system utilizes an Arduino board, a Hall Effect sensor, LEDs, and optional components to enhance safety and efficiency during home improvement activities.

## Purpose

The House Wire Identification System aims to enhance safety measures during domestic tasks by providing a method to locate energized wires within walls. Key purposes include:

- **Safety Enhancement:** Minimize the risk of accidental electrical encounters during home improvement activities.
- **Efficient Wire Tracing:** Locate hidden wires without the need for physical access to walls, streamlining maintenance or refurbishing tasks.
- **Preventing Accidental Breaches:** Design to prevent unintended damage to wiring during wall modifications or drilling.
- **User-Friendly Operation:** Crafted to be intuitive and cable-free, suitable for homeowners and DIY enthusiasts.

## Components

- Arduino UNO R3
- Hall Effect/Magnetic Sensor
- Breadboard
- LED
- Buzzer
- Jumper Wires
- Power Cord or USB Type A to Type B cable

## Working Principle

The system employs an Arduino and a Hall Effect sensor to detect the magnetic fields of live wires. The Arduino reads the sensor output, and if the values fall outside the standard range, LED indicators and a buzzer activate to alert users. The sensor state is displayed on the serial monitor or an optional LCD.

## Circuit Diagram

[![Circuit Diaram](https://i.postimg.cc/j5GZRDyt/circuit.png)](https://postimg.cc/sQ4pcDnN)

## Limitations

- Electromagnetic fields of live wires are weak, and simple Hall Effect Sensors may struggle to detect them.
- The hall effect sensor can only detect the presence or absence of a magnetic field, not its strength or direction.
- External magnetic interference can affect sensor readings.
- Limited range and sensitivity may vary based on wall material.
- The project requires a power source for the Arduino, which may not be convenient or portable.

## Future Scope

- Use advanced hall effect sensors for more accurate readings.
- Integrate wireless modules (Bluetooth or Wi-Fi) for data transmission to smartphones or computers.
- Incorporate a battery or solar panel for self-sufficiency and mobility.
- Add a 3D printed case for better aesthetics and improved portability.

## Contributors

- Suddhashil Sarkar
- Subhajit Sarkar
- Subham Mukherjee

- Subhamay Kundu
- Sulagna Mandal
- Suparna Das

## Acknowledgments

This project has been made under the supervision of **Institute of Engineering and Management, Kolkata**. Special thanks to the Faculty members and the team of **IEM-Robotics** for their guidance throughout this project.

[![Certificate of Completion](https://i.postimg.cc/C1PXVMx4/SUDDHASHIL-SARKAR-page-0001.jpg)](https://postimg.cc/dkC42Yd7)
---
