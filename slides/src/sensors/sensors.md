# Sensors

---

Not everything that is commonly called a "sensor" is actually sensing something. They are more like peripherals, but let's not nitpick too much :D

---

## Analog vs Digital

The Arduino Uno has analog and digital pins for connecting the respective kinds of sources. We'll see examples of both!

If you end up working with a different micro-controller, make sure to check the datasheet/ pinout to see if/which pins can be used for analog signals!

---

### What's the difference in reading?

**Analog** input is represented with in a value range from 0 to 1023 (for the Uno!).

We need to add all additional computation and interpretation of these values to make sense of it (or use a library).

**Digital** is represented as true/ false, HIGH/LOW.

---

### But digital can do more!

Most digital sensors are integrated circuits (IC) that do their own computation and offer data directly.

There are different protocols that these ICs and your micro-controller can use to communicate (eg I2C).

Both agree on a transmission rate and then the data is encoded in binary (0,1) and send over (in HIGH,LOW signals)! Usually this involves a clock (for shared transmission rate) and a data connection (for the actual data) in addition to GND and VCC (to power the IC).

On top of that creators (or other people on the internet) of these ICs write libraries that further abstract the interaction with the module. So most of the time instead of writing I2C code manually to read from a sensor, you'll have some function like `sensor.read()`.

## So many sensors!

At this point there are sensors and modules for basically anything! Which is great! But we can't talk about all of them in this workshop.

If you have a specific use case in mind, search online for it! There is usually a forum post or YouTube video waiting for you!
