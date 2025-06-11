# OSC

OSC stands for [Open Sound Control](https://en.wikipedia.org/wiki/Open_Sound_Control) and is the successor protocol to MIDI.

It's a widely popular real-time protocol in the event, music and creative tech scene and great for communicating between different programs on the same computer or on different computers. And it's easy to use! All our dreams come true!

## OSC words

There is some lingo in  the OSC world:

- **Stream**: The communication channel between Client and Server. Where messages are passed
- **Message**: the smallest unit of OSC data
- **Bundle**: mutliple messages to be excuted by the server at the same time

The stream can be implemented using different transport layer protocols, but we don't have to care about that.

---

![osc format diagram](../assets/osc-format-1024x670.png)

---

Maybe you've noticed the OSC address scheme looks very much like the web url address scheme. Coincident? Who knows?! (I really don't know, look it up and tell me)


---

There are multiple libraries implementing OSC for Arduino/ESP, we'll be using [OSC by Adrian Freed](https://github.com/CNMAT/OSC) (who also co-wrote the standard).

Go ahead and download it via the Arduino IDE's package manager.

## Example time!

Open up the `OSC/ESP8266sendMessage` example.

Let's look throught the code. What is familiar from the web server example? What is different?

## Just enough networking to get by

What are UDP, IP and port?


## Exercise time

Adjust the code in the example and have some networking fun!

---

### First part

- Change the message "hello, osc." and address "/hello" to something that makes sense in the context of your measurements/ circuit/ project. Also adjust the IP and ports once you know them

- Figure out your own computer's IP address in our local network

- Do you have a programm that can read OSC from the network? If not I have a PureData patch and a Godot Project prepared for this in the "Your environment" section. (Feel free to send me patches, sketches, sessions and projects from your favourite tool for the collection)

- Flash the board and read the incoming messages!

---

### Second part

Since we're all in the same network, we can send and read each other's messages.

Get together in groups and change your setups to send, receive and control various parts from various micro-controllers and computers!

---

### Optional

What we didn't do, but what you can check out:

- We only send from the ESP, but we can also receive it. Look at the provided example and adjust it, you should know all the relevant steps by now!

- You can in fact also talk OSC over a serial connection (because OSC abstracts the transport away!) There is an example for that, too!
