// #define DEBUG_SERIAL      1
// #define DEBUG_MQTT        1
// #define Inverter3Phase    1
// #define Inverter2String   1 
// #define useModulPower     1
// #define useStartVoltage   1
// #define useGetSettings    1
#define useSetMaxOutput      1
// #define useEnableSettings 1

#define SERIAL_RATE     115200    // Serial speed for status info
#define MAX485_DE       5         // D1, DE pin on the TTL to RS485 converter
#define MAX485_RE_NEG   4         // D2, RE pin on the TTL to RS485 converter
#define MAX485_RX       13        // D5, TX pin on the TTL to RS485 converter
#define MAX485_TX       12        // D6, RX pin on the TTL to RS485 converter
#define STATUS_LED      2         // Status LED pin on the Wemos D1 mini (D4)
#define UPDATE_MODBUS   2         // 1: modbus device is read every second
#define UPDATE_STATUS   2        // 10: status mqtt message is sent every X seconds
// #define RGBSTATUSDELAY  500       // delay for turning off the status led
#define WIFICHECK       500       // how often check lost wifi connection

// #define RGBLED_PIN D3        // Neopixel led D3
// #define NUM_LEDS 1
// #define LED_TYPE    WS2812
// #define COLOR_ORDER GRB
// #define BRIGHTNESS  64        // Default LED brightness.

// Update the below parameters for your project
// Also check NTP.h for some parameters as well
const char* ssid = "xxxx";                  // Wifi SSID
const char* password = "xxxx";              // Wifi password
const char* mqtt_server = "192.168.x.xx";   // MQTT server
const char* mqtt_user = "xxxx";             // MQTT userid
const char* mqtt_password = "xxxx";         // MQTT password
const char* clientID = "solarx";            // MQTT client ID
const char* topicRoot = "solarx";           // MQTT root topic for the device, keep / at the end


// Uncomment the section below for dynamic IP (including the define)
// #define FIXEDIP   1
// IPAddress local_IP(192, 168, 1, 205);         // Set your Static IP address
// IPAddress gateway(192, 168, 1, 254);          // Set your Gateway IP address
// IPAddress subnet(255, 255, 255, 0);
// IPAddress primaryDNS(192, 168, 1, 254);   //optional
// IPAddress secondaryDNS(8, 8, 4, 4); //optional
