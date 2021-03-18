//************libraries**************//
#include <Wire.h>
#include <RTClib.h>
#include <Adafruit_GFX.h>
#include <Adafruit_SharpMem.h>
#include "EncoderStepCounter.h"
#include "ArduinoLowPower.h"
#include <EasyButton.h>
#include "Z10_Icons.h"
#include "Z11_DSEG14_Classic_Bold_50.h"
#include "Z12_DSEG7_Classic_Mini_Bold_19.h"

//*************Display*****************//
#define SHARP_SCK  13
#define SHARP_MOSI 11
#define SHARP_SS   10
#define BLACK 0
#define WHITE 1

Adafruit_SharpMem display(SHARP_SCK, SHARP_MOSI, SHARP_SS, 144, 168);

//************Button*****************//
#define P0 14 //AL+Back button
EasyButton button2(P0);

//************Encoder*****************//
#define P1 5 //Encoder button
EasyButton button1(P1);

#define ENCODER_PIN1 6
#define ENCODER_PIN2 9
#define ENCODER_INT1 digitalPinToInterrupt(ENCODER_PIN1)
#define ENCODER_INT2 digitalPinToInterrupt(ENCODER_PIN2)

EncoderStepCounter encoder(ENCODER_PIN1, ENCODER_PIN2);

//**************RTC*****************//
RTC_DS3231 rtc;
const byte tickInt = 18;

//**************Alarm***************//
//PENDING

//************Variables**************//
int newHour;
int newMin;
int newYear;
int newMonth;
int newDay;

int menu = 0;
bool is12hr = true;
int roundedSec = 0;
bool tock = true;
int encPos = 0;
signed long position = 0;

void setup() {
  Serial.begin(9600);
  Wire.begin();
  
  display.begin();
  display.clearDisplay();
  display.setTextColor(BLACK, WHITE);
  display.setRotation(3);

  encoder.begin();
  pinMode(P0, INPUT_PULLUP);
  pinMode(P1, INPUT_PULLUP);

//  LowPower.attachInterruptWakeup(ENCODER_INT1, interrupt, CHANGE);
//  LowPower.attachInterruptWakeup(ENCODER_INT2, interrupt, CHANGE);
//  LowPower.attachInterruptWakeup(P0, interrupt, CHANGE);
//  LowPower.attachInterruptWakeup(P1, interrupt, CHANGE);

  button1.begin();
  button2.begin();
  button1.onPressedFor(1000, longPress1);
  button1.onPressed(onButton1Pressed);
  button2.onPressedFor(1000, longPress2);
  button2.onPressed(onButton2Pressed);
  button1.enableInterrupt(interrupt);
  button2.enableInterrupt(interrupt);

  rtc.begin();
  if (rtc.lostPower()) {
    Serial.println("RTC is NOT running!");
    rtc.adjust(DateTime(__DATE__, __TIME__));
  }
  //rtc.adjust(DateTime(__DATE__, __TIME__));
  
  rtc.writeSqwPinMode (DS3231_SquareWave1Hz);
  pinMode(tickInt, INPUT_PULLUP);
  attachInterrupt(digitalPinToInterrupt (tickInt), tick, RISING);
  //LowPower.attachInterruptWakeup(tickInt, tick, CHANGE);
  
}

DateTime now;


void loop() {
  switch (menu) {
    case 0:
      mainDisplay();
      break;
    case 1:
      stopWTimer();
      encoderMove();
      break;
    case 2:
      worldTime();
      encoderMove();
      break;
      
    case 10:
      write1224Hr();
      encoderMove();
      break;
    case 11:
      writeHr();
      encoderMove();
      break;
    case 12:
      writeMin();
      encoderMove();
      break;
    case 13:
      writeAMPM();
      encoderMove();
      break;
    case 14:
      writeMonth();
      encoderMove();
      break;
    case 15:
      writeDay();
      encoderMove();
      break;
    case 16:
      writeYear();
      encoderMove();
      break;

    case 17:
      newTZ();
      encoderMove();
      break;

    case 100:
      AL1Menu();
      encoderMove();
      break;
    case 110:
      AL1NewDOW();
      encoderMove();
      break;
    case 111:
      AL1NewHr();
      encoderMove();
      break;
    case 112:
      AL1NewMin();
      encoderMove();
      break;
    case 113:
      AL1NewAMPM();
      encoderMove();
      break;

    case 200:
      AL2Menu();
      encoderMove();
      break;
    case 210:
      AL2NewDOW();
      encoderMove();
      break;
    case 211:
      AL2NewHr();
      encoderMove();
      break;
    case 212:
      AL2NewMin();
      encoderMove();
      break;
    case 213:
      AL2NewAMPM();
      encoderMove();
      break;
  }
  encPos=0;
}

//***** Primary functionality *****//

void newTZ(){

}

//***** Setting the time *****//

void write1224Hr(){
  
}

void writeHr(){
  
}

void writeMin(){
  
}

void writeAMPM(){
  
}

void writeMonth(){
  
}

void writeDay(){
  
}

void writeYear(){
  
}

//***** Alarm Coding *****//

void AL1Menu(){

}

void AL1NewDOW(){

}

void AL1NewHr(){

}

void AL1NewMin(){

}

void AL1NewAMPM(){

}

void AL2Menu(){

}

void AL2NewDOW(){

}

void AL2NewHr(){

}

void AL2NewMin(){

}

void AL2NewAMPM(){

}
