//***** The Section that makes all the buttons and shit work*****//

void interrupt() {
  button1.update();
  button2.update();
  encoder.tick();
  button1.read();
  button2.read();
}

void encoderMove() {
  signed char pos = encoder.getPosition();
  if (pos != 0) {
    if (pos > 0) {
      encPos = encPos + pos;
    } else {
      encPos = pos - encPos;
    }
    position += pos;
    encoder.reset();
    Serial.println(position);
  }
}

void onButton1Pressed(){
  Serial.println("Push 1");
}

void longPress1(){
  Serial.println("Long Push 1");
  is12hr =! is12hr;
}

void onButton2Pressed(){
  Serial.println("Push 2");
}

void longPress2(){

}
