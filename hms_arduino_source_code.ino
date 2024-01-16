const int sensorPin = A0;       // Analog pin connected to the sensor
const int ledPin1 = LED_BUILTIN; // Built-in LED pin on Arduino Uno
const int ledPin2 = 2;           // Additional LED pin
const int buzzerPin = 3;         // Buzzer pin

const int standardMin = 675;     // Minimum standard sensor value
const int standardMax = 692;     // Maximum standard sensor value

void setup() {
  pinMode(ledPin1, OUTPUT);       // Set the built-in LED pin as an output
  pinMode(ledPin2, OUTPUT);       // Set the additional LED pin as an output
  pinMode(buzzerPin, OUTPUT);    // Set the buzzer pin as an output
  Serial.begin(9600);            // Initialize serial communication for debugging
}

void loop() {
  int sensorValue = analogRead(sensorPin);   // Read the sensor output

  if (sensorValue < standardMin || sensorValue > standardMax) {
    digitalWrite(ledPin1, HIGH);   // Turn on the built-in LED
    digitalWrite(ledPin2, HIGH);   // Turn on the additional LED
    tone(buzzerPin, 600);        // Activate the buzzer
  } else {
    digitalWrite(ledPin1, LOW);    // Turn off the built-in LED
    digitalWrite(ledPin2, LOW);    // Turn off the additional LED
    noTone(buzzerPin);            // Deactivate the buzzer
  }

  Serial.print("Sensor Value: ");
  Serial.println(sensorValue);    // Print the sensor value to the serial monitor

  delay(1000);   // Delay between readings
}

