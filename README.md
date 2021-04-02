# Simple library to connect D1 mini to WiFi

To enable serial output or onboard led activity, remember to set those in setup hook function.

``
pinMode(BUILTIN_LED, OUTPUT); // initialize onboard LED as output
Serial.begin(74880); // Serial
``