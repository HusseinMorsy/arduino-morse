int min = 300;
int max = 600;
int pauseTime = 1000;

void setup() {
  // initialize digital pin LED_BUILTIN as an output.
  pinMode(LED_BUILTIN, OUTPUT);
}

void loop() {
  morse("esma");
  delay(3000);
}
void morse(String str)
{
  for(int i=0;i<str.length();i++)
  {
    switch (str[i]){
      case 'a':
      code(".-"); break;
      case 'b':
      code(".-"); break;
      case 'c':
      code("-.-."); break;
      case 'd':
      code("-.."); break;
      case 'e':
      code("."); break;
      case 'm':
      code("--"); break;
      case 'o':
      code("---"); break;
      case 's':
      code("..."); break;
      case 'k':
      code("-.-"); break;
      case 't':
      code("-"); break;
      case 'y':
      code("-.--"); break;
      case ' ':
      pause(); break;
    }
  }
}

void blink(int time, int num) {
  for(int i=0;i<num;i++) {
    digitalWrite(LED_BUILTIN, HIGH); 
    delay(time);
    digitalWrite(LED_BUILTIN, LOW);
    delay(time);
  }
}

void pause() {
  delay(pauseTime);
}


void code(String str) {
  for(int i=0;i< str.length();i++) {
    if(str[i]=='.') blink(min,1);
    else blink(max,1);
  }
  pause();
}
