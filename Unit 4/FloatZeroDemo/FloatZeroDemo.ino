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
float foo = 1.0;          //this is the starting number. No need to change this.
float bar = 0.2;          //define increments to be deducted
int precision = 10;      //define decimal precision to be displayed

void setup() {
Serial.begin (9600);
}

void loop() {

  //deduct 0.1 from the variable foo every time it runs. 
  foo = foo - bar ;
  // send the result of the calculation to the computer.
  Serial.println (foo,precision);
  delay (500);            //wait
  
  // Now this is the fun part: if foo equals 0 it should say "It is Zero!" on the screen.
  if (foo == 0)
  {
    Serial.println ("It is Zero!!");
    while (1); // this is and endless loop to trap the program after it reaches zero.
  }
//endless loop to stop counting if foo is less than -1. This is just to displaying values.
  while (foo < -1);  
 

}
