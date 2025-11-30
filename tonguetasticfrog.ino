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
//PLEASE NOTE: This code can only be used on continuous mirco servo motors!
// Clock-wise rotation
servo.write(30);   
delay(3000); // 3 seconds
// stop
servo.write(90);  
delay(2000); // 2 seconds
// Counter Clock-wise rotation
servo.write(150); 
delay(3000); // 3 seconds
// Stop
servo.write(90);  
delay(2000); // 2 seconds
}
