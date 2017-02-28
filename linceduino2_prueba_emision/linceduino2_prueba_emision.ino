#include <SPI.h>
#include <math.h>
#include <SD.h>
#include <Wire.h>  // Comes with Arduino IDE
#include <LiquidCrystal_I2C.h>
LiquidCrystal_I2C lcd(0x3F, 2, 1, 0, 4, 5, 6, 7, 3, POSITIVE);  // Set the LCD I2C address de 20x4
unsigned long tiempo;
void setup() {
lcd.begin(20, 4); //iniciamos la pantalla lcd
lcd.setBacklight(1);
//lcd.backlight ();//da luz al fondo de pantalla de lcd
lcd.clear();
Serial2.begin (57600);//comunicacion por puerto serie2 de radiofrecuencia
//Serial.begin (9600);

}


void loop() {
//Bucle principal. Representa y reinicia variables
tiempo=int (millis()/1000);
Serial2.println (tiempo);
lcd.setCursor(0,0);
lcd.print("tiempo=");
lcd.setCursor(8,0);
lcd.print(tiempo);
delay(1000);
}
