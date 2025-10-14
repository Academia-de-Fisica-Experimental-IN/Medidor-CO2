#include <Wire.h>
#include <LiquidCrystal_I2C.h>
#include <MHZ19.h>              // <-- CAMBIO: Se incluye la nueva librería
#include <SoftwareSerial.h>      // <-- CAMBIO: Necesario para la comunicación con el sensor

// Define la dirección I2C para el LCD
const int lcd_I2C_address = 0x27;

// Define los pines para el sensor MH-Z19
#define MH_Z19_RX A0
#define MH_Z19_TX A1

// Crea los objetos
LiquidCrystal_I2C lcd(lcd_I2C_address, 16, 2);
MHZ19 my_co2;                     // <-- CAMBIO: Se crea el objeto del sensor
SoftwareSerial co2Serial(MH_Z19_RX, MH_Z19_TX); // <-- CAMBIO: Se crea un puerto serial por software

void setup() {
  Serial.begin(9600);
  co2Serial.begin(9600);        // <-- CAMBIO: Se inicia la comunicación con el sensor
  my_co2.begin(co2Serial);        // <-- CAMBIO: Se inicializa el sensor

  my_co2.autoCalibration(false);  // Se recomienda desactivar la autocalibración para lecturas más estables

  Serial.println("MHZ 19B con LCD I2C");

  // Inicializa el LCD
  lcd.init();
  lcd.backlight();
  lcd.clear();
}

void loop() {
  int ppm = my_co2.getCO2(); // <-- CAMBIO: Se usa la función correcta para leer los PPM

  // Imprime en el monitor serial para depuración
  Serial.print("CO2 PPM: ");
  Serial.println(ppm);

  // Muestra en la pantalla LCD
  lcd.clear();
  lcd.setCursor(0, 0); // Fila 0, columna 0
  lcd.print("CO2 (PPM):");
  lcd.setCursor(0, 1); // Fila 1, columna 0
  lcd.print(ppm);

  delay(2000); // Espera 2 segundos antes de la siguiente lectura
}
