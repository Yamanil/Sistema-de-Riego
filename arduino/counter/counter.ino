const int sensorPin= A0;
void setup() {
  // put your setup code here, to run once:
  Serial.begin(9600);
}

void loop() {
  // put your main code here, to run repeatedly:
 int value = analogRead(sensorPin);
 float millivolts = (value / 1023.0) * 5000;
 int celsius = millivolts / 10;
 delay(1000);
 Serial.println(celsius);

 delay(1000);
}
