// 🤖 Line Follower Robot
// Controller: Arduino Nano
// Motor Driver: L298N
// Sensors: 2 IR Sensors

#define ENA 5
#define IN1 2
#define IN2 3

#define ENB 6
#define IN3 4
#define IN4 7

#define LEFT_IR 8
#define RIGHT_IR 9

void setup() {

  pinMode(ENA, OUTPUT);
  pinMode(IN1, OUTPUT);
  pinMode(IN2, OUTPUT);

  pinMode(ENB, OUTPUT);
  pinMode(IN3, OUTPUT);
  pinMode(IN4, OUTPUT);

  pinMode(LEFT_IR, INPUT);
  pinMode(RIGHT_IR, INPUT);

  stopRobot();
}

void forward() {

  digitalWrite(IN1, HIGH);
  digitalWrite(IN2, LOW);

  digitalWrite(IN3, HIGH);
  digitalWrite(IN4, LOW);

  analogWrite(ENA, 180);
  analogWrite(ENB, 180);
}

void left() {

  digitalWrite(IN1, LOW);
  digitalWrite(IN2, HIGH);

  digitalWrite(IN3, HIGH);
  digitalWrite(IN4, LOW);

  analogWrite(ENA, 120);
  analogWrite(ENB, 180);
}

void right() {

  digitalWrite(IN1, HIGH);
  digitalWrite(IN2, LOW);

  digitalWrite(IN3, LOW);
  digitalWrite(IN4, HIGH);

  analogWrite(ENA, 180);
  analogWrite(ENB, 120);
}

void stopRobot() {

  digitalWrite(IN1, LOW);
  digitalWrite(IN2, LOW);

  digitalWrite(IN3, LOW);
  digitalWrite(IN4, LOW);

  analogWrite(ENA, 0);
  analogWrite(ENB, 0);
}

void loop() {

  int leftSensor = digitalRead(LEFT_IR);
  int rightSensor = digitalRead(RIGHT_IR);

  // Black line = LOW
  // White surface = HIGH

  if (leftSensor == HIGH && rightSensor == HIGH) {
    forward();
  }

  else if (leftSensor == LOW && rightSensor == HIGH) {
    left();
  }

  else if (leftSensor == HIGH && rightSensor == LOW) {
    right();
  }

  else {
    stopRobot();
  }
}
