#include "BluetoothSerial.h"

BluetoothSerial serialBT;

int x = 0;

void setup() {
  // Initialize serial communication and Bluetooth
  Serial.begin(115200);
  serialBT.begin("Esp32-BT2");
}

void loop() {
  // Check if there is data available from the Bluetooth connection
  if (serialBT.available()) {
    x += 1;

    serialBT.println(x);

    // Print x to the Serial Monitor for debugging
    Serial.println(x);
  }
  
  delay(1000);  // Small delay to avoid overwhelming the loop
}
