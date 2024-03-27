#include <DmxSimple.h>

void setup() {
  // put your setup code here, to run once:
  /* The most common pin for DMX output is pin 3, which DmxSimple
  ** uses by default. If you need to change that, do it here. */
  DmxSimple.usePin(3);
  DmxSimple.maxChannel(3);
  DmxSimple.write(123, 45);

  Serial.begin(9600); //open the serial port
}

void loop() {
  // put your main code here, to run repeatedly:
    /* Update DMX channel 1 to new brightness */
    /*
     * 
    See how this function follows the same pattern as in Processing
    the first number is the channel 
    the second number is the value
    try copy and paste some sequences into here.
    
    */

    //DmxSimple.write(channel, value);
    DmxSimple.write(1, 50);
    DmxSimple.write(2, 50);
/Users/lzhou/Downloads/DMXTest    /* Small delay */
    delay(1000);

  
      //DmxSimple.write(channel, value);
    DmxSimple.write(1, 0);
    
    /* Small delay */
    delay(1000);
  
}
