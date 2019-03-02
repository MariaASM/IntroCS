/* Fade an LED on PIN 9 based on the light input of a photocell sensor on PIN A0. 
*/

int led = 9;           // the pin that the LED is connected to
int sensorPin = A0;    // Pin the light sensor is attached to
int brightness;
int sensorRead;        // input from light sensor

void setup() {
  pinMode(led, OUTPUT);
}

void loop() {
  analogWrite(led, brightness); //set LED to level defined in brightness
  sensorRead = analogRead (sensorPin);
  brightness = map (sensorRead,0,1023,255,0);  //translate input to value range for LED.
  Serial.println(brightness);
  // wait for 30 milliseconds to see the dimming effect
  delay(30);
}

