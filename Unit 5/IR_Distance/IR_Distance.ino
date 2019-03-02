int i; val;

void setup() {
    pinMode(A0,INPUT);
    Serial.begin(9600);
}
void loop() {
    i=analogRead(A0);
    val=((707-i)/9);
    Serial.println(val);
    delay(100);}
