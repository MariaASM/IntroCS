int t = 0 ;

void setup()
{
  Serial.begin(9600);
  pinMode(12, OUTPUT);
  pinMode(11, OUTPUT);
}

void loop()
{
  t = t + 100;
  Serial.print ("The time delay is ");
  Serial.println(t);
  digitalWrite(12, HIGH);
  digitalWrite(11, HIGH);
  delay( t );
  digitalWrite(12, LOW);
  digitalWrite(11, LOW);
  delay( t );
  if (t == 1000);
  {
  t=0;
}
}


