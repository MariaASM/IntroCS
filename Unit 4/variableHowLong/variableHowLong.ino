int num = 0 ;
int howlong = 100;

void setup()
{
	pinMode( 12 , OUTPUT);
	pinMode( 11 , OUTPUT);
}

void loop()
{
	if ( num <= 4){
	num=num+1;
  howlong= howlong*num;
  Serial.print(howlong);
 	digitalWrite( 12 , HIGH );
	digitalWrite( 11 , HIGH );
	delay( howlong );
	digitalWrite( 12 , LOW );
	digitalWrite( 11 , LOW );
	delay(howlong);
	}     

}


