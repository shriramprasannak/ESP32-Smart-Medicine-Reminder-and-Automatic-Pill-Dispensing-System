#include <Wire.h>
#include <RTClib.h>
#include <Adafruit_GFX.h>
#include <Adafruit_SSD1306.h>
#include <ESP32Servo.h>

#define SCREEN_WIDTH 128
#define SCREEN_HEIGHT 64

Adafruit_SSD1306 display(SCREEN_WIDTH, SCREEN_HEIGHT, &Wire, -1);
RTC_DS1307 rtc;
Servo pillServo;

#define SERVO_PIN 18
#define BUTTON_PIN 19
#define BUZZER_PIN 25
#define RED_LED 26
#define GREEN_LED 27

bool reminderActive = false;
bool reminderTriggered = false;
bool medicineTaken = false;

unsigned long blinkTimer = 0;
bool blinkState = false;
unsigned long greenStart = 0;

void setup() {
  Serial.begin(115200);
  Wire.begin(21,22);

  pinMode(BUTTON_PIN, INPUT_PULLUP);
  pinMode(BUZZER_PIN, OUTPUT);
  pinMode(RED_LED, OUTPUT);
  pinMode(GREEN_LED, OUTPUT);

  digitalWrite(BUZZER_PIN, LOW);
  digitalWrite(RED_LED, LOW);
  digitalWrite(GREEN_LED, LOW);

  pillServo.attach(SERVO_PIN);
  pillServo.write(0);

  display.begin(SSD1306_SWITCHCAPVCC, 0x3C);
  display.clearDisplay();

  rtc.begin();
  if (!rtc.isrunning()) {
    rtc.adjust(DateTime(F(__DATE__), F(__TIME__)));
  }
}

void loop() {
  Serial.println(digitalRead(BUTTON_PIN));
  DateTime now = rtc.now();

  if(now.second()==10 && !reminderTriggered){
    reminderTriggered=true;
    reminderActive=true;
    medicineTaken=false;
    pillServo.write(90);
  }

  if(reminderActive){

    if(millis()-blinkTimer>=300){
        blinkTimer=millis();
        blinkState=!blinkState;
        digitalWrite(RED_LED,blinkState);
        digitalWrite(BUZZER_PIN,blinkState);
    }

    display.clearDisplay();
    display.setTextSize(2);
    display.setCursor(5,20);
    display.println("Take");
    display.println("Medicine");
    display.display();

    Serial.println(digitalRead(BUTTON_PIN));

    if (digitalRead(BUTTON_PIN) == LOW) {
        Serial.println("Button Pressed");

        reminderActive = false;
        medicineTaken = true;

        digitalWrite(RED_LED, LOW);
        digitalWrite(BUZZER_PIN, LOW);

        pillServo.write(0);
        greenStart = millis();
    }
}

  if(medicineTaken){
    if(millis()-blinkTimer>=300){
      blinkTimer=millis();
      blinkState=!blinkState;
      digitalWrite(GREEN_LED,blinkState);
    }

    display.clearDisplay();
    display.setTextSize(2);
    display.setTextColor(WHITE);
    display.setCursor(0,20);
    display.println("Medicine");
    display.println("Taken");
    display.display();

    if(millis()-greenStart>=10000){
      medicineTaken=false;
      digitalWrite(GREEN_LED,LOW);
    }
  }

  if(!reminderActive && !medicineTaken){
    display.clearDisplay();
    display.setTextSize(1);
    display.setTextColor(WHITE);
    display.setCursor(0,0);
    display.println("SMART MEDICINE");
    display.println("REMINDER");
    display.setCursor(0,30);
    display.print("Time: ");
    if(now.hour()<10) display.print("0");
    display.print(now.hour());
    display.print(":");
    if(now.minute()<10) display.print("0");
    display.print(now.minute());
    display.print(":");
    if(now.second()<10) display.print("0");
    display.print(now.second());
    display.display();
  }

  if(now.second()==20){
    reminderTriggered=false;
  }

  delay(20);
}
