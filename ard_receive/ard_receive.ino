#define LED_1_PIN 8
#define LED_2_PIN 9
#define LED_3_PIN 10
#define LED_4_PIN 11
void powerOffAllLEDs()
{
    digitalWrite(LED_1_PIN, LOW);
    digitalWrite(LED_2_PIN, LOW);
    digitalWrite(LED_3_PIN, LOW);
    digitalWrite(LED_4_PIN, LOW);
}
void setup()
{
  Serial.begin(9600);
  pinMode(LED_1_PIN, OUTPUT);
  pinMode(LED_2_PIN, OUTPUT);
  pinMode(LED_3_PIN, OUTPUT);
  pinMode(LED_4_PIN, OUTPUT);
  powerOffAllLEDs();
}
void loop()
{
  
  if (Serial.available() > 0) {
    int ledNumber = Serial.read() - '0';
    powerOffAllLEDs();
    Serial.println(ledNumber);
    switch (ledNumber) {
      case 1:
        digitalWrite(LED_1_PIN, HIGH);
        break;
      case 2:
        digitalWrite(LED_2_PIN, HIGH);
        break;
      case 3:
        digitalWrite(LED_3_PIN, HIGH);
        break;
      case 4:
        digitalWrite(LED_4_PIN, HIGH);
        break;
      default: 
        // wrong pin number, do nothing
        // all LEDs will be powered off
        break;
    }
  }
}
