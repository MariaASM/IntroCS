int time = 0 ;
int LED1 =12, LED2 =11;

void setup()
{
	pinMode( LED1 , OUTPUT);
	pinMode( LED2 , OUTPUT);
}

void loop()
{
	time = time + 100 ;
	digitalWrite( LED1 , HIGH );
	digitalWrite( LED2 , HIGH );
	delay( time );
	digitalWrite( LED1 , LOW );
	digitalWrite( LED2 , LOW );
	delay( time );
}


