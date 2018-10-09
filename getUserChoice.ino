//reads user's input from bend sensors


char getUserChoice(){

char userChoice;

int sensor1 = digitalRead(sensor1);

int sensor2 = digitalRead(sensor2);

if(sensor1 == LOW && sensor2 == LOW){

userChoice='p';

}

else if (sensor1 == LOW && sensor2 == HIGH){

userChoice='s';

}

else if(sensor1 == HIGH && sensor2 == HIGH){

userChoice='r';

}

return userChoice;

}
