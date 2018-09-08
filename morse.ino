/*
  Blink

  Turns an LED on for one second, then off for one second, repeatedly.

  Most Arduinos have an on-board LED you can control. On the UNO, MEGA and ZERO
  it is attached to digital pin 13, on MKR1000 on pin 6. LED_BUILTIN is set to
  the correct LED pin independent of which board is used.
  If you want to know what pin the on-board LED is connected to on your Arduino
  model, check the Technical Specs of your board at:
  https://www.arduino.cc/en/Main/Products

  modified 8 May 2014
  by Scott Fitzgerald
  modified 2 Sep 2016
  by Arturo Guadalupi
  modified 8 Sep 2016
  by Colby Newman

  This example code is in the public domain.

  http://www.arduino.cc/en/Tutorial/Blink
*/

int min = 300;
int max = 600;
int pauseTime = 1000;
  
// the setup function runs once when you press reset or power the board
void setup() {
  // initialize digital pin LED_BUILTIN as an output.
  pinMode(LED_BUILTIN, OUTPUT);
}

// the loop function runs over and over again forever
void loop() {
  morse("d");
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

void sh(int s) {
  blink(min,s);
}

void lo(int s) {
 blink(max,s);
} 

void pause() {
  delay(pauseTime);
}


void a() {
  code(".-");
}

void b() {
  code("-...");
}
void c() {
  code("-.-.");
}
void d()
{
  code("-..");
}
void e()
{
  code(".");
}
void s(){
  code("...");
}

void code(String str) {
  for(int i=0;i< str.length();i++) {
    if(str[i]=='.') sh(1);
    else lo(1);
  }
  pause();
}

void p() {
  code(".--.");
}
 
