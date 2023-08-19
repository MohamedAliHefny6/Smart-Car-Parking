#ifndef INC_KEYPAD_DRIVER_H_
#define INC_KEYPAD_DRIVER_H_


#include "STD_TYPES.h"

#define KEYPAD_PORT	      PORTB
#define KEYPAD_ROWS	      4
#define ROW0		      PIN12
#define ROW1		      PIN13
#define ROW2		      PIN14
#define ROW3		      PIN15
#define KEYPAD_COLS	      3
#define COL0		      PIN1
#define COL1	          PIN2
#define COL2	          PIN3

#define NO_KEY  'T'


#define  FIRST_OUTPUT   PIN12
#define  FIRST_INPUT   PIN1




#define  ROWS   4
#define  COLS   3


void keypad_init(void);

u8 keypad_Get_Pressed_Key(void);

#endif /* INC_KEYPAD_DRIVER_H_ */
