#define LED1 11
#define LED2 10

int bright1 = 250;
int bright2 = 0;

int inc1 = 0;
int inc2 = 1;

void setup()
{
  pinMode(LED1, OUTPUT);
  pinMode(LED2, OUTPUT);
}

void loop()
{
  analogWrite(LED1, bright1);
  analogWrite(LED2, bright2);
  
  if (inc1) {
    bright1 += 10;
  } else {
    bright1 -= 10;
  }
  
  if (inc2) {
    bright2 += 10;
  } else {
    bright2 -= 10;
  }
  
  if (bright1 <= 0 || bright1 >= 250) {
    inc1 = !inc1;
  }
  
  if (bright2 <= 0 || bright2 >= 250) {
    inc2 = !inc2;
  }
  
  delay(100);
}
