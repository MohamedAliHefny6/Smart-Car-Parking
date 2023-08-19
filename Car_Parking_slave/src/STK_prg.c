#include "STD_TYPES.h"
#include "BIT_MATH.h"

#include "STK_int.h"
#include "STK_prv.h"
#include "STK_cfg.h"

void (*Global_Callback)(void);


void MSTK_voidInit(void)
{
	/* Set clock source */
#if STK_CLK_SOURCE == STK_AHB
	SET_BIT(MSTK_REG->CTRL,CLKSOURCE);

#elif STK_CLK_SOURCE == STK_AHB_DIV_8
	CLR_BIT(MSTK_REG->CTRL,CLKSOURCE);

#else

#endif
}

void MSTK_voidIntState(u8 Copy_u8IntState)
{
	/* Interrupt enable or disable*/
	if(Copy_u8IntState == MSTK_INT_ENABLE)
	{
		SET_BIT(MSTK_REG->CTRL,TICKINT);
	}
	else if(Copy_u8IntState == MSTK_INT_DISABLE)
	{
		CLR_BIT(MSTK_REG->CTRL,TICKINT);

	}
}

void MSTK_voidStart(u32 Copy_u8TicksValue)
{
	/* Clearing VAL register */
	MSTK_REG->VAL = 0;

	/* Load value in LOAD register */
	MSTK_REG->LOAD = Copy_u8TicksValue;

	/* Enable the Systick Counter */
	SET_BIT(MSTK_REG->CTRL,STK_ENABLE);
}

u8 MSTK_u8ReadFlag(void)
{
	/* Reading the flag */
	return (GET_BIT(MSTK_REG->CTRL,COUNTFLAG));
}

void MSTK_voidDelayUsec(u32 Copy_u8DelayUsec)
{
	/* Check if the delay is greater than or equal to 2 microseconds */
	if (Copy_u8DelayUsec >= 2)
	{
		/* Disable the SysTick interrupt */
		MSTK_voidIntState(MSTK_INT_DISABLE);

		/* Set the preload value in the LOAD register by multiplying the delay by 2 */
		MSTK_voidStart(Copy_u8DelayUsec * 2);

		/* Wait until the delay passed by checking the COUNTFLAG */
		while (MSTK_u8ReadFlag() == 0);
	}
}

void MSTK_voidDelayMsec(u32 Copy_u8DelayMsec)
{
	/* Disable the SysTick interrupt */
	MSTK_voidIntState(MSTK_INT_DISABLE);

	/* Set the preload value in the LOAD register by multiplying the delay by 2000 */
	MSTK_voidStart(Copy_u8DelayMsec * 2000);

	/* Wait until the delay passed by checking the COUNTFLAG */
	while (MSTK_u8ReadFlag() == 0);
}

void MSTK_voidSetTicksAction(u32 Copy_u8TicksValue, void (*CallbackFunc)(void))
{
	 /*Set callback function*/
	Global_Callback = CallbackFunc;

	 /*Clearing VAL register*/
	MSTK_REG->VAL = 0;

	 /*Load value in LOAD register*/
	MSTK_REG->LOAD = Copy_u8TicksValue;

	 /*Enable the Systick Counter*/
	SET_BIT(MSTK_REG->CTRL,STK_ENABLE);
}

u32  MSTK_u32GetElapsedTime(void)
{
	/* Calculating the Elapsed time */
	return ((MSTK_REG->LOAD)-(MSTK_REG->VAL)) ;
}

u32  MSTK_u32GetRemainingTime(void)
{
	/* Calculating the Remaining time */
	return MSTK_REG->VAL ;
}

void Systick_IRQHandler(void)
{
	Global_Callback();
}

