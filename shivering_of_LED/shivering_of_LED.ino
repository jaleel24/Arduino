/*
  Blink

  Turns an LED on for one second, then off for one second, repeatedly.

  Most Arduinos have an on-board LED you can control. On the UNO, MEGA and ZERO
  it is attached to digital pin 13, on MKR1000 on pin 6. LED_BUILTIN is set to
  the correct LED pin independent of which board is used.
  If you want to know what pin the on-board LED is connected to on your Arduino
  model, check the Technical Specs of your board at:
  https://www.arduino.cc/en/Main/Products

  modified 8 May 2014
  by Scott Fitzgerald
  modified 2 Sep 2016
  by Arturo Guadalupi
  modified 8 Sep 2016
  by Colby Newman

  This example code is in the public domain.

  http://www.arduino.cc/en/Tutorial/Blink
*/
int ledPin=9;
// the setup function runs once when you press reset or power the board
void setup() {
  // initialize digital pin LED_BUILTIN as an output.
  //pinMode(LED_BUILTIN, OUTPUT);
   pinMode(ledPin, OUTPUT);
   Serial.begin(9600);
   
  
  
}

// the loop function runs over and over again forever
void loop() {
  /*
   digitalWrite(ledPin, HIGH);   // turn the LED on (HIGH is the voltage level)
  delay(1000);                       // wait for a second
  digitalWrite(ledPin, LOW);    // turn the LED off by making the voltage LOW
  delay(1000);                       // wait for a second

   digitalWrite(ledPin, HIGH);   // turn the LED on (HIGH is the voltage level)
  delay(250);                       // wait for a second
  digitalWrite(ledPin, LOW);    // turn the LED off by making the voltage LOW
  delay(250);                       // wait for a second

   digitalWrite(ledPin, HIGH);   // turn the LED on (HIGH is the voltage level)
  delay(250);                       // wait for a second
  digitalWrite(ledPin, LOW);    // turn the LED off by making the voltage LOW
  delay(250);
  
   digitalWrite(ledPin, HIGH);   // turn the LED on (HIGH is the voltage level)
  delay(250);                       // wait for a second
  digitalWrite(ledPin, LOW);    // turn the LED off by making the voltage LOW
  delay(1000);                       // wait for a second

  
  
  */

  int reading=analogRead(0);
  Serial.println(reading);
//analogWrite(ledPin, reading/4);   // turn the LED on (HIGH is the voltage level)
 
  float readingMapped=map(reading,140,621,0,255);
  float readingconstrained=constrain(readingMapped,0,255);
  
  if(readingconstrained <120){
  digitalWrite(ledPin,HIGH);


  }
  else{
  digitalWrite(ledPin,LOW);
  }
  
  delay(30);
  
  
  
  
  
  
  // wait for a second
 /* analogWrite(ledPin, 0);   // turn the LED on (HIGH is the voltage level)
  delay(500);
  analogWrite(ledPin, 155);   // turn the LED on (HIGH is the voltage level)
  delay(500);
  analogWrite(ledPin, 55);   // turn the LED on (HIGH is the voltage level)
  delay(500);
  analogWrite(ledPin, 0);   // turn the LED on (HIGH is the voltage level)
  delay(500);
*/
  
  // wait for a second



}
