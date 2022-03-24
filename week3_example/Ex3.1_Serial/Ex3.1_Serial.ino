/*
 * Page 6. Ex3.1 Serial Communication
 */

void setup()
{
  Serial.begin(9600);
}

void loop()
{
  Serial.println("abc");
  Serial.println("def");
  Serial.println("ghi");

  delay(500);
}
