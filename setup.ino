
//defining input and output pins 

void setup() {

pinMode(button, INPUT);

pinMode(sensor1, INPUT);

pinMode(sensor2, INPUT);

pinMode(servo1, OUTPUT);

pinMode(servo2, OUTPUT);

pinMode(speaker, OUTPUT);


randomSeed(analogRead(0)); //initializes the pseudo-random number generator,
//causing it to start at an arbitrary point in its random sequence.

Serial.begin(9600);

//Sets the data rate in bits per second (baud) for serial data transmission. 

}