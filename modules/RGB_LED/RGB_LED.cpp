//=====[Libraries]=============================================================

#include "arm_book_lib.h"

#include "RGB_LED.h"

//=====[Declaration of private defines]========================================

#define LEDS_QUANTITY 3

//=====[Declaration of private data types]=====================================

//=====[Declaration and initialization of public global objects]===============

DigitalOut RGBLed[] = {(PB_4), (PA_0), (PD_12)}; // Red, Green, Blue LEDs

//=====[Declaration and initialization of private global objects]===============

//=====[Declaration of external public global variables]=======================

//=====[Declaration and initialization of public global variables]=============

//=====[Declaration and initialization of private global variables]============

static float dutyCycle = 0.5f;

//=====[Implementations of public functions]===================================

void lightSystemInit()
{

}

void lightSystemUpdate()
{

}

void turnRedOn() {
    RGBLed[0] = ON;
}

//=====[Implementations of private functions]==================================