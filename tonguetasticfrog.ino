#include <Servo.h>

//Define the servo 
#define servo_pin 9

// Create servo objects
Servo servo;

void setup() {
  // Attach servo to their respective pin
  servo.attach(servo_pin);
}

void loop() {
 for (int angle = 0; angle <= 359; angle++) {
    servo.write(angle); 
    delay(15);
  }

  delay(5000);

  for (int angle = 180; angle >= 0; angle--) {
    servo.write(angle); 
    delay(15);
  }
  delay(5000);
}
