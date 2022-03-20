#define SWITCH D3
#define LED D4

void setup(){
  pinMode(SWITCH, INPUT);
  pinMode(LED, OUTPUT);
}

void loop(){
  bool switch_var = digitalRead(SWITCH);

  digitalWrite(LED,seitch_var);

  delay(1000);
}
