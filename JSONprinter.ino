void setup() {
  // put your setup code here, to run once:
  Serial.begin(9600);
}

void loop() {
  // put your main code here, to run repeatedly:
  for (int x = 0; x < 100; x++){
    Serial.print("{\n");
    //Serial.print("{{{}}}{}");
    Serial.print("\t\"x\":\"");
    Serial.print(x);
    Serial.print("\"");
    //Serial.print("\" {\"y\":\"0\"} \n");
    Serial.print("}\n");
    delay(1000);
  }
  delay(1000);
}
