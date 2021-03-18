void tick () {
  now = rtc.now();

//Possibly superstition, SHARP spec sheet suggests refreshing display every two hours if still image is presented to avoid burn-in
  if(now.minute() == 51 && now.second() == 0){
    display.clearDisplay();
  }

//Flipflop mangages colon and second counter on mainDisplay
  tock =! tock;
  Serial.println(tock);

  switch(now.second()) {
   case 0:
    roundedSec = 0;
    Serial.println(roundedSec);
    break;
   case 5:
    roundedSec = 5;
    Serial.println(roundedSec);
    break;
   case 10:
    roundedSec = 10;
    Serial.println(roundedSec);
    break;
   case 15:
    roundedSec = 15;
    Serial.println(roundedSec);
    break;
   case 20:
    roundedSec = 20;
    Serial.println(roundedSec);
    break;
   case 25:
    roundedSec = 25;
    Serial.println(roundedSec);
    break;
   case 30:
    roundedSec = 30;
    Serial.println(roundedSec);
    break;
   case 35:
    roundedSec = 35;
    Serial.println(roundedSec);
    break;
   case 40:
    roundedSec = 40;
    Serial.println(roundedSec);
    break;
   case 45:
    roundedSec = 45;
    Serial.println(roundedSec);
    break;
   case 50:
    roundedSec = 50;
    Serial.println(roundedSec);
    break;
   case 55:
    roundedSec = 55;
    Serial.println(roundedSec);
    break;
   default:
   break;
  }
}
