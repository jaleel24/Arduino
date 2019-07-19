// Control a servo from within Max/MSP
// A mutt of the servo Knob and Communication Dimmer sketches

#include <Servo.h> 
 
Servo myservo;  // create servo object to control a servo 

void setup() 
{ 
  // initialize the serial communication:
  Serial.begin(9600);

  myservo.attach(9);  // attaches the servo on pin 9 to the servo object 
} 
 
void loop() 
{ 
  byte time;
  
  // check if data has been sent from the computer:
  if (Serial.available()) {
    // read the most recent byte (which will be from 0 to 255):
    time = Serial.read();
    myservo.write(time);                  // sets the servo position according to the scaled value 
    delay(15);                           // waits for the servo to get there 
  }
} 
