#define LED D12
#define POTENT A0
int power = 0;
int interval = 1000;
unsigned long prev, now;

void setup()
{
  Serial.begin(9600);
  pinMode(LED, OUTPUT);
  pinMode(POTENT, INPUT);
  prev = millis();
}

void loop()
{
  int interval = analogRead(A0);
  now = millis();

  if ((now - prev) >= interval) {
    prev = millis();
    power = !power;
  }
  digitalWrite(LED, power);
}
