void setup() 
{
  // put your setup code here, to run once:
  pinMode(I0_2, INPUT);
  Serial.begin(9600);

}

void loop() 
{
  // put your main code here, to run repeatedly:
   int sensorValue = digitalRead(I0_2); 
   Serial.println(sensorValue);
   delay(1);
}
