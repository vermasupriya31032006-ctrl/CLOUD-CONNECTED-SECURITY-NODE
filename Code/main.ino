
/*
===========================================================
Project : Cloud Connected Security Node (IoT Telemetry)
Board   : ESP32
Sensor  : HC-SR04 Ultrasonic Sensor
Protocol: MQTT
Cloud   : HiveMQ Cloud

Author  : Supriya Verma
College : GL Bajaj Institute of Technology and Management

Description:
This project measures distance using an HC-SR04 ultrasonic
sensor connected to an ESP32. The measured distance is sent
to the cloud using the MQTT protocol through HiveMQ Cloud.

The complete implementation, Wi-Fi credentials,
MQTT credentials, and cloud configuration
will be added during project development.
===========================================================
*/

#include <WiFi.h>
#include <PubSubClient.h>

// ---------- Pin Configuration ----------
#define TRIG_PIN 5
#define ECHO_PIN 18

// ---------- Wi-Fi Credentials ----------
const char* ssid = "";
const char* password = "";

// ---------- MQTT Credentials ----------
const char* mqtt_server = "";
const int mqtt_port = 8883;
const char* mqtt_username = "";
const char* mqtt_password = "";
const char* mqtt_topic = "security/distance";

// ---------- Objects ----------
WiFiClient espClient;
PubSubClient client(espClient);

void setup() {
  Serial.begin(115200);

  pinMode(TRIG_PIN, OUTPUT);
  pinMode(ECHO_PIN, INPUT);

  // Wi-Fi connection will be added tomorrow
  // MQTT connection will be added tomorrow
}

void loop() {

  // Distance measurement

  // MQTT publishing

  // Cloud telemetry

}
