# IR Object Counter System

## Project Overview

This project implements a real-time object counting system using Arduino. The system detects object-passing events and increments a counter whenever a new object is detected.

The count is continuously displayed on the Serial Monitor for monitoring and debugging purposes.
This project was developed as part of robotics training under the Automation & Coding Department (TRSKNCOE Training 2026).

## Features

- Real-time object counting
- State-change detection logic
- Serial Monitor count display
- LED indication during detection
- Noise-resistant counting approach
- Arduino-based implementation

## Components Used

- Arduino UNO
- IR Sensor (simulated using push button in Tinkercad)
- LED
- Jumper Wires
- Breadboard
- Tinkercad

## Working Logic

1. The system continuously monitors the sensor input.
2. A count is incremented only when the signal changes from HIGH to LOW.
3. This prevents multiple counts for a single object.
4. The current count is displayed on the Serial Monitor.
5. An LED indicates detection status.

## Key Concept: State-Change Detection

Instead of counting continuously while an object is present, the system detects transitions:

- Previous State = HIGH
- Current State = LOW

Only at this transition is the counter incremented.
This improves counting accuracy and prevents duplicate counts.

## Programming Language

- C++ (Arduino IDE)
  
## Learning Outcomes

- IR sensor interfacing
- Event-driven programming
- State-change detection
- Counter implementation
- Serial communication
- Embedded systems logic
- Debugging Arduino applications

## Challenges Faced

The main challenge was ensuring that a single object would only be counted once. Implementing state-change detection helped improve counting reliability and reduced false increments.

## Simulation Note

Tinkercad has limited support for realistic IR object detection simulation. To validate the counting logic, a push button was used to simulate the digital output of an IR sensor.

The counting algorithm remains the same as a real IR sensor implementation.

## Future Improvements

- Add LCD/OLED count display
- Store count in EEPROM
- Add wireless monitoring
- Implement bidirectional counting

## Author

Robotics & Embedded Systems Enthusiast-Siddhant Hirave
TRSKNCOE Training 2026
