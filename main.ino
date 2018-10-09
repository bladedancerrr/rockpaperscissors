void loop() {

  while(digitalRead(button)==HIGH) {

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
