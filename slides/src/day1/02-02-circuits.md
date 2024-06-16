# Circuits

There are multiple ways to map out a circuit.

The are "proper" schematics but they don't layout the wires in space and can be hard to read for beginners. It's definitely useful to learn tough, especially if you want to go the route of sound synthesis.

In the Arduino ecosystem it's common to visualize the circuits similar as to how you would lay it out on a breadboard.

There are also online tools like [Fitzing](https://fritzing.org/) that help you make it very fancy and easy to understand (maybe also for planning a circuit for yourself).

![schematics](/assets/schematic.png)

![fritzing schematic](/assets/simplest_circuit.png)


## How to read a schematic

My approach to reading/writing circuits and schematics is the following, but feel free to develop your own.

- **Locate the power source**

  - Is there one or multiple?
  - What voltage do you need?

- **Locate all components**

  - If the schematic doesn't come with a list of used components, make one
  - Look at which components "go together", e.g. an LED is very often accompanied by a resistor. This helps with thinking about the layout
  - Which components are connected to the microcontroller, which just to power?

- **Look at the ground**

  - Figure out how all the components relate to ground
  - Some will need to be directly connected to ground
  - Some will live "in-between"

- **Layout your components**

  - By now you should know what requirements your components have in relation to power and ground
  - Now it's all about laying them out in space

    - With a breadboard you can experiment all you like

    - When soldering thing three times if your layout makes sense, you want to optimize for a little soldering points as possible
