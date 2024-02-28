//=====[#include guards - begin]===============================================

#ifndef _RGB_LED_H_
#define _RGB_LED_H_

#include "arm_book_lib.h"

//=====[Declaration of public defines]=========================================

//=====[Declaration of public data types]======================================

#define LEDS_QUANTITY 3

typedef enum {
    RGB_LED_RED,
    RGB_LED_GREEN,
    RGB_LED_BLUE,
} lightSystem_t;

//=====[Declarations (prototypes) of public functions]=========================

void lightSystemInit();
void lightSystemUpdate();

//=====[#include guards - end]=================================================

#endif // _RGB_LED_H_
