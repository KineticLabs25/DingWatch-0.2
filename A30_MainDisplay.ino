void mainDisplay() {
  display.fillRect(0, 0, 168, 144, WHITE);

  display.drawBitmap(0, 0, mainMenu, 168, 144, BLACK);

  // if AL1 is on
  display.drawBitmap(8, 48, iAL1, 40, 10, BLACK);

  // if AL2 is on
  display.drawBitmap(48, 48, iAL2, 40, 10, BLACK);


  display.setFont(&DSEG14_Classic_Bold_50);


  if (is12hr == false) {
    display.setCursor(7, 111);
    if (now.hour() <= 9) {
      display.print("0");
    }
    display.print(now.hour(), DEC);

    //  display.print(":");

    if (tock == 0) {
      display.print(":");
    } else {
      display.setTextColor(WHITE);
      display.setCursor(83, 111);
      display.print(":");
      display.setTextColor(BLACK);
    }

    if (now.minute() <= 9) {
      display.print("0");
    }
    display.print(now.minute(), DEC);
  } else {
    if (now.twelveHour() <= 9) {
      display.setCursor(23,111);
    } else{
      display.setCursor(-15, 111);
    }
    display.print(now.twelveHour(), DEC);

    //  display.print(":");

    if (tock == 0) {
      display.print(":");
    } else {
      display.setTextColor(WHITE);
      display.setCursor(61, 111);
      display.print(":");
      display.setTextColor(BLACK);
    }

    if (now.minute() <= 9) {
      display.print("0");
    }
    display.print(now.minute(), DEC);
    if(now.isPM() == false){
      display.drawBitmap(144, 65, iAM, 15, 42, BLACK);
    } else {
      display.drawBitmap(144, 65, iPM, 15, 42, BLACK);
    }
  }

  // Write AM or PM with now.isPM() if is12h = 1

  display.setCursor(93, 57);
  display.setFont(&DSEG7_Classic_Mini_Bold_19);
  if (now.month() <= 9) {
    display.print("0");
  }
  display.print(now.month(), DEC);
  display.print("/");
  if (now.day() <= 9) {
    display.print("0");
  }
  display.print(now.day(), DEC);

  secondTick();
  DOW();

  display.refresh();
  //LowPower.sleep();

}
