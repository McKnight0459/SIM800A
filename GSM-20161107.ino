/*
  arduino发短信
  MCUT--arduino（TX)
  MCUR-arduino（RX）
  短接帽：TTLR-GSMR
           TTLT-GSMT
  波特率：115200
*/
const int delayGSM = 2000;
void gsmCN() {
  Serial.println("AT");
  delay(delayGSM);
  Serial.println("AT+CMGF=1");
  delay(delayGSM);
  Serial.println("AT+CSMP=17,167,2,25");
  delay(delayGSM);
  Serial.println("AT+CSCS=\"UCS2\"");
  delay(delayGSM);
  Serial.println("AT+CMGS=\"00310035003200340035003900380031003500380036\"");
  delay(delayGSM);
  Serial.println("8FD967614FE1606F53D151FA4E8E00410072006400750069006E006F002E");
  delay(delayGSM);
  Serial.println((char)26);
  delay(delayGSM);
}
void gsmEN() {
  Serial.println("AT");
  delay(delayGSM);
  Serial.println("AT+CSCS=\"GSM\"");
  delay(delayGSM);
  Serial.println("AT+CMGF=1");
  delay(delayGSM);
  Serial.println("AT+CMGS=\"15245981586\"");
  delay(delayGSM);
  Serial.print("Hello! That's Arduino UNO R3.");
  delay(delayGSM);
  Serial.println((char)26);
  delay(delayGSM);
}
void setup() {
  Serial.begin(115200);
}
void loop() {
  gsmCN();
  gsmEN();
}

