# Adaptable-Sanitizer-Dispenser
A Smart Sanitizer Dispenser That Uses Only Three Components. It Can Be Mounted On Any Soap Or Sanitizer Bottle.

## Components Required
1. Arduino UNO R3
2. IR Sensor
3. Servo Motor
4. Jumper Wires

## Build Instructions
1. Connect the GND pins of the IR Sensor and Servo Motor(Brown Wire) to the GND pins of the Arduino UNO
2. Connect the VCC pins of the IR Sensor and Servo Motor(Red Wire) to the 5V pins of the Arduino UNO
3. Connect the Signal Pin of the Servo Motor(Orange Wire) to Pin number 11 on the Arduino UNO
4. Connect the OUT Pin of the IR Sensor to Pin number 7 on the Arduino UNO

## Uploading The Code
1. Set BAUD Rate as 9600
2. Upload the Code
3. You Can update the code as per your IR sensor Logic

## NOTE
My IR Sensor Outputs HIGH for Objects That Are Farther Away From the Sensor.
Change This Line Of Code if Your Sensor Works Differently     
"if (sensorValue == LOW)"

## Contact Me
If you want to learn more about electronics follow my GitHub Page, 
you can reach out to me for any Questions at-    
Email: ranjan.dhruv007@gmail.com

