# DC Motor Control Arduino Project

## Description

This Arduino project allows you to control the speed of two DC motors using potentiometers and enable/disable each motor using slider switches. Additionally, it provides a Serial monitor interface to remotely control the motors.

## Features

- Individual speed control for left and right motors using potentiometers.
- Slider switches to enable/disable each motor independently.
- Serial monitor control with commands:
  - Send 'L' to open the left motor.
  - Send 'R' to open the right motor.
  - Send 'S' to stop both motors.

## Hardware Requirements

- Arduino board
- 2 DC motors
- 2 potentiometers
- 2 slider switches
- Motor driver (e.g., L298N)
- Breadboard and jumper wires

## Wiring Instructions

1. Connect the left motor to the motor driver's left output.
2. Connect the right motor to the motor driver's right output.
3. Connect the potentiometer for the left motor to analog pin A0.
4. Connect the potentiometer for the right motor to analog pin A1.
5. Connect the slider switch for the left motor to digital pin 2.
6. Connect the slider switch for the right motor to digital pin 3.

For detailed wiring, refer to the `wiring_diagram.png` file in the repository.

## Usage

1. Upload the Arduino sketch (`motor_control.ino`) to your Arduino board.
2. Open the Serial monitor.
3. Control the motors using the following commands:
   - Send 'L' to open the left motor.
   - Send 'R' to open the right motor.
   - Send 'S' to stop both motors.

## Repository Structure

```
/arduino_motor_control
|-- motor_control.ino      # Arduino sketch file
|-- wiring_diagram.png     # Wiring diagram image
|-- README.md              # Project documentation
|-- .gitignore             # Git ignore file
```

## Contributing

Contributions are welcome! If you find any issues or have suggestions for improvement, please open an issue or create a pull request.

## License

This project is licensed under the [MIT License](LICENSE).

