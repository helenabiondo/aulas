#include <Servo.h>

Servo s;
int pos;

const int bot1 = 5;
const int bot2 = 6;
const int ledv = 2;
const int ledr = 3;



void setup() {
  pinMode(bot1, INPUT);
  pinMode(bot2, INPUT);
  pinMode(ledv, OUTPUT);
  pinMode(ledr, OUTPUT);
  s.attach(9);
  Serial.begin(9600);
  s.write(160);
}

int var1;
int var2;

void loop() {
  var1 = digitalRead(bot1);
  var2 = digitalRead(bot2);
 
  
  if(var1){
digitalWrite(ledv, HIGH);
digitalWrite(ledr, LOW);
    for(pos = 100; pos < 160; pos++)
    {
      s.write(pos);
      delay(15);
    }
  }

  if(var2){
digitalWrite(ledv,LOW);
digitalWrite(ledr,HIGH);
    for(pos = 160; pos > 100; pos--)
    {
      s.write(pos);
      delay(15);
    }
  }
}
