void DOW() {
  switch(now.dayOfTheWeek()){
    case 0:
    display.drawBitmap(6, 121, iSU, 20, 7, BLACK);
    break;
    case 1:
    display.drawBitmap(27, 121, iMO, 21, 7, BLACK);
    break;
    case 2:
    display.drawBitmap(49, 121, iTU, 22, 7, BLACK);
    break;
    case 3:
    display.drawBitmap(72, 121, iWE, 22, 7, BLACK);
    break;
    case 4:
    display.drawBitmap(97, 121, iTH, 22, 7, BLACK);
    break;
    case 5:
    display.drawBitmap(120, 121, iFR, 22, 7, BLACK);
    break;
    case 6:
    display.drawBitmap(142, 121, iSA, 22, 7, BLACK);
    break;
  }
}
