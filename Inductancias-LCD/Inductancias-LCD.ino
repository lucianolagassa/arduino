// Versión modificada para funcionar con lcd

#include <LiquidCrystal.h>

LiquidCrystal lcd(8, 9, 4, 5, 6, 7);

//13 is the input to the circuit (connects to 150ohm resistor), 11 is the comparator/op-amp output.
//reibot.org for guide
double pulse, frequency, capacitance, inductance;

void setup()
{
 lcd.begin(16, 2);
 Serial.begin(9600);
 pinMode(11, INPUT);
 pinMode(13, OUTPUT);
 lcd.clear();
 lcd.setCursor(0, 0);
 lcd.print("  LAGA Systems");
 Serial.println("  LAGA Systems");
 delay(200);
 Serial.println("Iniciando");
 lcd.setCursor(0, 1);
 lcd.print("Iniciando.");
 delay(200);
 lcd.setCursor(0, 1);
 lcd.print("Iniciando..");
 delay(200);
 lcd.setCursor(0, 1);
 lcd.print("Iniciando...");
 delay(200);
 lcd.setCursor(0, 1);
 lcd.print("Iniciando....");
 delay(200);
 lcd.setCursor(0, 1);
 lcd.print("Iniciando.....");
 delay(200);
 lcd.setCursor(0, 1);
 lcd.print("Iniciando......");
 delay(200);
 lcd.setCursor(0, 1);
 lcd.print("Iniciando.......");
 delay(200);
 lcd.clear();
 lcd.setCursor(0, 0);
 lcd.print("    Conectar");
 lcd.setCursor(0, 1);
 lcd.print("   Inductancia");
 Serial.println("Conectar");
 Serial.println("Inductancia");
 //lcd.setCursor(0, 0);
 //lcd.print("Frec: ");
 //lcd.print(frequency);
 //lcd.print("HZ");
 //lcd.setCursor(0, 1);
 //lcd.print("Impe: ");
 //lcd.print(inductance);
 //lcd.print("uH");
}

void loop()
{
 digitalWrite(13, HIGH);
 delay(5);
 digitalWrite(13,LOW);
 delayMicroseconds(100);
 pulse = pulseIn(11,HIGH,5000);
 if(pulse > 0.1)
 {
  capacitance = 2.E-6;
  frequency = 1.E6/(2*pulse);
  inductance = 1./(capacitance*frequency*frequency*4.*3.14159*3.14159);
  inductance *= 1E6;
  lcd.clear();
  lcd.setCursor(0, 0);
  lcd.print("Frec: ");
  lcd.print(frequency);
  lcd.print("HZ");
  lcd.setCursor(0, 1);
  lcd.print("Impe: ");
  lcd.print(inductance);
  lcd.print("uH");
  Serial.print("Frecuencia HZ");
  Serial.println(frequency);
  Serial.print("Inductancia uH:");
  Serial.println(inductance);
  delay(20);
 }
}
