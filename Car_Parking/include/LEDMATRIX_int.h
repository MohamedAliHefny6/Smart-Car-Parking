#ifndef LEDMATRIX_INT_H
#define LEDMATRIX_INT_H

/*PORTA , COLUMNS*/
#define COL0     PIN0
#define COL1     PIN1
#define COL2     PIN2
#define COL3     PIN3
#define COL4     PIN4
#define COL5     PIN5
#define COL6     PIN6
#define COL7     PIN7


/*PORTB , ROWS*/
#define ROW0     PIN0
#define ROW1     PIN1
#define ROW2     PIN2
#define ROW3     PIN6
#define ROW4     PIN7
#define ROW5     PIN8
#define ROW6     PIN9
#define ROW7     PIN10



void LEDMTX_vidInit(void);

void LEDMTX_vidDisplay(u8 *Copy_u8Frame);

void LEDMTX_vidDisableCols(void);

void LEDMTX_vidSetRowValues(u8 Copy_u8Frame);





#endif /* LEDMATRIX_INT_H */
