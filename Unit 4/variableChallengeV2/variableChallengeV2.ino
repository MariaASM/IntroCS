int _ABVAR_1_t = 0 ;
void __ardublockDigitalWrite(int pinNumber, boolean status)
{
  pinMode(pinNumber, OUTPUT);
  digitalWrite(pinNumber, status);
}


void setup()
{
}

void loop()
{
  _ABVAR_1_t = 500 ;
  __ardublockDigitalWrite(12, HIGH);
  __ardublockDigitalWrite(12, HIGH);
  delay( _ABVAR_1_t );
  __ardublockDigitalWrite(12, LOW);
  __ardublockDigitalWrite(11, LOW);
  delay( _ABVAR_1_t );
}


