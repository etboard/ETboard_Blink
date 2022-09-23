/******************************************************************************************
 * FileName     : etboard_blink_test
 * Description  : LED D2 ~ D4 순차적의 켜고 끄기
 * Author       : SCS
 * Created Date : 2022.07.24
 * Reference    : 
 * Modified     : 2022.09.23 : Initialize LED_BUILTIN
 * Modified     : 
******************************************************************************************/

void setup() {  
  pinMode(LED_BUILTIN, OUTPUT);
  digitalWrite(LED_BUILTIN, LOW);
  
  pinMode(D2, OUTPUT);
  pinMode(D3, OUTPUT);
  pinMode(D4, OUTPUT);
  pinMode(D5, OUTPUT);
}

void loop() {
  blink();
  delay(500);  
}

void blink() {
  digitalWrite(D2, HIGH); delay(100); digitalWrite(D2, LOW); delay(50);
  digitalWrite(D4, HIGH); delay(100); digitalWrite(D4, LOW); delay(50);
  digitalWrite(D5, HIGH); delay(100); digitalWrite(D5, LOW); delay(50);
  digitalWrite(D3, HIGH); delay(100); digitalWrite(D3, LOW); delay(50);
}

//==========================================================================================
//                                                    
// (주)한국공학기술연구원 http://et.ketri.re.kr       
//                                                    
//==========================================================================================
