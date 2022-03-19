
const int ledL = 2;
const int Bot = 3;
  
void setup()
{
  pinMode(ledL, OUTPUT);
  pinMode(ledL, INPUT);
}

int var;

void loop()
{
  var = digitalRead(Bot);
  if (var){
  digitalWrite(ledL, HIGH);
}
}
