#define LED D12
#define POTENT A0
void setup()
{
  Serial.begin(9600);
  pinMode(LED, OUTPUT);
  pinMode(POTENT, INPUT);
}

void loop()
{
  if (analogRead(POTENT) >= 500) {
    digitalWrite(LED, HIGH);
  } else {
    digitalWrite(LED, LOW);
  }
  delay(100);
  Serial.println(analogRead(A0));
}
