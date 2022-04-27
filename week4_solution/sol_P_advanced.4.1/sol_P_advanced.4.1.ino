#define LED 9
void setup()
{
  Serial.begin(9600);
  pinMode(LED, OUTPUT);
}

void loop()
{
  char input = Serial.read();
  
  if (48 <= input && input <= 57)
    analogWrite(LED, (input - 48) * 28.2);
  
  
  delay(100);
}
