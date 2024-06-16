# [Circuit 1.3] Hello, World! (Blinking LED)

Making an LED blink is the hardware-equivalent of printing "Hello, Word!".

Change your circuit to this:

![circuit with LED](/assets/simple_led_wiring.png)

Add this code, save and upload it to your Arduino:

``` c
void setup() {
    pinMode(3, OUTPUT);
}

void loop() {
    digitalWrite(3, HIGH);
    delay(1000);
    digitalWrite(3, LOW);
    delay(1000);
}
```

It's nicer to put your pins into variables at the top.

``` c

#define LED_PIN 3
// or int led_pin = 3;

void setup() {
    pinMode(LED_PIN, OUTPUT);
}

void loop() {
    digitalWrite(LED_PIN, HIGH);
    delay(1000);
    digitalWrite(LED_PIN, LOW);
    delay(1000);
}
```
