/*il potenziometro pilota i deu servomotori che 
vanno uno all'inverso dell'altro.*/

#include <Servo.h>
Servo myservo2;    
Servo myservo;       //Il nome del servo è Servo1;
int potPin = 0;
int val;

void setup()
{
  myservo.attach (9);          //Pin digitale del servo;
  myservo2.attach (10);
}

void loop()
{
  val = analogRead(potPin);                     //Pilota il primo servo
  val = map(val, 0, 1023, 0, 179);
  myservo.write(val);
  delay(15);

  val = analogRead(potPin);                    //Pilota il secondo servo
  val = map(val, 0, 1023, 179, 0);
  myservo2.write(val);
  delay(15);
}
