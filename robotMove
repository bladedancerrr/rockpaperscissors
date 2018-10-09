//moves the servios attached to the straws via strings to create a movement of the robotic hand

void robotMove(char robotChoice){

if (robotChoice == 'r'){

digitalWrite(servo1, HIGH);

delay(10);

digitalWrite(servo2, HIGH);

delay(10);

digitalWrite(servo1, LOW);

delay(10);

digitalWrite(servo2, LOW);

}

else if (robotChoice == 'p'){

//using analogWrite instead of digitalWrite to control the servo turn halfway instead of the full way

analogWrite(servo1, 50);

delay(10);

analogWrite(servo2, 50);

delay(500);

analogWrite(servo1, 0);

delay(10);

analogWrite(servo2, 0);

}

else if (robotChoice =='s'){

digitalWrite(servo2, HIGH);

delay(10);

digitalWrite(servo2, LOW);

}

}

