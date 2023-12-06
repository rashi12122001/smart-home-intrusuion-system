// Define pins for ultrasonic sensor
const int trigPin = 9;
const int echoPin = 10;

// Define pin for infrared sensor
const int infraredSensorPin = 7;

// Define pin for buzzer
const int buzzerPin = 6;
const int bulbPin = 3;

void setup() {
  // put your setup code here, to run once:
  Serial.begin(9600);

  // Ultrasonic sensor pins
  pinMode(trigPin, OUTPUT);
  pinMode(echoPin, INPUT);

  // Infrared sensor pin
  pinMode(infraredSensorPin, INPUT);

  // Buzzer pin
  pinMode(buzzerPin, OUTPUT);
  // bulb pin
  pinMode(bulbPin, OUTPUT);
}
void loop() {
  // put your main code here, to run repeatedly:
int infraredValue = digitalRead(infraredSensorPin);
  if (infraredValue == HIGH) {
    // If a person is detected, measure the distance using ultrasonic sensor
    int distance = getDistance();

    // Check if the distance is 15cm or less
    if (distance <= 15) {
      // If the distance is less than or equal to 15cm, activate the buzzer
      digitalWrite(buzzerPin, HIGH);
      delay(500); // Beep for half a second
      digitalWrite(buzzerPin, LOW);
      digitalWrite(bulbPin, HIGH);
    }
  } else {
    // If no person is detected, turn off the buzzer
    digitalWrite(buzzerPin, LOW);
    digitalWrite(bulbPin, LOW);
  }
  delay(100); // Delay for stability
}

// Function to measure distance using ultrasonic sensor
int getDistance() {
  digitalWrite(trigPin, LOW);
  delayMicroseconds(2);

  digitalWrite(trigPin, HIGH);
  delayMicroseconds(10);
  digitalWrite(trigPin, LOW);

  long duration = pulseIn(echoPin, HIGH);

  // Calculate distance in centimeters
  int distance = duration * 0.034 / 2;

  return distance;  

}