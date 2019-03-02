/*
Demo to illustrate the inedequacy of floats.
"bar" gets deducted every loop and it should stop if foo reaches 0.
Floating point operations are not precise enough, they will only apporximate zero.

July 2015
Valentin Vollmer
Ten80 Education inc.
vvollmer@ten80education.com


*/


//declare and initialize variables
unsigned int foo = 65530;          //this is the starting number. No need to change this.
int bar = 1;          //define increments to be deducted


void setup() {
Serial.begin (9600);
}

void loop() {
  Serial.print (foo);
  Serial.print (" + ");
  Serial.print (bar);
  Serial.print (" = ");
  foo = foo + bar ;
  // send the result of the calculation to the computer.
  Serial.println (foo);
  delay (500);            //wait

//endless loop to stop counting if foo is less than -1. This is just to displaying values.
  while (foo == 3);  
 

}
