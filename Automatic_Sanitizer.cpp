#include <Servo.h>

Servo sanitizerServo;
const int irSensorPin = 7; // IR sensor output pin
const int servoPin = 11;   // Servo control pin

void setup() {
  pinMode(irSensorPin, INPUT);
  sanitizerServo.attach(servoPin);
  sanitizerServo.write(90); // Servo at neutral position
  Serial.begin(9600);
}

void loop() {
  int sensorValue = digitalRead(irSensorPin);
  Serial.println(sensorValue);

  if (sensorValue == LOW) { // Hand detected close to IR sensor
    sanitizerServo.write(0);  // Press sanitizer knob
  }
  else {
    sanitizerServo.write(90); // Release the sanitizer knob
  }
  delay(200);
}
