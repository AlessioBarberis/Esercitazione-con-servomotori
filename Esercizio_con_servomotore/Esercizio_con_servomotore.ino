#include <Servo.h>
    
Servo Servo1;       //Il nome del servo è Servo1;

void setup()
{
  Servo1.attach (9);         //Pin digitale del servo;
}

void loop()
{
  Servo1.write(0);                //Imposto la posizione a cui deve spostare il Servo1;
  delay(500);
  Servo1.write(30);
  delay(500);
  Servo1.write(60);
  delay(500);
  Servo1.write(90);
  delay(500);
  Servo1.write(120);
  delay(500);
  Servo1.write(150);
  delay(500);
  Servo1.write(180);
  delay(500);
}

