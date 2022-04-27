#define BTN1 13
#define BTN2 12
#define BTN3 11

void setup()
{
  Serial.begin(9600);
  pinMode(BTN1, INPUT);
  pinMode(BTN2, INPUT);
  pinMode(BTN3, INPUT);
}

void loop()
{
  if (digitalRead(BTN1))
    Serial.println("a");
  
  if (digitalRead(BTN2))
    Serial.println("b");

  if (digitalRead(BTN3))
    Serial.println("c");
  
  delay(500);
}
