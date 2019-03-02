int count = 0;

void setup()
{
	pinMode( 10 , OUTPUT);
	pinMode( 11 , OUTPUT);
	pinMode( 12 , OUTPUT);
}

void loop()
{
  count = count + 1;        //can also be written as count++
  if (count < 5)
  {
	digitalWrite( 10 , HIGH );
	digitalWrite( 12 , LOW );
	delay( 200 );
	digitalWrite( 10 , LOW );
	digitalWrite( 11 , HIGH );
	delay( 200 );
	digitalWrite( 11 , LOW );
	digitalWrite( 12 , HIGH );
	delay( 200 );
  }
}


