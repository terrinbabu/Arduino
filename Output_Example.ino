

void setup() 
{   // put your setup code here, to run once
pinMode(Q0_0, OUTPUT); // initialize the pin as an OUTPUT
pinMode(Q0_1, OUTPUT);
}

void loop() 
{
  digitalWrite(Q0_0, HIGH);   // turn the LED on (HIGH is the voltage level)
  delay(500);                // wait for a second
  digitalWrite(Q0_0, LOW);    // turn the LED off by making the voltage LOW
  delay(500);
  digitalWrite(Q0_1, HIGH);   // turn the LED on (HIGH is the voltage level)
  delay(500);                // wait for a second
  digitalWrite(Q0_1, LOW);    // turn the LED off by making the voltage LOW
  delay(500);
}
