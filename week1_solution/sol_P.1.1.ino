#define LED D13
#define BUTTON D7

bool before = LOW;
bool led = LOW;
bool now = LOW;

void setup()
{
  pinMode(LED, OUTPUT);
  pinMode(BUTTON, INPUT);
}

void loop()
{
  before = now;
  now = digitalRead(BUTTON);
  if (now && !before) {
    while (digitalRead(BUTTON));
    led = !led;
  }
  
  digitalWrite(LED, led);
}
