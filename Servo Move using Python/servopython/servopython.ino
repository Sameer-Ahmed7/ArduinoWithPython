#include <Servo.h>

Servo myservo;  // create servo object to control a servo
int incomingByte;      // a variable to read incoming serial data into
void setup() {
  // initialize serial communication:
  Serial.begin(9600);
  // initialize the servo pin as an output:
  myservo.attach(9);
}

void loop() {
  // see if there's incoming serial data:
  if (Serial.available() > 0) {
    // read the oldest byte in the serial buffer:
    incomingByte = Serial.read();
    
    // if it's a capital U (ASCII 72), move servo 0 position:
    if (incomingByte == 'U') {
      myservo.write(0);                  // sets the servo position according to the scaled value 
      delay(15);
    }

    // if it's a capital L (ASCII 72), move servo 45 position:
    if (incomingByte == 'L') {
      myservo.write(45);                  // sets the servo position according to the scaled value 
      delay(15);
    }
    // if it's a capital B (ASCII 72), move servo 45 position:
    if (incomingByte == 'B') {
      myservo.write(90);                  // sets the servo position according to the scaled value 
      delay(15);
    }

    
    // if it's a capital R (ASCII 72), move servo 45 position:
    if (incomingByte == 'R') {
      myservo.write(180);                  // sets the servo position according to the scaled value 
      delay(15);
    }
  }
}
