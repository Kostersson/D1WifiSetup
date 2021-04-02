#include "WifiSetup.h"
#include "Arduino.h"
#include <ESP8266WiFi.h>
#include <D1PinMap.h>
#include <BlinkLed.h>

WifiSetup::WifiSetup(String hostname, const char *ssid, const char *password) {
    _hostname = hostname;
    _ssid = ssid;
    _password = password;
}

void WifiSetup::connect() {
    setupWifi();
    connectWifi();
}

void WifiSetup::setupWifi() {
    WiFi.hostname(_hostname);
    WiFi.begin(_ssid, _password);
}

void WifiSetup::connectWifi() {
    // Connect WiFi
    Serial.println();
    Serial.println();
    Serial.print("Connecting to ");
    Serial.println(_ssid);
    while (WiFi.status() != WL_CONNECTED) {
        delay(500);
        Serial.print(".");
    }
    Serial.println("");
    Serial.println("WiFi connected");
    // Print the IP address
    Serial.print("IP address: ");
    Serial.println(WiFi.localIP());
    wifiConnectedBlink();
    wifiConnectedBlink();
}

void WifiSetup::wifiConnectedBlink() {
    blinkLed(500);
    delay(500);
    blinkLed(500);
    delay(500);
    blinkLed(500);
    delay(1000);
}

