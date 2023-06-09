void setup() {
  pinMode (16,OUTPUT); //การตั้งค่าให้ขา GPIO16 หรือ D0 เป็นขาเอาต์พุต
  digitalWrite(16,LOW);
                       //สั้งให้ทำ GpIO16 ส่งสัญญาณออกเป็น LOW (0)
  delay(1000);         //หน่วงเวลา 1 นาที
  digitalWrite(16,HIGH);
                        //สั้งให้ทำ GpIO16 ส่งสัญญาณออกเป็น LOW (0)
  delay(1000);          //หน่วงเวลา 1 นาที
  digitalWrite(16,LOW);
                        //สั้งให้ทำ GpIO16 ส่งสัญญาณออกเป็น LOW (0)
  delay(1000);          //หน่วงเวลา 1 นาที
  digitalWrite(16,HIGH);
                        //สั้งให้ทำ GpIO16 ส่งสัญญาณออกเป็น LOW (0)
  delay(1000);          //หน่วงเวลา 1 นาที
  
}

void loop() {
}
