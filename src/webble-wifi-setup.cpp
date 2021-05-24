/******************************************************/
//       THIS IS A GENERATED FILE - DO NOT EDIT       //
/******************************************************/

#line 1 "/Users/dankouba/Documents/Particle/solutions/webble-wifi-setup/src/webble-wifi-setup.ino"
#include "Particle.h"
#include "ble_wifi_setup_manager.h"

// This example does not require the cloud so you can run it in manual mode or
// normal cloud-connected mode
void setup();
void loop();
#line 6 "/Users/dankouba/Documents/Particle/solutions/webble-wifi-setup/src/webble-wifi-setup.ino"
SYSTEM_MODE(MANUAL);

SerialLogHandler logHandler(LOG_LEVEL_TRACE, {
    {"app", LOG_LEVEL_ALL}
});

BLEWiFiSetupManager wifi_manager;

void setup() {
	wifi_manager.setup();
    WiFi.on();
}

void loop() {
	wifi_manager.loop();
}