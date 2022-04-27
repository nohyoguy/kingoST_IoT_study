#define LED 11
#define POTENT A0
void setup()
{
  Serial.begin(9600);
  pinMode(LED, OUTPUT);
  pinMode(POTENT, INPUT);
}

void loop()
{
  analogWrite(LED,
              (analogRead(A0)) / 4.01);
  delay(100);
  Serial.println(analogRead(A0));
}
