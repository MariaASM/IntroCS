void setup()
{

	pinMode( 12 , OUTPUT);
}

void loop()
{
  if (digitalRead (12) == HIGH)
  {
	digitalWrite( 12 , LOW );
  }
  else
  {
    digitalWrite (12, HIGH);
  }
  delay (500);
}


