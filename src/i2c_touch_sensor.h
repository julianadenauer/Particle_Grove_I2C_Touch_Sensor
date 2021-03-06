/* I2C touch sensor lib
by SeeeedStudio--lg
2012/9/12
*/
#ifndef i2c_touchsensor_h
#define i2c_touchsensor_h
//#include "WProgram.h"
#include "Particle.h"
#include "mpr121.h"
// #include <Wire.h>
class i2ctouchsensor
{
public:
void initialize();
void readTouchInputs();
void  getTouchState();
uint16_t touched;
private:
int _irqPin;
boolean _touchStates[12];
void mpr121_setup();
boolean checkInterrupt();
void set_register(int address, unsigned char r, unsigned char v);
};
#endif
