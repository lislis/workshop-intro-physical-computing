# Sensors

---

Sensors come for almost anything at this point.

Most of the time they make use of the same physical properties we talked about and see how they change under different circumstances.

---

## Analog vs Digital

The Arduino Uno has analog and digital pins for connecting the respective kinds of sources.

If you end up working with a different micro-controller, make sure to check the datasheet/ pinout to see if/which pins can be used for analog signals!

---

### What's the difference in reading?

**Analog** input is represented with in a value range from 0 to 1023 (for the Uno!).

**Digital** is represented as true/ false, HIGH/LOW.

---

### But digital can do more!

Most digital sensors have an integrated circuit (IC) that do their own computation and offer data directly.

There are different protocols that these ICs and your micro-controller can use to communicate (eg I2C, SPI).

---

Both agree on a transmission rate and then the data is encoded in binary (0,1) and send over (in HIGH,LOW signals)! Usually this involves a clock (for shared transmission rate) and a data connection (for the actual data) in addition to GND and VCC (to power the IC).

---

On top of that sensor creators (or other people on the internet) write libraries that further abstract the interaction with it. So most of the time instead of writing I2C code manually to read from a sensor, you'll have some function like `sensor.read()`.
