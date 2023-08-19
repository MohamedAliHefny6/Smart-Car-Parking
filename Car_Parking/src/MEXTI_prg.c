#include"STD_TYPES.h"
#include"BIT_MATH.h"

#include"MEXTI_int.h"
#include"MEXTI_cfg.h"
#include "MEXTI_prv1.h"
#include "MEXTI_prv.h"

static void (*EXTI0_CallBack)(void) = NULL;
static void (*EXTI1_CallBack)(void) = NULL;

void EXTI0_VoidCallBack(void (*ptr)(void)){
	EXTI0_CallBack = ptr;
}
void EXTI1_VoidCallBack(void (*ptr)(void)){
	EXTI1_CallBack = ptr;
}
void EXTI0_IRQHandler(void){
	EXTI0_CallBack();
	SET_BIT(EXTI->PR,0);

}
void EXTI1_IRQHandler(void){
	EXTI1_CallBack();
	SET_BIT(EXTI->PR,1);

}

void MEXTI_voidEnableEXTI(EXTI_LINE_type Copy_uddtLineNum) {
	if((Copy_uddtLineNum >= 0) && (Copy_uddtLineNum <= 15) )
	{
		SET_BIT(EXTI -> IMR, Copy_uddtLineNum);
	}
	else
	{
		// do nothing
	}
}
void MEXTI_voidDisableEXTI(u8 Copy_u8EXTILine) {
	CLR_BIT(EXTI -> IMR, Copy_u8EXTILine);
}
void MEXTI_voidSoftwareTrigger(u8 Copy_u8EXTILine) {
	SET_BIT(EXTI -> SWIER, Copy_u8EXTILine);
}

void MEXTI_voidSetTriggerSource(EXTI_LINE_type Copy_uddtLineNum, EXTI_TriggerMode_t Copy_uddtTriggerMode) {
	switch (Copy_uddtTriggerMode) {
		case RISING_EDGE:
			SET_BIT(EXTI -> RTSR, Copy_uddtLineNum);
			CLR_BIT(EXTI -> FTSR, Copy_uddtLineNum);
		break;

		case FALLING_EDGE:
			SET_BIT(EXTI -> FTSR, Copy_uddtLineNum);
			CLR_BIT(EXTI -> RTSR, Copy_uddtLineNum);
			break;

		case ON_CHANGE:
			SET_BIT(EXTI -> RTSR, Copy_uddtLineNum);
			SET_BIT(EXTI -> FTSR, Copy_uddtLineNum);
			break;
	}
	SET_BIT(EXTI -> IMR, Copy_uddtLineNum);
}
void MEXTI_voidSetPortExtiCfg(EXTI_LINE_type Copy_uddtLineNum, u8 Copy_u8GpioPortNum ){
	u8 Local_u8REG= Copy_uddtLineNum / 4;
	u8 Local_u8BIT= Copy_uddtLineNum % 4;

	SYSCFG->EXTICR[Local_u8REG] &= ~(SYSCFG_EXTI_PREMASK << Local_u8BIT);
	SYSCFG->EXTICR[Local_u8REG] |= ~(Copy_u8GpioPortNum << Local_u8BIT);

}
