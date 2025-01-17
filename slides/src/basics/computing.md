# Computers

- Brain of Physical Computing project

- Comes in different sizes

- Converts input to outputs

- Must be program

- Digital device

## Microcontrollers

- Very application specific

- Run one programmed

- Usually very cheap

- Low technical specs

- Periphery (RAM, IO) included

- Are in bascially everything

![arduino](/assets/arduino.png) ![espressif](/assets/espressif.png)


## Microprocessors

- Basically a computer

- Needs periphery (RAM, memory)

- Runs an operating system

![raspberry pi](/assets/raspi.png)

## Comparison

![microcontroller vs microprocessor](/assets/micro.png)

## Why these?

- Widespread platforms, lots of ddocumentation

- Inexpensive

- Optimized for hobbyists and learners

- Software-libraries for nearly everything, big open source ecosystem

# Arduino Platform

"Arduino" can mean different things:

- microcontroller development board
- software framework
- IDE

## Boards

There is a wide variety of [boards available](https://www.arduino.cc/en/hardware) from Arduino directly. Since everything is open hardware there are also a lot of (compatible, cheaper) copy-cats and variations for different purposes.

Need a little more powerful hardware? Maybe a [Teensy](https://www.pjrc.com/teensy/) is right for you. Which in turn is the base for the [Daisy](https://electro-smith.com/products/daisy-seed).

Into wearables and sewing projects? Maybe the [Lilypad](https://www.sparkfun.com/lilypad_sewable_electronics) is for you.

For interfacing with wifi or bluetooth I recommend an [ESP32](https://www.espressif.com/en/products/socs/esp32) or the sightly older (and cheaper) [ESP8266](https://www.espressif.com/en/products/socs/esp8266).

**The absolute go-to for beginners and prototyping is the Arduino Uno.**

---

### Arduino Uno

- ATmega328P microcontroller (watch out when buying very cheap boards!)
- 8 Bit architecture 16 Mhz
- 2 KB RAM
- 1 KB ROM
- 32 KB Flash Memory
- 14 digital IO pins with 6 PWM pins
- 6 analog input pins with 10 bit analog-digital-converter

## IDE

IDE 1.x was based on the Processing IDE.

IDE 2.x is a rewrite using VS Code/ Electron which was ... a choice, but it's the new standard so we'll roll with it.

[Download the Arduino IDE 2.x here](https://www.arduino.cc/en/software).

Within the IDE you'll program arduino-flavoured C++, which you should already be (somewhat) familiar with.

# Raspberry Pi

In this workshop we will not be talking Raspberry PIs specifically.

But if you want to you can ask for followup workshops.

## Tech specs

- ARM processor like in you smartphone
- Different RAM-size models
- Integrated GPU
- Many periphery components (IO Pins, USB, HDMI, LAN, WLAN, Bluetooth)
- SD-card as mass-storage

## Software

- Linux-based
- With or without graphical desktop (headless)
- Programming in every language that is available for Linux
- You're basically managing a server
