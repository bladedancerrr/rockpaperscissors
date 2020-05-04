
/** Defining input and output pins. */

void setup() {
    pinMode(button, INPUT);
    pinMode(sensor1, INPUT);
    pinMode(sensor2, INPUT);
    pinMode(servo1, OUTPUT);
    pinMode(servo2, OUTPUT);
    pinMode(speaker, OUTPUT);

    /** Initializes the pseudo-random number generator,
    causing it to start at an arbitrary point in its random sequence. */
    randomSeed(analogRead(0));

    /** Sets the data rate in bits per second (baud) for serial data transmission. */
    Serial.begin(9600);
}
