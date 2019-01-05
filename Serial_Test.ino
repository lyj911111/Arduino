void setup() {
  Serial.begin(115200);   //  시리얼 통신의 시작, 보레이트 입력
}

void loop() {
  // put your main code here, to run repeatedly:
  Serial.print(78);
  Serial.print("\n");
  Serial.print("Hello World"); //  출력 테스트
  Serial.print("\n");

  Serial.println(78);
  Serial.println("Hello World"); // 자동줄 변경 프린트

  Serial.write(78);     //  write함수, 아스키코드 78을 출력함.(1byte짜리)
  Serial.write("nice"); // 문자열출력
  Serial.println("");   // 줄넘김

  delay(500);
  
}
