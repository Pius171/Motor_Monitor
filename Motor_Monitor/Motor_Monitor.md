/*  
 Test the tft.print() viz. the libraries embedded write() function

 This sketch used font 2, 4, 7
 
 Make sure all the required fonts are loaded by editing the
 User_Setup.h file in the TFT_eSPI library folder.

  #########################################################################
  ###### DON'T FORGET TO UPDATE THE User_Setup.h FILE IN THE LIBRARY ######
  #########################################################################
 */

#include <SPI.h>

#include <TFT_eSPI.h>  // Hardware-specific library

TFT_eSPI tft = TFT_eSPI();  // Invoke custom library

void setup(void) {
  tft.init();
  tft.setRotation(1);

  //   tft.fillScreen(TFT_BLACK);

  // tft.setCursor(100, 100, 5);
  // tft.setTextColor(TFT_GREEN);
  // tft.setTextSize(2);
  // tft.println("Tobi!");
}

void loop() {
 
  tft.fillScreen(TFT_BLACK);

  tft.setCursor(150, 0, 2);
  tft.setTextColor(TFT_GREEN);
  tft.setTextSize(2);
  tft.println("CONNECTED");

  tft.setCursor(0, 50, 2);
  tft.setTextColor(TFT_WHITE);
   tft.setTextSize(2);
  // We can now plot text on screen using the "print" class
  tft.print("Vibration: ");
  tft.print(random(100));
  tft.println("mG");

  tft.print("Microphone: ");
  tft.print(random(100));
  tft.println("dB");

  tft.print("Ambient Temperature: ");
  tft.print(random(100));
  tft.println("°C");

  tft.print("Motor Temperature: ");
  tft.print(random(100));
  tft.println("°C");



  delay(1000);
}