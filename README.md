# ESP32 Bluetooth Serial Counter

This project demonstrates how to use an ESP32 to send an incrementing counter value over Bluetooth to a connected device. The counter increments each time a message is received via Bluetooth.

## Features

- **Bluetooth Communication:** The ESP32 communicates with a paired device (e.g., smartphone, laptop) using Bluetooth.
- **Incremental Counter:** Each time the ESP32 receives data from the paired device, it increments a counter and sends the updated value back over Bluetooth.

## Hardware Requirements

- ESP32 Development Board
- A device capable of Bluetooth communication (e.g., smartphone, laptop)

## Software Requirements

- Arduino IDE with ESP32 support
- Bluetooth terminal app (e.g., Serial Bluetooth Terminal) for testing

## Code Overview

### `setup()`
- Initializes serial communication at a baud rate of 115200.
- Begins Bluetooth communication with the device name "Esp32-BT2".

### `loop()`
- Checks if data is available from the Bluetooth connection.
- Increments the counter `x` each time data is received.
- Sends the updated counter value over Bluetooth and prints it to the Serial Monitor.

## How to Use

1. Upload the code to your ESP32 using the Arduino IDE.
2. Pair your ESP32 with a Bluetooth-capable device (e.g., smartphone).
3. Use a Bluetooth terminal app to connect to the ESP32.
4. Each time a message is sent to the ESP32 via Bluetooth, it will respond with the current value of the counter, which increments by 1 with each received message.
