#include <CapacitiveSensor.h>

CapacitiveSensor sensor;

void setup() {
  sensor = new CapacitiveSensor(12,11);
  Serial.begin(9600);
}

long timing = 0;

void loop() {
  loadTiming();
  printTiming();
}


// read the sensor
void loadTiming() {
  timing = sensor->capacitiveSensor(10);
}

// print the sensors value
void printTiming() {
  Serial.print(timing);
 
  Serial.println();
}

