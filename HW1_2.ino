/* Blink(LED)
 
 Turns on the built-in LED(Status LED) on for 0.1 second, then off for 0.1 second,
 repeatedly. BOARD_LED_PIN is defined previously, so just use it without declaration.
 BOARD_LED_PIN was connected to pin 16 in CM-900, but connected to pin 14 in OpenCM9.04.

                Compatibility
CM900                  O
OpenCM9.04             O

 created 16 Nov 2012
 by ROBOTIS CO,.LTD.
 */

void setup() {
  // Set up the built-in LED pin as an output:
  pinMode(2, OUTPUT);
}

void loop() {//T=2s f=1/T=1/2Hz
  digitalWrite(2, HIGH); // set to as HIGH LED is turn-off
  delay(1000);          // Wait for 1 second  
  digitalWrite(2, LOW);  // set to as LOW LED is turn-on
  delay(1000);          // Wait for 1 second
}
