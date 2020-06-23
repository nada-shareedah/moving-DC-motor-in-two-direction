int cw=11;
int ccw=10;
void setup()
{
  pinMode(cw, OUTPUT);
   pinMode(ccw, OUTPUT);
}

void loop()
{
  digitalWrite(cw, HIGH);
   delay(1000); // Wait for 1000 millisecond(s)
  digitalWrite(cw, LOW);
 
  digitalWrite(ccw, HIGH);
   delay(1000); // Wait for 1000 millisecond(s)
  digitalWrite(ccw, LOW);
}
