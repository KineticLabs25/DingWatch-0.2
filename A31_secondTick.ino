void secondTick() {

  switch (roundedSec) {
    case 0:
    if(roundedSec==0 && now.second() == 0){
      display.drawBitmap(23, 6, i60s, 19, 12, BLACK);
      display.drawBitmap(6, 6, i55s, 36, 15, BLACK);
      display.drawBitmap(6, 13, i50s, 28, 8, BLACK);
      display.drawBitmap(6, 23, i45s, 28, 8, BLACK);
      display.drawBitmap(6, 23, i40s, 36, 15, BLACK);
      display.drawBitmap(23, 26, i35s, 19, 12, BLACK);
      display.drawBitmap(44, 26, i30s, 19, 12, BLACK);
      display.drawBitmap(44, 23, i25s, 36, 15, BLACK);
      display.drawBitmap(52, 23, i20s, 28, 8, BLACK);
      display.drawBitmap(52, 13, i15s, 28, 8, BLACK);
      display.drawBitmap(44, 6, i10s, 36, 15, BLACK);
      display.drawBitmap(44, 6, i5s, 19, 12, BLACK);
    } else {
      display.drawBitmap(23, 6, i60s, 19, 12, WHITE);
      display.drawBitmap(6, 6, i55s, 36, 15, WHITE);
      display.drawBitmap(6, 13, i50s, 28, 8, WHITE);
      display.drawBitmap(6, 23, i45s, 28, 8, WHITE);
      display.drawBitmap(6, 23, i40s, 36, 15, WHITE);
      display.drawBitmap(23, 26, i35s, 19, 12, WHITE);
      display.drawBitmap(44, 26, i30s, 19, 12, WHITE);
      display.drawBitmap(44, 23, i25s, 36, 15, WHITE);
      display.drawBitmap(52, 23, i20s, 28, 8, WHITE);
      display.drawBitmap(52, 13, i15s, 28, 8, WHITE);
      display.drawBitmap(44, 6, i10s, 36, 15, WHITE);
      display.drawBitmap(44, 6, i5s, 19, 12, WHITE);
    }
      if (tock == 1) {
        display.drawBitmap(44, 6, i5s, 19, 12, BLACK);
      } break;

    case 5:
      display.drawBitmap(44, 6, i5s, 19, 12, BLACK);
      if (tock == 0) {
        display.drawBitmap(44, 6, i10s, 36, 15, BLACK);
      } else {
        display.drawBitmap(44, 6, i10s, 36, 15, WHITE);
      } break;

    case 10:
      display.drawBitmap(44, 6, i5s, 19, 12, BLACK);
      display.drawBitmap(44, 6, i10s, 36, 15, BLACK);
      if (tock == 1) {
        display.drawBitmap(52, 13, i15s, 28, 8, BLACK);
      } else {
        display.drawBitmap(52, 13, i15s, 28, 8, WHITE);
      } break;

    case 15:
      display.drawBitmap(44, 6, i5s, 19, 12, BLACK);
      display.drawBitmap(44, 6, i10s, 36, 15, BLACK);
      display.drawBitmap(52, 13, i15s, 28, 8, BLACK);
      if (tock == 0) {
        display.drawBitmap(52, 23, i20s, 28, 8, BLACK);
      } else {
        display.drawBitmap(52, 23, i20s, 28, 8, WHITE);
      } break;

    case 20:
      display.drawBitmap(44, 6, i5s, 19, 12, BLACK);
      display.drawBitmap(44, 6, i10s, 36, 15, BLACK);
      display.drawBitmap(52, 13, i15s, 28, 8, BLACK);
      display.drawBitmap(52, 23, i20s, 28, 8, BLACK);
      if (tock == 1) {
        display.drawBitmap(44, 23, i25s, 36, 15, BLACK);
      } else {
        display.drawBitmap(44, 23, i25s, 36, 15, WHITE);
      } break;

    case 25:
      display.drawBitmap(44, 6, i5s, 19, 12, BLACK);
      display.drawBitmap(44, 6, i10s, 36, 15, BLACK);
      display.drawBitmap(52, 13, i15s, 28, 8, BLACK);
      display.drawBitmap(52, 23, i20s, 28, 8, BLACK);
      display.drawBitmap(44, 23, i25s, 36, 15, BLACK);
      if (tock == 0) {
        display.drawBitmap(44, 26, i30s, 19, 12, BLACK);
      } else {
        display.drawBitmap(44, 26, i30s, 19, 12, WHITE);
      } break;

    case 30:
      display.drawBitmap(44, 6, i5s, 19, 12, BLACK);
      display.drawBitmap(44, 6, i10s, 36, 15, BLACK);
      display.drawBitmap(52, 13, i15s, 28, 8, BLACK);
      display.drawBitmap(52, 23, i20s, 28, 8, BLACK);
      display.drawBitmap(44, 23, i25s, 36, 15, BLACK);
      display.drawBitmap(44, 26, i30s, 19, 12, BLACK);
      if (tock == 1) {
        display.drawBitmap(23, 26, i35s, 19, 12, BLACK);
      } else {
        display.drawBitmap(23, 26, i35s, 19, 12, WHITE);
      } break;

    case 35:
      display.drawBitmap(44, 6, i5s, 19, 12, BLACK);
      display.drawBitmap(44, 6, i10s, 36, 15, BLACK);
      display.drawBitmap(52, 13, i15s, 28, 8, BLACK);
      display.drawBitmap(52, 23, i20s, 28, 8, BLACK);
      display.drawBitmap(44, 23, i25s, 36, 15, BLACK);
      display.drawBitmap(44, 26, i30s, 19, 12, BLACK);
      display.drawBitmap(23, 26, i35s, 19, 12, BLACK);
      if (tock == 0) {
        display.drawBitmap(6, 23, i40s, 36, 15, BLACK);
      } else {
        display.drawBitmap(6, 23, i40s, 36, 15, WHITE);
      } break;

    case 40:
      display.drawBitmap(44, 6, i5s, 19, 12, BLACK);
      display.drawBitmap(44, 6, i10s, 36, 15, BLACK);
      display.drawBitmap(52, 13, i15s, 28, 8, BLACK);
      display.drawBitmap(52, 23, i20s, 28, 8, BLACK);
      display.drawBitmap(44, 23, i25s, 36, 15, BLACK);
      display.drawBitmap(44, 26, i30s, 19, 12, BLACK);
      display.drawBitmap(23, 26, i35s, 19, 12, BLACK);
      display.drawBitmap(6, 23, i40s, 36, 15, BLACK);
      if (tock == 1) {
        display.drawBitmap(6, 23, i45s, 28, 8, BLACK);
      } else {
        display.drawBitmap(6, 23, i45s, 28, 8, WHITE);
      } break;

    case 45:
      display.drawBitmap(44, 6, i5s, 19, 12, BLACK);
      display.drawBitmap(44, 6, i10s, 36, 15, BLACK);
      display.drawBitmap(52, 13, i15s, 28, 8, BLACK);
      display.drawBitmap(52, 23, i20s, 28, 8, BLACK);
      display.drawBitmap(44, 23, i25s, 36, 15, BLACK);
      display.drawBitmap(44, 26, i30s, 19, 12, BLACK);
      display.drawBitmap(23, 26, i35s, 19, 12, BLACK);
      display.drawBitmap(6, 23, i40s, 36, 15, BLACK);
      display.drawBitmap(6, 23, i45s, 28, 8, BLACK);
      if (tock == 0) {
        display.drawBitmap(6, 13, i50s, 28, 8, BLACK);
      } else {
        display.drawBitmap(6, 13, i50s, 28, 8, WHITE);
      } break;

    case 50:
      display.drawBitmap(44, 6, i5s, 19, 12, BLACK);
      display.drawBitmap(44, 6, i10s, 36, 15, BLACK);
      display.drawBitmap(52, 13, i15s, 28, 8, BLACK);
      display.drawBitmap(52, 23, i20s, 28, 8, BLACK);
      display.drawBitmap(44, 23, i25s, 36, 15, BLACK);
      display.drawBitmap(44, 26, i30s, 19, 12, BLACK);
      display.drawBitmap(23, 26, i35s, 19, 12, BLACK);
      display.drawBitmap(6, 23, i40s, 36, 15, BLACK);
      display.drawBitmap(6, 23, i45s, 28, 8, BLACK);
      display.drawBitmap(6, 13, i50s, 28, 8, BLACK);
      if (tock == 1) {
        display.drawBitmap(6, 6, i55s, 36, 15, BLACK);
      } else {
        display.drawBitmap(6, 6, i55s, 36, 15, WHITE);
      } break;

    case 55:
      display.drawBitmap(44, 6, i5s, 19, 12, BLACK);
      display.drawBitmap(44, 6, i10s, 36, 15, BLACK);
      display.drawBitmap(52, 13, i15s, 28, 8, BLACK);
      display.drawBitmap(52, 23, i20s, 28, 8, BLACK);
      display.drawBitmap(44, 23, i25s, 36, 15, BLACK);
      display.drawBitmap(44, 26, i30s, 19, 12, BLACK);
      display.drawBitmap(23, 26, i35s, 19, 12, BLACK);
      display.drawBitmap(6, 23, i40s, 36, 15, BLACK);
      display.drawBitmap(6, 23, i45s, 28, 8, BLACK);
      display.drawBitmap(6, 13, i50s, 28, 8, BLACK);
      display.drawBitmap(6, 6, i55s, 36, 15, BLACK);
      if (tock == 0) {
        display.drawBitmap(23, 6, i60s, 19, 12, BLACK);
      } else {
        display.drawBitmap(23, 6, i60s, 19, 12, WHITE);
      } break;
  }
}
