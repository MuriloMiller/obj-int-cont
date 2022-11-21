#include <Boards.h>
#include <Firmata.h>
#include <FirmataConstants.h>
#include <FirmataDefines.h>
#include <FirmataMarshaller.h>
#include <FirmataParser.h>

int led = 10;
int ldr = A0;
int valorldr = 0;
int setLedOff = true;

void setup() {
  pinMode(led, OUTPUT);
  pinMode(ldr, INPUT);
  Serial.begin(9600);
}
void loop() {
  valorldr = analogRead(ldr);
  Serial.println(valorldr);

  if ((valorldr) < 500) {
    digitalWrite(led, HIGH);
    Serial.println("Sensor Crepuscular Ativado");
  }
  else {
    digitalWrite(led, LOW);
    Serial.println("Sensor Crepuscular Desativado");
  }
  delay(2000);
}
