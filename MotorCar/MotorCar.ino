int ledPin = 3;
int E1 = 7;  
int M1 = 8; 
int E2 = 9;                      
int M2 = 10;                        

void setup() 
{ 
  pinMode(ledPin,OUTPUT);
  pinMode(M1, OUTPUT);   
    pinMode(M2, OUTPUT); 
} 

void loop() 
{
   
  int value;
  for(value = 0 ; value <= 255; value+=5) 
  { 
    digitalWrite(M1,HIGH);   
    digitalWrite(M2, HIGH);       
    analogWrite(E1, value);   //PWM Speed Control
    analogWrite(E2, value);   //PWM Speed Control
   int reading = analogRead(0);
   analogWrite(ledPin,reading / 4);
   delay(30);
  }  
}
