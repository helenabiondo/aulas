
const int ledL = 2;
const int Bot = 3;
int estadobotao = 0;
  
void setup()
{
  pinMode(ledL, OUTPUT);
  pinMode(ledL, INPUT);
}

void loop()

{  
  estadobotao = digitalRead(Bot);          
  
  if (estadobotao == HIGH) {
    digitalWrite(ledL,LOW); 
  } else {
    digitalWrite(ledL,HIGH);
  }       
}
