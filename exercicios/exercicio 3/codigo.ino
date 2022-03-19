
int i = 1;
void setup ()
{
  while (i<6) {
    pinMode (i,OUTPUT);
    i = i+1;
  }
}

void loop ()
{
  for(i=1; i<=5; i++) {
    digitalWrite (i, HIGH);
    delay (1000);
  }
  
  delay(10); //deley a litlle bit to improve simulation performance
}
  
