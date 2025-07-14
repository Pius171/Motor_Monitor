#include <UTFTGLUE.h>                    //use GLUE class and constructor
//UTFTGLUE myGLCD(0, A5, A4, A3, A2, A1);  //all dummy args
UTFTGLUE myGLCD(0, 4, 16, 17, 18, 19);  //all dummy args
// screen size 480 by 320
unsigned long now = millis();
unsigned long previous = millis();
unsigned long interval = 1000;

void setup() {
  // put your setup code here, to run once:
  // Setup the LCD


  myGLCD.InitLCD();  // Initialize the display
  myGLCD.clrScr();   // Clear screen
  myGLCD.setFont(BigFont);
  //myGLCD.setTextSize(2);           // (Optional) Set text size
  myGLCD.setColor(255, 255, 255);  // White text
  myGLCD.setBackColor(0, 0, 0);    // Black background
}

void loop() {
  // put your main code here, to run repeatedly:
  char buffer[100];
  
  long vibration = random(1000);
  long noise = random(100);
  long temp = random(100);


  myGLCD.setColor(0, 0, 0);        // Draw over previous text in black
  myGLCD.fillRect(0, 0, 319, 20);  // Clear previous text area

  myGLCD.setColor(0, 255, 0);  // Set text color back to white
  myGLCD.print("* CONNECTED *", CENTER, 1);
   myGLCD.setColor(255,255,255);
  sprintf(buffer, "vibration: %lumg", vibration);
  myGLCD.print(buffer, 0, 50, 0); 
  sprintf(buffer, "Noise: %ludB", noise); 
  myGLCD.print(buffer, 0, 100, 0);
  sprintf(buffer, "Temperature: %luC", temp); 
  myGLCD.print(buffer, 0, 150, 0);
}
