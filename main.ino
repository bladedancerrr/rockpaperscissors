/** Main function */

void loop() {

  while(digitalRead(button)==HIGH) {

  /** Plays music on speaker when button is pressed */
    tone(speaker, 550, 300);
    delay (1000);
    tone(speaker, 550, 300);
    delay (1000);
    tone(speaker, 550, 300);
    delay (1000);
    tone(speaker, 550, 300);
    delay (1000);
    tone(speaker, 550, 300);
    delay (1000);
    tone(speaker, 550, 300);

    /* Getting choice, comparing and playing music accordingly */
    char robotChoice = getRobotChoice();
    Serial.print("Robotic hand's choice is ");
    Serial.println(robotChoice);
    char userChoice = getUserChoice();
    Serial.print("user Choice is ");
    Serial.println(userChoice);
    int result = compareChoice(userChoice, robotChoice);
    Serial.print(result);

    robotMove(robotChoice, result);
  }

}
