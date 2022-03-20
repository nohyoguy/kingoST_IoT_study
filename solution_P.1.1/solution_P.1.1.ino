/**
 * 핀 번호, 변수명 등은 자신이 원하는대로 설정 가능합니다.
 */
#define LED D13
#define BUTTON D7

/**
 * // loop에서 수정한 변수가 계속 유지되기 위해서는, loop() 밖에서 변수를
 * 정의하는 전역변수를 만들어줘야 합니다.
 * https://dojang.io/mod/page/view.php?id=684 전역변수에 대한 내용은
 * 다음 링크를 참조해주세요.
 */
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

  /**
   * 버튼의 상태를 바꾸기 위해서는
   * 현재 버튼이 눌림 + 이전 상태는 버튼이 눌리지 않음
   * 상태여야 합니다.
   */
  if (now && !before) {
    led = !led;
  }
  
  digitalWrite(LED, led);
}
