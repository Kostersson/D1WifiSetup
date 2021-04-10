#ifndef WIFI_SETUP_H
#define WIFI_SETUP_H
#include "Arduino.h"
#include <ESP8266WiFi.h>
#include <D1PinMap.h>
#include <BlinkLed.h>

class WifiSetup {
public:
    WifiSetup(const char *hostname, const char* ssid, const char* password);
    void connect();
    void checkWifiConnection();
private:
    const char *_hostname;
    const char *_ssid;
    const char *_password;
    void setupWifi();
    void connectWifi();
    void wifiConnectedBlink();
};

#endif //WIFI_SETUP_H
