/* Code written by Rishi Mahajan */
#define trigPin 13
#define echoPin 12
void setup() {
Serial.begin(9600);
pinMode(trigPin,OUTPUT);
pinMode(echoPin,INPUT);
}
void loop() {
long duration;
long distance;
digitalWrite(trigPin,LOW); 
delayMicroseconds(2); 
digitalWrite(trigPin,HIGH);
delayMicroseconds(10); 
digitalWrite(trigPin,LOW);
duration=pulseIn(echoPin,HIGH);
distance=(duration/2)/29.412;
if (distance<=150 && distance>=120){ 
tone(9,400,100);
delay(2000);
}
else if (distance<120 && distance>=80){ 
tone(9,400,100);
delay(1400);
}
else if (distance<80 && distance>=50){ 
tone(9,400,100);
delay(900);
}
else if (distance<50 && distance>= 25){ 
tone(9,400,100);
delay(100);
}
else if (distance<25){ 
tone(9,400,100);
}
else {
noTone(9);
}
delay(50);
}
