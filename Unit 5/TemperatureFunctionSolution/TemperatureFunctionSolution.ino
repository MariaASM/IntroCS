/*
Example to illustrate the use of a function.
LED on pin 13 gets turned on if the temparature is considered hot.
Detour via Celsius is to demo calculcations inside a function.

Valentin Vollmer/Maria McCarthy, Ten80 Education inc.
*/


int temperature = 83;        // change this value to test this sektch.
bool hot;

void setup() {
 pinMode (13, OUTPUT);
}


void loop() {

hot = isItHot (temperature, 29);    //pass the value in "temperature" to the funcion, let it do its thing and store the result in "hot"

if (hot == 1)                    // if hot has been set to 1
    {
      digitalWrite (13, HIGH);        // turn LED on
    }

}

//end of main code!

