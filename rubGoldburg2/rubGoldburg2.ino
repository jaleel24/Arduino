
#include <Servo.h>      // include the servo library

Servo servoMotor;       // creates an instance of the servo object to control a servo

int analogPin = 0;      // the analog pin that the sensor is on
int analogValue = 0;    // the value returned from the analog sensor

int servoPin = 9;       // Control pin for servo motor. As of Arduino 0017, can be any pin

void setup() { 
   servoMotor.attach(servoPin);  // attaches the servo on pin 2 to the servo object
} 

void loop() 
{ 
   //analogValue = analogRead(analogPin);                 // read the analog input (value between 0 and 1023)
 //  analogValue = map(analogValue, 0, 1023, 0, 179);     // map the analog value (0 - 1023) to the angle of the servo (0 - 179)
  // servoMotor.write(analogValue);
  
   analogValue = analogRead(analogPin);                 // read the analog input (value between 0 and 1023)
   if(analogValue > 800) {
        servoMotor.write(0);                   // Spin servo at max speed clockwise
   } else {
        servoMotor.write(90);                 //  Stop the servo
   }
   
   delay(15);  // write the new mapped analog value to set the position of the servo
   //delay(15);                                           // waits for the servo to get there 
}
