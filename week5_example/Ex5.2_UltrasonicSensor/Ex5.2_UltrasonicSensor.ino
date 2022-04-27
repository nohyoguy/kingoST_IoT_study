#define TRIG 12
#define ECHO 11
void setup()
{
  Serial.begin(9600);
  pinMode(TRIG, OUTPUT);
  pinMode(ECHO, INPUT);
}
 
void loop()
{
  digitalWrite(TRIG, HIGH);
  delay(10);
  digitalWrite(TRIG, LOW);
 
  unsigned long distance = pulseIn(ECHO, HIGH) * 340 / 20000;
 
  Serial.print("distance: ");
  Serial.print(distance);
  Serial.println("cm");
  delay(1000);
}
