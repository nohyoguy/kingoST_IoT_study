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
  /**
   * LED에 대응하는 버튼이 눌렸는지를 확인하고,
   * 버튼의 상태에 맞게 LED를 켜거나 끕니다.
   */
  bool red = digitalRead(RBTN);
  bool green = digitalRead(GBTN);
  bool blue = digitalRead(BBTN);
  digitalWrite(RLED, red);
  digitalWrite(GLED, green);
  digitalWrite(BLED, blue);
  
  /**
   * led의 상태를 다음의 식과 같이 표현합니다.
   * 변수 led의 값을 이진수로 표현하면 어떤 LED가 켜진 상태인지 확인 가능합니다.
   * 예를 들어, led의 값이 5라면 이 수는 이진수로 101이며,
   * red와 blue가 켜져있음을 확인할 수 있습니다.
   */
  int led = red * 4 + green * 2 + blue;

  /**
   * switch문을 이용해, led의 값에 따라 시리얼에 대응하는 색을 출력합니다.
   * 우리가 배운 if-else문을 이용했다면
   * 
   * if (led == 0) {
   *     Serial.println("none");
   * } else if (led == 1) {
   *     Serial.println("blue");
   * } else if ....
   * 
   * 와 같이 각각의 경우를 나열 할 수 있으며, switch문을 사용한 것과 동일한
   * 의미입니다. 그렇지만 switch문을 사용하는 것이 더 편합니다.
   */
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
