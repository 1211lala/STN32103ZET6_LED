#ifndef _led_h_
#define _led_h_

#include "sys.h"

#define Green_LED   PFout(10)
#define Red_LED     PFout(9)


void LED_Init(void);

#endif
