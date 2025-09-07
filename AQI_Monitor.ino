#include <LiquidCrystal.h>

// LCD pin connections: (RS, EN, D4, D5, D6, D7)
LiquidCrystal lcd(7, 6, 5, 4, 3, 2);

const int mq135Pin = A0;   // MQ-135 analog output pin
const int buzzer = 8;      // Buzzer pin
const int led = 9;         // LED pin

int sensorValue = 0;       // Raw sensor value
int airQuality = 0;        // Converted AQI value (approx)

void setup() {
  pinMode(mq135Pin, INPUT);
  pinMode(buzzer, OUTPUT);
  pinMode(led, OUTPUT);

  lcd.begin(16, 2);        // 16x2 LCD
  lcd.print(" AQI Checker ");
  delay(2000);
  lcd.clear();
}

void loop() {
  sensorValue = analogRead(mq135Pin);

  // Map sensor value (0–1023) to an AQI scale (0–500 approx)
  airQuality = map(sensorValue, 0, 1023, 0, 500);

  lcd.setCursor(0, 0);
  lcd.print("AQI: ");
  lcd.print(airQuality);
  lcd.print("    "); // clear extra chars

  lcd.setCursor(0, 1);

  if (airQuality <= 50) {
    lcd.print("Good Air     ");
    digitalWrite(led, LOW);
    noTone(buzzer);
  }
  else if (airQuality <= 100) {
    lcd.print("Moderate Air ");
    digitalWrite(led, LOW);
    noTone(buzzer);
  }
  else if (airQuality <= 200) {
    lcd.print("Poor Air     ");
    digitalWrite(led, HIGH);
    tone(buzzer, 1000, 500); // beep
  }
  else {
    lcd.print("Hazardous!!! ");
    digitalWrite(led, HIGH);
    tone(buzzer, 2000);      // continuous alarm
  }

  delay(1000); // Update every 1 sec
}
