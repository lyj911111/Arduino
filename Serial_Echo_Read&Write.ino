void setup() {
  Serial.begin(115200);   //  시리얼 통신의 시작, 보레이트 입력
}

void loop() {

  if (Serial.available())
  {
      Serial.write(Serial.read());  // 터미널로 작성한글 에코하는 프로그램. Read해서 다시 Write하기
  }
  
}