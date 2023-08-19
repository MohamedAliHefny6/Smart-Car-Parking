
#include "STD_TYPES.h"
#include "BIT_MATH.h"
#include "MRCC_int.h"
#include "MRCC_prv.h"
#include "MRCC_cfg.h"


void MRCC_InitSysClk(void)
{
	/* Clock Source */
#if RCC_SYS_CLK == RCC_HSE

#if HSE_BYP == HSE_CRY
	RCC->CR &= ~(1<<CR_HSEBYP);

#elif HSE_BYP == HSE_RC
	RCC->CR |= (1<<CR_HSEBYP);

#endif

	RCC->CR |= 1<<CR_HSEON;
	while(!GET_BIT(RCC->CR,CR_HSEON+1));

	RCC->CFGR |= (1<<CFGR_SW0);
	RCC->CFGR &= ~(1<<CFGR_SW1);


#elif RCC_SYS_CLK == RCC_HSI
	RCC->CR |= 1<<CR_HSION;
	while(!GET_BIT(RCC->CR,CR_HSION+1));

	RCC->CFGR &= ~(1<<CFGR_SW0);
	RCC->CFGR &= ~(1<<CFGR_SW1);


#elif RCC_SYS_CLK == RCC_PLL

#if PLL_SRC == HSE_CLS_SRC
	RCC->PLLCFGR |= 1<<PLLCFGR_PLLSRC;

#elif PLL_SRC == HSI_CLS_SRC
	RCC->PLLCFGR &= ~(1<<PLLCFGR_PLLSRC);

#endif

	RCC->CR |= 1<<CR_PLLON;
	while(!GET_BIT(RCC->CR,CR_PLLON+1));

	RCC->CFGR &= ~(1<<CFGR_SW0);
	RCC->CFGR |= (1<<CFGR_SW1);

#else


#endif


	/* AHP Prescaler */
#if AHP_PRESCALER == PRESCALER_NOT_DIV
	RCC->CFGR &= ~(1<<CFGR_HPRE0);
	RCC->CFGR &= ~(1<<CFGR_HPRE1);
	RCC->CFGR &= ~(1<<CFGR_HPRE2);
	RCC->CFGR &= ~(1<<CFGR_HPRE3);

#elif AHP_PRESCALER == PRESCALER_DIV_2
	RCC->CFGR &= ~(1<<CFGR_HPRE0);
	RCC->CFGR &= ~(1<<CFGR_HPRE1);
	RCC->CFGR &= ~(1<<CFGR_HPRE2);
	RCC->CFGR |= (1<<CFGR_HPRE3);

#elif AHP_PRESCALER == PRESCALER_DIV_4
	RCC->CFGR |= (1<<CFGR_HPRE0);
	RCC->CFGR &= ~(1<<CFGR_HPRE1);
	RCC->CFGR &= ~(1<<CFGR_HPRE2);
	RCC->CFGR |= (1<<CFGR_HPRE3);

#elif AHP_PRESCALER == PRESCALER_DIV_8
	RCC->CFGR &= ~(1<<CFGR_HPRE0);
	RCC->CFGR |= (1<<CFGR_HPRE1);
	RCC->CFGR &= ~(1<<CFGR_HPRE2);
	RCC->CFGR |= (1<<CFGR_HPRE3);

#elif AHP_PRESCALER == PRESCALER_DIV_16
	RCC->CFGR |= (1<<CFGR_HPRE0);
	RCC->CFGR |= (1<<CFGR_HPRE1);
	RCC->CFGR &= ~(1<<CFGR_HPRE2);
	RCC->CFGR |= (1<<CFGR_HPRE3);

#elif AHP_PRESCALER == PRESCALER_DIV_64
	RCC->CFGR &= ~(1<<CFGR_HPRE0);
	RCC->CFGR &= ~(1<<CFGR_HPRE1);
	RCC->CFGR |= (1<<CFGR_HPRE2);
	RCC->CFGR |= (1<<CFGR_HPRE3);

#elif AHP_PRESCALER == PRESCALER_DIV_128
	RCC->CFGR |= (1<<CFGR_HPRE0);
	RCC->CFGR &= ~(1<<CFGR_HPRE1);
	RCC->CFGR |= (1<<CFGR_HPRE2);
	RCC->CFGR |= (1<<CFGR_HPRE3);

#elif AHP_PRESCALER == PRESCALER_DIV_256
	RCC->CFGR &= ~(1<<CFGR_HPRE0);
	RCC->CFGR |= (1<<CFGR_HPRE1);
	RCC->CFGR |= (1<<CFGR_HPRE2);
	RCC->CFGR |= (1<<CFGR_HPRE3);

#elif AHP_PRESCALER == PRESCALER_DIV_256
	RCC->CFGR |= (1<<CFGR_HPRE0);
	RCC->CFGR |= (1<<CFGR_HPRE1);
	RCC->CFGR |= (1<<CFGR_HPRE2);
	RCC->CFGR |= (1<<CFGR_HPRE3);

#else

#endif
}

void MRCC_vidEnable_Peripheral(u8 BusId, u8 PeripheralId)
{
	switch(BusId)
	{
	case RCC_AHB1:

		RCC->AHB1ENR |= (1<<PeripheralId);
		break;

	case RCC_AHB2:
		RCC->AHB2ENR |= (1<<PeripheralId);
		break;

	case RCC_APB1:
		RCC->APB1ENR |= (1<<PeripheralId);
		break;

	case RCC_APB2:
		RCC->APB2ENR |= (1<<PeripheralId);
		break;

	default:
		/*Invalid Bus*/
		break;
	}
}

void MRCC_vidDisable_Peripheral(u8 BusId, u8 PeripheralId)
{
	switch(BusId)
	{
	case RCC_AHB1:

		RCC->AHB1ENR &= ~(1<<PeripheralId);
		break;

	case RCC_AHB2:
		RCC->AHB2ENR &= ~(1<<PeripheralId);
		break;

	case RCC_APB1:
		RCC->APB1ENR &= ~(1<<PeripheralId);
		break;

	case RCC_APB2:
		RCC->APB2ENR &= ~(1<<PeripheralId);
		break;

	default:
		/*Invalid Bus*/
		break;
	}
}
