int led1 = A5;
int photoresistor = A0;
int analogValue;
int interval = 10;

void setup() {
  pinMode(led1, OUTPUT);
  pinMode(photoresistor, INPUT);
}

void loop() {
    
    // Read photoresistor output
    // Write to webhook every 10 seconds.
    analogValue = analogRead(photoresistor); // range 0 - 255
    Particle.publish("light", String(analogValue), PRIVATE);
    delay(10 * interval);

}
