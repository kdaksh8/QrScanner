#include <SoftwareSerial.h>
#define D3 (0)
#define D4 (2)
// Define the RX and TX pins
const int rxPin = D7;  // GPIO13
const int txPin = D8;  // GPIO15

// Set up a software serial port
SoftwareSerial mySerial(rxPin, txPin);

void setup() {
  // Start the hardware serial port
  Serial.begin(9600);
  // Start the software serial port 
  Serial.println("UART communication started on pins D7 (RX) and D8 (TX)");
  delay(1000);
  mySerial.begin(9600);
}
void loop() {
  // Buffer to store incoming data
  String receivedData = "";
  // Read data from the software serial port if available
  while (mySerial.available())
  {
    char incomingByte = mySerial.read();
    receivedData += incomingByte;
    delay(10);  // Small delay to ensure all data is received
  }
  // If data was received, print it to the Serial Monitor
  if (receivedData.length() > 0)
  {
    Serial.print("Received: ");
    Serial.println(receivedData);
  }
}
