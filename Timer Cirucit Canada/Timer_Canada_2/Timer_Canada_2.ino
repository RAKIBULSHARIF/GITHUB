// ---------------- BUTTON PINS ----------------
const int buttonPins[4] = {A0, A1, A2, A3};   // 4 buttons

// ---------------- TIMER DURATIONS (different) ------------
unsigned long timerDuration[4] = {
  50000,   // Button 1 → 10 seconds
  70000,   // Button 2 → 20 seconds
  100000,   // Button 3 → 30 seconds
  120000    // Button 4 → 50 seconds
};

// ---------------- LED PINS (for EACH BUTTON) ------------
// EXAMPLE: Button 1 uses LEDs on pins 5,9,13
//          Button 2 uses LEDs on pins 4,8,12
//          Button 3 uses LEDs on pins 3,7,11
//          Button 4 uses LEDs on pins 2,6,10

const int ledGreen[4]  = {5,  4, 3, 2};
const int ledYellow[4] = {9,  8, 7, 6};
const int ledRed[4]    = {13,  12, 11, 10};

// ---------------- TIMER STATES ---------------
bool timerRunning[4] = {false, false, false, false};
unsigned long timerStart[4] = {0, 0, 0, 0};

void setup() {
  Serial.begin(9600);

  // Setup buttons
  for (int i = 0; i < 4; i++) {
    pinMode(buttonPins[i], INPUT_PULLUP);
  }

  // Setup LEDs
  for (int i = 0; i < 4; i++) {
    pinMode(ledGreen[i], OUTPUT);
    pinMode(ledYellow[i], OUTPUT);
    pinMode(ledRed[i], OUTPUT);
  }
}

void loop() {
  unsigned long now = millis();

  for (int i = 0; i < 4; i++) {

    bool pressed = !digitalRead(buttonPins[i]);  // active LOW

    // ---------------- START TIMER ----------------
    if (pressed && !timerRunning[i]) {
      timerRunning[i] = true;
      timerStart[i] = now;

      Serial.print("Button ");
      Serial.print(i + 1);
      Serial.println(" Timer Started");
    }

    // ---------------- PROCESS TIMER ----------------
    if (timerRunning[i]) {

      unsigned long elapsed = now - timerStart[i];

      // Reset LEDs
      turnOffLEDs(i);

      // Sequence
      if (elapsed < 22000) {
        digitalWrite(ledGreen[i], HIGH);
        printStage(i, "Green - Best Condition");
      }
      else if (elapsed < 35000) {
        digitalWrite(ledYellow[i], HIGH);
        printStage(i, "Yellow - OK Condition");
      }
      else if (elapsed < timerDuration[i]) {
        digitalWrite(ledRed[i], HIGH);
        printStage(i, "Red - Almost End of Life");
      }
      else {
        // Timer End (Expired)
        turnOffLEDs(i);
        printStage(i, "Expired");

        timerRunning[i] = false;   // reset
        Serial.print("Button ");
        Serial.print(i + 1);
        Serial.println(" Active Again\n");
      }
    }

  } // end button loop
}


// ---------------- HELPER FUNCTIONS ----------------

void printStage(int btn, const char* msg) {
  Serial.print("Button ");
  Serial.print(btn + 1);
  Serial.print(": ");
  Serial.println(msg);
}

void turnOffLEDs(int i) {
  digitalWrite(ledGreen[i], LOW);
  digitalWrite(ledYellow[i], LOW);
  digitalWrite(ledRed[i], LOW);
}
