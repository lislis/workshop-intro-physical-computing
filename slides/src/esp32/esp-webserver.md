# Webserver

One cool feature is that the ESP32 can be used as a small webserver, exposing the data it's dealing with directly to a web interface (in the same network).

This can be useful for configuring your setup without having to connect to the controller directly, or interacting with your piece remotely.

---

Let's build the LED ciruit first!

- 2 LEDs
- 2 330 Ohm resistors
- cables and a breadboard

![esp led circuit](../assets/esp32_web_server_schematic.webp)

---

Next we need code to connect the ESP to our local network.

[Copy or download the code from here!](/)

---

We'll walk through it!

It's useful to understand:

- Client-Server architecture

- Basic TCP/IP

- HTTP as a protocol and markup language

---

Try out your app!

---

Instead of displaying the info on an HTML page, we can write it in JSON or a plain text.

Strictly, there is no need for HTTP. Do whatever you feel comfortable with or what gets your project up and running the fastest!

---
