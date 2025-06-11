// This example just highlights the output as plain text by reading their status
// which is a stand in for reading measurement data that changes over time for example
// Otherwise this example does not offer interacting with the LEDs and is, in fact, quite boring

#include <WiFi.h>

#define WIFI_SSID "ssid" // change with your own wifi ssid
#define WIFI_PASS "xxxxxx" // change with your own wifi password

#define PORT 80

const int output26 = 26;
const int output27 = 27;

WiFiServer server(PORT);

String header; // update this with the value you wish to send to your client

void setup() {
  Serial.begin(115200);

  pinMode(output26, OUTPUT);
  pinMode(output27, OUTPUT);
  // Set outputs to LOW
  digitalWrite(output26, LOW);
  digitalWrite(output27, LOW);

  WiFi.begin(WIFI_SSID, WIFI_PASS); 

  Serial.print("Connecting to ");
  Serial.println(WIFI_SSID);
  WiFi.begin(WIFI_SSID, WIFI_PASS); 

  Serial.println("Waiting for wifi");
  int timeout_s = 30;
  while (WiFi.status() != WL_CONNECTED && timeout_s > 0) {
      timeout_s--;
      delay(1000);
      Serial.print(".");
  }
  
  if(WiFi.status() != WL_CONNECTED) {
    Serial.println("unable to connect, check your credentials");
  } 
  
  Serial.println("Connected to the WiFi network");
  Serial.println(WiFi.localIP());
  server.begin();
}
  
void loop() {
  WiFiClient client = server.available();   

  if (client) {                            
    Serial.println("New Client.");          
    String currentLine = "";               
    
    while (client.connected()) { 
      if (client.available()) {             
        char c = client.read();             
        Serial.write(c);                   

        client.println("GPIO 26," + digitalRead(output26));
        client.println("GPIO 27," + digitalRead(output27));
        client.println();
        // Close the connection
        client.stop();
        Serial.println("Client disconnected.");
        Serial.println("");
      }
    }
  }
}
