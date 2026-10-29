# PIC16F877A Washing Machine Controller

A microcontroller-based washing machine simulation developed during my Emertxe Embedded Systems Internship (May–June 2025).

## Project Overview

This project simulates the control logic of a washing machine using the PIC16F877A microcontroller in PICSimLab. It demonstrates how embedded C can be used to implement user interaction, operation sequencing, timing, and basic safety interlocks.

## Features

- Power-on sequence and LCD status messages
- Washing program selection through a digital keypad
- Water-level selection
- Start and stop operation controls
- Timer-based countdown and operation sequencing
- Door-status monitoring and interlock logic
- Buzzer alert on completion
- Fan/actuator control logic
- Modular driver-based program structure

## Hardware Platform and Tools

- **Microcontroller:** PIC16F877A
- **Simulation:** PICSimLab
- **IDE:** MPLAB X IDE
- **Compiler:** XC8
- **Language:** Embedded C
- **Interfaces:** Character LCD (CLCD), digital keypad, timers and interrupts

## How It Works

1. The controller displays a power-on message on the CLCD.
2. The user starts the simulated machine.
3. The user navigates the available washing programs and selects a water level.
4. The controller starts the selected operation and displays its status and remaining time.
5. Door-status logic monitors the simulated door input during operation.
6. At completion, the controller displays a completion message and activates the buzzer for a limited period.

## Project Structure

The source files are organized into application logic, LCD and keypad drivers, timer configuration, interrupt handling, and shared header files.

## Learning Outcomes

- Embedded C programming and modular code design
- PIC16F877A GPIO and register configuration
- LCD and keypad interfacing
- Timer configuration and interrupt handling
- State-machine-based application flow
- Implementing simulated appliance-control logic

## How to Run

1. Install MPLAB X IDE and the compatible XC8 compiler.
2. Open the project in MPLAB X IDE.
3. Verify the device configuration and compiler settings.
4. Build the project and resolve any environment-specific configuration issues.
5. Load the generated firmware into the appropriate PICSimLab PIC16F877A setup.
6. Run the simulation and test the keypad inputs, display screens, timing, and control logic.

Refer to the project configuration and source files for the exact device and simulator settings.

## Internship

**Organization:** Emertxe Information Technologies  
**Domain:** Embedded Systems  
**Duration:** 9 May 2025 – 18 June 2025  
**Project:** Washing Machine Controller Simulation

---

*This project is a simulation-based learning project; it does not claim validation on a physical washing machine.*
