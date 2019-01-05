const int buttonPin = 8;      //  8 번핀 입력 테스트

void setup() {
  Serial.begin(115200);              //  시리얼 통신의 시작, 보레이트 입력
  pinMode(buttonPin, INPUT_PULLUP);   //  내부풀업저항 입력값 으로 셋팅.

}

void loop() {

  int buttonValue = digitalRead(8); //  8번 핀에서 읽음.
  if(buttonValue == HIGH)           //  스위치가 안눌릴때
  {
      Serial.println("Switch ON");
  }
  else                              //  스위치가 눌릴때
  {
      Serial.println("Switch OFF");
  }
  
}