int Timer_1 = 13;
int Timer_2 = 12;
int Timer_3 = 11;
int Timer_4 = 10;
int Led_Red = 4;
int Led_Yellow = 5;
int Led_Blue = 6;
int Led_Green = 7;

const unsigned long timerDuration = 50000;
bool timerRunning = false;

unsigned long currentMillis = 0;
unsigned long previousMillis = 0;

//int buttonPressed = 1;
int Timer_state = 1;
bool Led_state = 0;

void setup() {
  pinMode(Timer_1, INPUT);
  pinMode(Timer_2, INPUT);
  pinMode(Timer_3, INPUT);
  pinMode(Timer_4, INPUT);
  pinMode(Led_Red, OUTPUT);
  pinMode(Led_Blue, OUTPUT);
  pinMode(Led_Yellow, OUTPUT);
  pinMode(Led_Green, OUTPUT);
  digitalWrite(Led_Red, LOW);
  digitalWrite(Led_Blue, LOW);
  digitalWrite(Led_Yellow, LOW);
  digitalWrite(Led_Green, LOW);
//  Serial.begin(9600);
//  Serial.println("Please Select a Time Interval...");
  
}

void loop() {

  bool buttonPressed = !digitalRead(Timer_1);
  if(buttonPressed && !timerRunning)
  {
    delay(20);
    timerRunning = true;
    currentMillis = millis();
//    Serial.print("Timer Start");
  }
  if(timerRunning)
  {
    unsigned long elapsed = millis() - currentMillis;
    if (elapsed < 15000) {
//    Serial.println("Best Condition");
      digitalWrite(Led_Green, HIGH);
    }
    else if (elapsed < 25000) {
//    Serial.println("Good Condition");
      digitalWrite(Led_Green, LOW);
      digitalWrite(Led_Blue, HIGH);
    }
    else if (elapsed < 35000) {
//    Serial.println("Okay Condition");
      digitalWrite(Led_Blue, LOW);
      digitalWrite(Led_Yellow, HIGH);
    }
    else if (elapsed < 50000) {
//    Serial.println("Almost End of Life");
      digitalWrite(Led_Yellow, LOW);
      digitalWrite(Led_Red, HIGH);
    }
    else {
//    Serial.println("Expired");
      timerRunning = false;   // unlock the button
      digitalWrite(Led_Red, LOW);
      Serial.println("Button is active again");
    }
  }
//    while(currentMillis < previousMillis)
//    {
//      Serial.println("Your Timer for 50 Seconds");
//      currentMillis = millis();
//    if(currentMillis >= 0 && currentMillis < 15000){
//         //currentMillis = millis();
//         //Led_state = !Led_state;
//         digitalWrite(Led_Green, HIGH);
//         Serial.println("Your Product is Best Condition");
//         //previousMillis = previousMillis + currentMillis;
//      }
//      else if(currentMillis >= 15000 && currentMillis < 25000)
//        {  
//           //currentMillis = millis();
//           //previousMillis = previousMillis + currentMillis;
//           //Led_state = !Led_state;
//           digitalWrite(Led_Green, LOW);
//           digitalWrite(Led_Blue, HIGH);
//           Serial.println("Your Product is Good Condition");
//        }
//       else if(currentMillis >= 25000 && currentMillis < 35000)
//        {
//          //currentMillis = millis();
//          //previousMillis = previousMillis + currentMillis;
//          //Led_state = !Led_state;
//          digitalWrite(Led_Blue, LOW);
//          digitalWrite(Led_Yellow, HIGH);
//          Serial.println("Your Product is Okay Condition");
//        }
//       else if(currentMillis >= 35000 && currentMillis < 50000)
//        { 
//          //currentMillis = millis();
//          //previousMillis = previousMillis - currentMillis;
//          //Led_state = !Led_state;
//          digitalWrite(Led_Yellow, LOW);
//          digitalWrite(Led_Red, HIGH);
//          Serial.println("Your Product almost end of Life");
//       }
//        else if(currentMillis > 50000){
//         //Led_state = !Led_state;
//         digitalWrite(Led_Red, LOW);
//         Serial.println("Your product is expired");
//         break;
//        }
//        previousMillis = 0;
//    }
    
}
