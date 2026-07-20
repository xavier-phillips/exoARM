#define enB 7
#define in4 6
#define in3 5
#define button1 4
#define button2 3

void setup() {
  pinMode(enB, OUTPUT);
  pinMode(in4, OUTPUT);
  pinMode(in3, OUTPUT);
  pinMode(button1, INPUT_PULLUP);
  pinMode(button2, INPUT_PULLUP);

  // Stop the motor initially
  digitalWrite(enB, LOW);
}

void loop() {
  // Read the states of pin 3 and pin 4
  bool button1State = digitalRead(button1);
  bool button2State = digitalRead(button2);

  if (button1State == LOW) {
    // If switch ON pin 3, retract the actuator
    digitalWrite(in4, LOW);
    digitalWrite(in3, HIGH);
    digitalWrite(enB, HIGH);
  } else if (button2State == LOW) {
    // If switch ON pin 4, extend the actuator
    digitalWrite(in4, HIGH);
    digitalWrite(in3, LOW);
    digitalWrite(enB, HIGH);
  } else {
    // If switch OFF, stop
    digitalWrite(enB, LOW);
  }
}