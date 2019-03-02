int input= 0 ;
int output = 0;

void setup()
{
	pinMode( A0 , INPUT);
	pinMode( 11 , OUTPUT);
}

void loop()
{
	input = 	analogRead(A0) ;
	output = map (input, 0, 1023, 0, 255);
        analogWrite (11, output);
}

