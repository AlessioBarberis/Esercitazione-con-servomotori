#include <Servo.h>
    
Servo myservo;       //Il nome del servo è Servo1;
int potPin = 0;
int val;

void setup()
{
  myservo.attach (9);         //Pin digitale del servo;
}

void loop()
{
  val = analogRead(potPin);
  val = map(val, 0, 1023, 0, 179);
  myservo.write(val);
  delay(15);
}

