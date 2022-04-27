#define LED 9
void setup()
{
  Serial.begin(9600);
  pinMode(LED, OUTPUT);
}

void loop()
{
  char input = Serial.read();
  
  if (input == 'h') {
    digitalWrite(LED, HIGH);
  }
  if (input == 'l') {
    digitalWrite(LED, LOW);
  }
  
  delay(100);
}
