# 🤖 Arduino Line Follower Robot

A simple autonomous Line Follower Robot developed using an Arduino Nano,
L298N motor driver, two IR sensors, and two DC geared motors.

The robot detects a black line on a white surface using IR sensors and
automatically adjusts the motor direction to follow the path.

## 🚀 Features

- Autonomous line following
- Arduino Nano based control
- Two IR sensors
- Two DC geared motors
- L298N motor driver
- Forward movement
- Left and right correction
- Simple and low-cost design
- Suitable for college robotics projects

## 🧰 Components Required

- Arduino Nano
- L298N Motor Driver
- 2 × IR Sensor Modules
- 4 × DC Geared Motors
- 4 × Wheels
- Battery Pack
- Jumper Wires
- Switch
- Screws and mounting components

## 🔌 Pin Configuration

| Component | Arduino Nano Pin |
|---|---|
| L298N ENA | D5 |
| L298N IN1 | D2 |
| L298N IN2 | D3 |
| L298N IN3 | D4 |
| L298N IN4 | D7 |
| L298N ENB | D6 |
| Left IR Sensor | D8 |
| Right IR Sensor | D9 |

## 🧠 Working Principle

The IR sensors continuously detect the surface below the robot.

When the robot detects the black line, the Arduino Nano processes the
sensor signals and controls the motors through the L298N motor driver.

### Sensor Conditions

| Left Sensor | Right Sensor | Robot Action |
|---|---|---|
| White | White | Forward |
| Black | White | Turn Left |
| White | Black | Turn Right |
| Black | Black | Stop |

The exact HIGH/LOW output depends on the IR sensor module used.

## ⚙️ Working

1. IR sensors detect the line.
2. Sensor outputs are sent to the Arduino Nano.
3. Arduino processes the sensor readings.
4. Arduino sends control signals to the L298N.
5. L298N drives the motors.
6. The robot continuously corrects its direction.
7. The robot follows the black line automatically.

## 💻 Software

- Arduino IDE
- Arduino C/C++

## 📂 Project Structure

line-follower-robot/
│
├── line_follower_robot.ino
├── README.md
├── circuit-diagram.png
│
└── images/
    ├── robot-front.jpg
    ├── robot-side.jpg
    ├── robot-top.jpg
    ├── circuit.jpg
    └── testing.jpg

## 🔮 Future Improvements

- Add 3 or 5 IR sensors
- PID-based line following
- Automatic speed control
- Obstacle detection
- Bluetooth control
- OLED/LCD display
- Improved motor control
- Wireless monitoring

## 🎯 Applications

- Robotics competitions
- College mini projects
- Autonomous vehicles
- Educational robotics
- Industrial path-following concepts
- Arduino learning projects

## 👨‍💻 Project Information

**Project:** Arduino Line Follower Robot  
**Controller:** Arduino Nano  
**Motor Driver:** L298N  
**Sensors:** 2 × IR Sensors  
**Motors:** 2 × DC Geared Motors  
**Programming:** Arduino C/C++

## 📜 License

This project is created for educational and academic purposes.
