# Serial communication

## Can we print to a console?

You ran into the issue of wanting to debug something by now.

We can accomplish this by using serial communication!

## Talking serial

For two devices to communicate serially we have to establish a transmission rate, the so-called Baud rate.

This is typically 9600 (pulses per second) but you can also choose faster ones (eg 115200).

It's important though that both sides use the same Baud rate!

## Both sides?

We are now opening a two-way-channel between the Arduino and your computer.

The Arduino will send (or read) at the Baud rate to your computers serial communication port.

Your computer can read (or write) from that port. Right now it's the Arduino IDE's serial console that will do just that.

## Endless possibilities

Only one program at a time can read from the serial port!

It doesn't have to be the Arduino IDE, but it's nice for debugging.

It can be Unreal, Unity, Touch Designer, Max/MSP, your own Node script etc.


## Getting started

``` c

void setup() {
  # we have to initialize Serial in the setup
  Serial.begin(9600);
  # then we can print or println (with a line break)
  Serial.println("Done with setup entering loop")
}

void loop() {
  Serial.print("loop");
  delay(500);
}

```

## Reading

We can also read from Serial, very useful when data comes from a program and the Arduino should act on it.

``` c

int letPin = 9;

void setup() {
  pinMode(ledPin, OUTPUT);
  Serial.begin(9600);
  Serial.println("Done with setup entering loop")
}

void loop() {
  String reading;

  if (Serial.available()) {
    reading = Serial.readString();
    reading.trim();
    if (reading == "on") {
      digitalWrite(ledPin, HIGH);
    } else if (reading == "off") {
      digitalWrite(ledPin, LOW);
    }
  }
}

```

We can .read() (bytes) or .readString() (String), depending on what data you have. Also look into documentation online!

---

![serial console](../assets/serial.png)
