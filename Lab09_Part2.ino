#include <LBLE.h>
#include <LBLEPeriphral.h>

void setup() {
  //Initialize serial and wait for port to open:
  Serial.begin(115200);

  // Initialize BLE subsystem
  Serial.println("BLE begin");
  LBLE.begin();
  while (!LBLE.ready()) {
    delay(100);
  }
  Serial.println("BLE ready");
     LBLEAdvertisementData beaconData;
  beaconData.configAsEddystoneURL(EDDY_HTTPS, "05052421", EDDY_DOT_COM);

  Serial.print("Start advertising Eddystone-URL");

