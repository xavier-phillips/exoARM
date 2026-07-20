// Motor B connections
int enB = 10;
int in3 = 9;
int in4 = 8;

// switch connections
int sw1 = 3;
int sw2 = 4;

void setup() {
  // Set all the motor control pins to outputs
  pinMode(enB, OUTPUT);
  pinMode(in3, OUTPUT);
  pinMode(in4, OUTPUT);
  pinMode(sw1, INPUT_PULLUP);
  pinMode(sw2, INPUT_PULLUP);
 
  // Turn off motors - Initial state
  digitalWrite(in3, LOW);
  digitalWrite(in4, LOW);
}

void loop() {
  int sw1_state = digitalRead(sw1);
  int sw2_state = digitalRead(sw2);

  if (sw1_state == LOW) {
    // If switch ON pin 3, retract the actuator
    analogWrite(enB, 255);
    digitalWrite(in3, HIGH);
    digitalWrite(in4, LOW);
  } else if (sw2_state == LOW) {
    // If switch ON pin 4, extend the actuator
    analogWrite(enB, 255);
    digitalWrite(in3, LOW);
    digitalWrite(in4, HIGH);
  } else {
    // If switch OFF, stop
    digitalWrite(in3, LOW);
    digitalWrite(in4, LOW);
  }
}