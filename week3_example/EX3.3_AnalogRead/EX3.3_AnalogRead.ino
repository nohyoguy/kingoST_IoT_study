/*
 * Page 15 example 3.3 AnalogRead
 */
 
void setup() {
    Serial.begin(9600);
}


void loop() {
    int read_value = analogRead(A0);

    Serial.println(read_value);
    delay(1000);
}
