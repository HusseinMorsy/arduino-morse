# Arduino Morse

An Example project for implementing a morse code for a blinking LED on the arduino UNO R3 board.


## Installation

The easyiest way is to install the official [Arduino IDE](https://www.arduino.cc/en/Main/Software).
Because I am living in the command line with vim as my prefered editor I will show the installation of the [arduino-cli](https://github.com/arduino/arduino-cli):

1. Download the [latest build](https://github.com/arduino/arduino-cli#download-the-latest-stable-release)
2. Move the binary to e.g. `/usr/local/bin/arduino-cli`
3. Install the arduino UNO driver with: `arduino-cli core install arduino:avr`
4. Plug your arduino board to the usb port of your mac and check if your board is detected:
```bash
arduino-cli board list
FQBN           	Port                 	ID       	Board Name
arduino:avr:uno	/dev/cu.usbmodem14121	2341:0043	Arduino/Genuino Uno
```

## Create a new Sketch project

Run:

```bash
arduino-cli sketch new morse
Sketch created in: /Users/hussein/Documents/Arduino/morse
```

## Compile

Run:

```bash
arduino-cli compile --fqbn arduino:avr:uno ~/Documents/Arduino/morse
```

## Upload

Run:

```bash
arduino-cli upload -p /dev/cu.usbmodem14121  --fqbn arduino:avr:uno ~/Documents/Arduino/morse
```




