
//this function generates a random number from 1 - 1000. Depending on this generated random number, the computer has a 1/3 
of being assigned paper, scissor or rock. 

char getRobotChoice(){

char robotChoice;

int randNumber = random(1000);

Serial.println(randNumber);

if (randNumber < 333) {

robotChoice = 'r';

}

else if(randNumber >= 333 && randNumber <= 666) {

robotChoice = 'p';

}

else {

robotChoice = 's';

}

return robotChoice;

}
