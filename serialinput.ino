#define led 13
int bytereceived;
void setup() {
  // put your setup code here, to run once:
  Serial.begin(9600);
  Serial.println("start serial monitor");
  pinMode(led,OUTPUT);
}

void loop() {
  // put your main code here, to run repeatedly:
  if(Serial.available()>0){
    bytereceived=Serial.read();
  }
  if(bytereceived=='1'){
    digitalWrite(led,HIGH);
    Serial.print("LED ON");
  }
  if(bytereceived =='0'){
    digitalWrite(led,LOW);
    Serial.print("LED OFF");

  }
}
