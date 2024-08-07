# AVR Atmega32 Fire Detection System 🔥💻🔌

This project is a hardware-based fire detection system implemented using an AVR Atmega32 microcontroller. The system monitors temperature and smoke levels to detect fire hazards. It uses an LCD display for status output, a keypad for input, LEDs for visual alerts, and a motor to activate a fire extinguisher.

## Features ✨📌

- **Fire detection** based on temperature and smoke levels
- **LCD display** for status output
- **Keypad input** for resetting the system
- **LED indicators** for different system states
- **Buzzer and motor** activation during fire state

## Hardware Requirements 🛠️🧰

- **Microcontroller**: AVR Atmega32
- **LCD Display**
- **Keypad**
- **Temperature Sensor**
- **Smoke Sensor**
- **LEDs**: Blue and Red
- **Buzzer**
- **Motor**
- **Crystal oscillator**: 8 MHz
- **Capacitors, resistors, and connecting wires**

## Software Layer 🖥️💡

1. **MCAL**: DIO (Digital Input/Output), ADC (Analog to Digital Converter)
2. **HAL**: LCD (4 Bit Mode), Keypad, Motor, Sensors

## Circuit Diagram 📊
(Insert a circuit diagram image here if you have one)

## Usage 📝

1. **Connect** the hardware components as per the circuit diagram.
2. **Compile** the code using the AVR-GCC compiler.
3. **Upload** the compiled code to the AVR Atmega32 microcontroller using AVRDUDE.
4. **Power up** the microcontroller to start the fire detection system.

## System States ⚙️

1. **System Fine**: When the temperature and smoke levels are below 50%.
   - Blue LED is off.
   - LCD displays "System Fine".

2. **System Heat**: When the temperature exceeds 50%.
   - Blue LED turns on.
   - LCD displays "System Heat".

3. **System Fire**: When both temperature and smoke levels exceed 50%.
   - Blue LED turns off.
   - Red LED and buzzer turn on.
   - Motor activates to pump water.
   - LCD displays "System Fire" and prompts for a reset password.
   
   To reset the system:
   - Enter the correct password (e.g., 123) on the keypad.
   - The system will reset and return to the "System Fine" state if conditions are safe.
   - If the sensors still detect high levels, it will stay in the "System Fire" state.

Made with ❤️ by [Aboubakr Amr Ibnelkhatab]
