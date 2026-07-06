void setup() {
Serial.begin(9600);
}

void loop() {

float volt = 5.0*analogRead(A0) / 1023.0 ;

Serial.println(volt) ;
     
delay(1000);
}
