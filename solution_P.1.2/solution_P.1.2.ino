#define RLED 12
#define GLED 10
#define BLED 8

#define RBTN 7
#define GBTN 5
#define BBTN 3

void setup()
{
  Serial.begin(9600);
  pinMode(RLED, OUTPUT);
  pinMode(GLED, OUTPUT);
  pinMode(BLED, OUTPUT);
  
  pinMode(RBTN, INPUT);
  pinMode(GBTN, INPUT);
  pinMode(BBTN, INPUT);
}

void loop()
{
  bool red = digitalRead(RBTN);
  bool green = digitalRead(GBTN);
  bool blue = digitalRead(BBTN);
  digitalWrite(RLED, red);
  digitalWrite(GLED, green);
  digitalWrite(BLED, blue);
  
  int led = red * 4 + green * 2 + blue;
  switch (led) {
     case 0:
        Serial.println("none");
       break;
     case 1:
        Serial.println("blue");
       break;
    case 2:
       Serial.println("green");
       break;
    case 4:
       Serial.println("red");
       break;
    case 5:
       Serial.println("magenta");
       break;
    case 6:
       Serial.println("yellow");
       break;
    case 7:
       Serial.println("white");
       break;
    case 3:
       Serial.println("cyan");
       break;
  }
  
  delay(100);
}
