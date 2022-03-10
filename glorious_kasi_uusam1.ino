// C++ code
//
void setup()
{
  pinMode(1,OUTPUT);
  pinMode(2, OUTPUT);
}

void loop()
{
  digitalWrite(1,HIGH);
  delay(1000); //Wait for 1000 millisecond(s)
  digitalWrite(1,LOW);
  delay(1000); // Wait for 1000 millisecond(s)
 
  digitalWrite(2, HIGH);
  delay(800); // Wait for 800 millisecond(s)
  digitalWrite(2, LOW);
  delay(800); // Wait for 800 millisecond(s)
}