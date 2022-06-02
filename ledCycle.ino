// code for a recycling pattern for ghostbusters
int led1 = 2;
int led2 = 3;
int led3 = 4;
int led4 = 5;
int led5 = 6;
int led6 = 7;
int led7 = 8;
int led8 = 9;
int led9 = 10;
int led10 = 11;
int led11 = 12;
int led12 = 13;

// for button

int button = A0;
void setup() {
  pinMode(led1, OUTPUT);
  pinMode(led2, OUTPUT);
  pinMode(led3, OUTPUT);
  pinMode(led4, OUTPUT);
  pinMode(led5, OUTPUT);
  pinMode(led6, OUTPUT);
  pinMode(led7, OUTPUT);
  pinMode(led8, OUTPUT);
  pinMode(led9, OUTPUT);
  pinMode(led10, OUTPUT);
  pinMode(led11, OUTPUT);
  pinMode(led12, OUTPUT);
  pinMode(button, INPUT_PULLUP);
}

void loop() {
  if (!digitalRead(button)) {
    delay(100);
    cycleUp(50);
    allOff(1);
    cycleDown(50);
    allOff(1);
  }
}
void cycleUp(int time) {
  for (int i = 2; i < 14; i++) {
    digitalWrite(i, HIGH);
    delay(time);
    /// digitalWrite(i, LOW);
    // delay(time);
  }
}
void cycleDown(int time) {
  for (int i = 13; i > 1; i--) {
    digitalWrite(i, HIGH);
    delay(time);
    // digitalWrite(i, LOW);
    // delay(time);
  }
}
void allOff(int time) {
  for (int i = 2; i < 14; i++) {
    digitalWrite(i, LOW);
    delay(time);
  } delay(100);
}
