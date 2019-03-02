
int count = 0;
void setup()
{
	pinMode( 12 , OUTPUT);
}

void loop()
{

  while (count <5 )
  {
	digitalWrite( 12 , HIGH );
	delay( 500 );
	digitalWrite( 12 , LOW );
	delay( 500 );
        count ++;
  }
}


