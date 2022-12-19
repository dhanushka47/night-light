const int LED_PIN = 6; // LED is connected to digital pin 13
const int LDR_PIN = A0; // LDR is connected to analog pin A0

void setup() {
  pinMode(LED_PIN, OUTPUT); // Set LED pin as output
  Serial.begin(9600);
}

void loop() {
  int ldrValue = analogRead(LDR_PIN); // Read value from LDR
  Serial.println(ldrValue);
  if (ldrValue > 500) { // If it's dark (LDR value is low)
    digitalWrite(LED_PIN, HIGH); // Turn on LED
  } else {
    digitalWrite(LED_PIN, LOW); // Turn off LED
  }
  delay(100); // Delay for a moment before reading LDR again
}
