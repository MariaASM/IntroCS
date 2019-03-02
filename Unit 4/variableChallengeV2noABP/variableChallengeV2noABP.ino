int t = 0 ;

void setup()
{
  pinMode(12, OUTPUT);
  pinMode(11, OUTPUT);
}

void loop()
{
  t = 500 ;
  digitalWrite(12, HIGH);
  digitalWrite(12, HIGH);
  delay( t );
  digitalWrite(12, LOW);
  digitalWrite(11, LOW);
  delay( t );
}


