# IDD-Fa19-Lab1: Blink!

**A lab report by Henry Wu**

## Part A. Set Up a Breadboard

![breadboard](https://raw.githubusercontent.com/henryw30/IDD-Fa18-Lab1/master/arudino.jpg)


## Part B. Manually Blink a LED

**a. What color stripes are on a 220 Ohm resistor?**

220 - red, red, black, black, brown
 
**b. What do you have to do to light your LED?**

create the circuit while making sure the longer part of the LED was connected to the button and the shorter end was connected to the resistor


## Part C. Blink a LED using Arduino

### 1. Blink the on-board LED

**a. What line(s) of code do you need to change to make the LED blink (like, at all)?**

none, the default worked

**b. What line(s) of code do you need to change to change the rate of blinking?**

change the number in the delay() function

**c. What circuit element would you want to add to protect the board and external LED?**

a resistor
 
**d. At what delay can you no longer *perceive* the LED blinking? How can you prove to yourself that it is, in fact, still blinking?**

at ~13 ms delay, can prove by using a high frame rate camera, use an oscilloscope, or write some code to stop blinking after X amount of times the loop has executed

**e. Modify the code to make your LED blink your way. Save your new blink code to your lab 1 repository, with a link on the README.md.**

[https://github.com/henryw30/IDD-Fa18-Lab1/blob/master/Blink-2.ino]


### 2. Blink your LED

**Make a video of your LED blinking, and add it to your lab submission.**

[https://photos.app.goo.gl/rBXBnrVDCe4yEjbh6]


## Part D. Manually fade an LED

**a. Are you able to get the LED to glow the whole turning range of the potentiometer? Why or why not?**

yes, the LED was still on during the entire turning range, but the intensity of the glow changed with respect to the direction of the knob


## Part E. Fade an LED using Arduino

**a. What do you have to modify to make the code control the circuit you've built on your breadboard?**

change the led variable, which is just the pin number

**b. What is analogWrite()? How is that different than digitalWrite()?**

analogWrite() uses pulse width modulation to simulate an analog square wave whereas a digitalWrite() just sends a strict 0 or 1 signal


## Part F. FRANKENLIGHT!!! (told not to worry about this since I didn't have an electronic device I can take apart)

### 1. Take apart your electronic device, and draw a schematic of what is inside. 

**a. Is there computation in your device? Where is it? What do you think is happening inside the "computer?"**

**b. Are there sensors on your device? How do they work? How is the sensed information conveyed to other portions of the device?**

**c. How is the device powered? Is there any transformation or regulation of the power? How is that done? What voltages are used throughout the system?**

**d. Is information stored in your device? Where? How?**

### 2. Using your schematic, figure out where a good point would be to hijack your device and implant an LED.

**Describe what you did here.**

### 3. Build your light!

**Make a video showing off your Frankenlight.**

**Include any schematics or photos in your lab write-up.**
