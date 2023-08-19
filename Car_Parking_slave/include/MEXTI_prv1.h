#ifndef EXTI_PRV_H
#define EXTI_PRV_H

#include"STD_TYPES.h"


#define			EXTI_BASE_ADDRESS			(0x40013C00)
#define			SYSCFG_BASE_ADDRESS			(0x40013800)

typedef	struct
{
	volatile	u32	IMR;
	volatile	u32	EMR;
	volatile	u32	RTSR;
	volatile	u32	FTSR;
	volatile	u32	SWIER;
	volatile	u32	PR;
	
}EXTI_Type;

typedef	struct
{
		u32	EXTICR[4];

}SYSCFG_Type;

#define	EXTI		(( EXTI_Type * )EXTI_BASE_ADDRESS)
#define	SYSCFG		(( SYSCFG_Type * )SYSCFG_BASE_ADDRESS)

#define SYSCFG_EXTI_PREMASK	0b1111

#endif
