
int unit = 800; //unit for pause
String code= "hi"; //<<<<<<<**Message input here**

// the setup function runs once when you press reset or power the board
void setup() {
  // initialize digital pin LED_BUILTIN as an output.
  pinMode(LED_BUILTIN, OUTPUT);
}

// the loop function runs over and over again forever
void loop() {
  for(int i = 0; i < code.length(); i ++){
      charReader(code[i]);
   }
}
//*dot
void dot(){
   digitalWrite(LED_BUILTIN, HIGH);   // turn the LED on (HIGH is the voltage level)
  delay(200);                       // wait for a .2second
  digitalWrite(LED_BUILTIN, LOW);    // turn the LED off by making the voltage LOW
  delay(unit);                       // wait for a .8second
}
//*dash
void dash(){
   digitalWrite(LED_BUILTIN, HIGH);   // turn the LED on (HIGH is the voltage level)
  delay(600);                       // wait for a .6second
  digitalWrite(LED_BUILTIN, LOW);    // turn the LED off by making the voltage LOW
  delay(unit);                       // wait for a .8second
}
//space*
void space(){
   digitalWrite(LED_BUILTIN, HIGH);   // turn the LED on (HIGH is the voltage level)
  delay(0);                       // don't blink
  digitalWrite(LED_BUILTIN, LOW);    // turn the LED off by making the voltage LOW
  delay(unit);                       // wait for a .8second
}
// a function to read message and determine letters a-z ( and spaces )
void charReader(char letter){
  if(letter == 'a'){
    //code for 'a' #blinks here
    dot();
    space();
    dash();
    space();
    space();
    space();
  }
  else if (letter == 'b'){
    dash();
    space();
    dot();
    space();
    dot();
    space();
    dot();
    space();
    space();
    space();
  }
  else if (letter == 'c'){
    dash();
    space();
    dot();
    space();
    dash();
    space();
    dot();
    space();
    space();
    space();
  }
   else if (letter == 'd'){
    dash();
    space();
    dot();
    space();
    dot();
    space();
    space();
    space();
  }
  else if (letter == 'e'){
    dot();
    space();
    space();
    space();
  }
  else if (letter == 'f'){
    dot();
    space();
    dot();
    space();
    dash();
    space();
    dot();
    space();
    space();
    space();
  }
  else if (letter == 'g'){
    dash();
    space();
    dash();
    space();
    dot();
    space();
    space();
    space();
  }
  else if (letter == 'h'){
    dot();
    space();
    dot();
    space();
    dot();
    space();
    dot();
    space();
    space();
    space();
  }
  else if (letter == 'i'){
    dot();
    space();
    dot();
    space();
    space();
    space();
  }
  else if (letter == 'j'){
    dot();
    space();
    dash();
    space();
    dash();
    space();
    dash();
    space();
    space();
    space();
  }
  else if (letter == 'k'){
    dash();
    space();
    dot();
    space();
    dash();
    space();
    space();
    space();
  }
  else if (letter == 'l'){
    dot();
    space();
    dash();
    space();
    dot();
    space();
    dot();
    space();
    space();
    space();
  }
  else if (letter == 'm'){
    dash();
    space();
    dash();
    space();
    space();
    space();
  }
  else if (letter == 'n'){
    dash();
    space();
    dot();
    space();
    space();
    space();
  }
  else if (letter == 'o'){
    dash();
    space();
    dash();
    space();
    dash();
    space();
    space();
    space();
  }
  else if (letter == 'p'){
    dot();
    space();
    dash();
    space();
    dash();
    space();
    dot();
    space();
    space();
    space();
  }
    else if (letter == 'q'){
    dash();
    space();
    dash();
    space();
    dot();
    space();
    dash();
    space();
    space();
    space();
  }
    else if (letter == 'r'){
    dot();
    space();
    dash();
    space();
    dot();
    space();
    space();
    space();
  }
    else if (letter == 's'){
    dot();
    space();
    dot();
    space();
    dot();
    space();
    space();
    space();
  }
    else if (letter == 't'){
    dash();
    space();
  }
    else if (letter == 'u'){
    dot();
    space();
    dot();
    space();
    dash();
    space();
    space();
    space();
  }
    else if (letter == 'v'){
    dot();
    space();
    dot();
    space();
    dot();
    space();
    dash();
    space();
    space();
    space();
  }
    else if (letter == 'w'){
    dot();
    space();
    dash();
    space();
    dash();
    space();
    space();
    space();
  }
    else if (letter == 'x'){
    dash();
    space();
    dash();
    space();
    dot();
    space();
    dot();
    space();
    dash();
    space();
    space();
    space();
  }
    else if (letter == 'y'){
    dash();
    dot();
    dash();
    dash();
    space();
    space();
    space();
  }
    else if (letter == 'z'){
    dash();
    dash();
    dot();
    dot();
    space();
    space();
    space();
  }
  else if (letter == ' '){
    space();
    space();
    space();
    space();
    space();
    space();
    space();
    space();
  }
}



