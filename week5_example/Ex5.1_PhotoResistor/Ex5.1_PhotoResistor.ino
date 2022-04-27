// control Photo Resistor
#define PHOTO A0
 
void setup() {
    Serial.begin(9600);
}
 
void loop() {
    Serial.print("Bright: ");
    Serial.println(analogRead(A0));
    delay(500);
}
