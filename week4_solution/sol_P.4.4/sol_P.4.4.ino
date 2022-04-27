#define LED 9
#define HIGHBTN 7
#define LOWBTN 6

int bright = 100;

void setup()
{
  Serial.begin(9600);
  pinMode(LED, OUTPUT);
  pinMode(HIGHBTN, INPUT);
  pinMode(LOWBTN, INPUT);
}

void loop()
{
  analogWrite(LED, bright);

  if (digitalRead(HIGHBTN) && bright <= 235) {
    bright += 20;
  }
  
  if (digitalRead(LOWBTN) && bright >= 20) {
    bright -= 20;
  }
  
  Serial.println(bright);
  delay(100);
}
