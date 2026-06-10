# Building a MIDI controller

Can we build our own midi controllers with an Arduino? Yes!

I recommend using the Arduino [Leonardo](https://docs.arduino.cc/hardware/leonardo/) (or similar), as it already registers as USB device when you plug it in. Also useful for making custom game controllers.

The library to use to actually announce the Leonardo as a MIDI device is called [MIDIUSB](https://github.com/arduino-libraries/MIDIUSB) (straightforward naming) and the library [control surface by Pieter P](https://github.com/tttapa/Control-Surface) kind of does the DAW mappings.

This video gives a short intro to the Leonardo and the library and testing a custom midi controller [https://www.youtube.com/watch?v=WRz6JKeXZgk](https://www.youtube.com/watch?v=WRz6JKeXZgk) (it's not the highest quality video, sorry about that).

**NOTE: In past workshops only Logic and Ableton recognized the custom MIDI controller. ProTools kind of saw it but didn't accept input, sadly.**

You can use a fader or a poti for this!
