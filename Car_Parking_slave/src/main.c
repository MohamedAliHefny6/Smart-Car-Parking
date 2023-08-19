
// SLAVE        TFT W LED MATRIX


#include <stdio.h>
#include <stdlib.h>
#include "diag/Trace.h"

#include "BIT_MATH.h"
#include "STD_TYPES.h"

#include "MRCC_int.h"
#include "MGPIO_int.h"
#include "STK_int.h"



#include "LEDMATRIX_int.h"

#include "MUART_int.h"

#include "MNVIC_int.h"

#include "SYS_INIT.h"
#include "MEXTI_int.h"
#include "SPI_int.h"
#include "TFT_cfg.h"

#include "TFT_int.h"
#include "TFT_prv.h"
#include "TFT_img.h"
void func1(void);



u8 arr;
u8 user;
u8 motionsenser;
u8 flag_motion =0;


s32 entire ;
s32 space = 3 ;
u8 k ;
u8 m ;

u8 user1_flag = 0 ;
u8 user2_flag = 0 ;
u8 user3_flag = 0 ;
u8 data []={0, 0, 126, 121, 121, 126, 0, 0};
u8 data1 []={3, 1, 126, 120, 120, 120, 0, 0};


 u8 led_flag =0 ;

int main(void)
{

	SYS_INIT();













while (1)
{
LEDMTX_vidDisplay(data);
}
}


void func1(void)     // FUNC UART TO UNLOCK THE LOCK
{

	k = UART_READ_DATA();
	for ( u8 i= 0 ; k == '1' && i <250  ;i ++ )
	{
		LEDMTX_vidDisplay(data1);
	}

}












