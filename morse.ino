int min = 300;
int max = 600;
int pauseTime = 1000;

void setup() {
  // initialize digital pin LED_BUILTIN as an output.
  pinMode(LED_BUILTIN, OUTPUT);
}

void loop() {
  morse("hussein");
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
      code("-..."); break;
      case 'c':
      code("-.-."); break;
      case 'd':
      code("-.."); break;
      case 'e':
      code("."); break;
      case 'f':
      code("..-."); break;
      case 'g':
      code("--."); break;
      case 'h':
      code("...."); break;
      case 'i':
      code(".."); break;
      case 'j':
      code(".---"); break;
      case 'k':
      code("-.-"); break;
      case 'l':
      code(".-.."); break;
      case 'm':
      code("--"); break;
      case 'n':
      code("-."); break;
      case 'o':
      code("---"); break;
      case 'p':
      code(".--."); break;
      case 'q':
      code("--.-"); break;
      case 'r':
      code(".-."); break;
      case 's':
      code("..."); break;
      case 't':
      code("-"); break;
      case 'u':
      code("..-"); break;
      case 'v':
      code("...-"); break;
      case 'w':
      code(".--"); break;
      case 'x':
      code("-..-"); break;
      case 'y':
      code("-.--"); break;
      case 'z':
      code("--.."); break;
      case '1':
      code(".----"); break;
      case '2':
      code("..---"); break;
      case '3':
      code("...--"); break;
      case '4':
      code("....-"); break;
      case '5':
      code("....."); break;
      case '6':
      code("-...."); break;
      case '7':
      code("--..."); break;
      case '8':
      code("---.."); break;
      case '9':
      code("----."); break;
      case '0':
      code("-----"); break;
      case '.':
      code(".-.-.-"); break;
      case ',':
      code("--..--"); break;
      case '?':
      code("..--.."); break;
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
