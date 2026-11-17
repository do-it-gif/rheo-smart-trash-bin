// Copy this file to arduino_secrets.h in the same folder and fill it in.
// arduino_secrets.h is listed in .gitignore, so your Wi-Fi password never goes to GitHub.

#define SECRET_SSID          "your-wifi-name"       // 2.4 GHz network only
#define SECRET_PASS          "your-wifi-password"

#define SECRET_MQTT_HOST     "broker.hivemq.com"    // or broker.emqx.io
#define SECRET_MQTT_USER     ""                     // empty for the public broker
#define SECRET_MQTT_PASS     ""

// Must match topicPrefix in CONFIG in web/index.html
#define SECRET_TOPIC_PREFIX  "smartbin-your-topic-name"
