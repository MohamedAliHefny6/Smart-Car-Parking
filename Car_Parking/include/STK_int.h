#ifndef STK_INT_H
#define STK_INT_H


#define STK_AHB				1
#define STK_AHB_DIV_8		2


#define MSTK_INT_ENABLE              1
#define MSTK_INT_DISABLE             0


void MSTK_voidInit(void);

void MSTK_voidIntState(u8 Copy_u8IntState);

void MSTK_voidStart(u32 Copy_u8TicksValue);

u8 MSTK_u8ReadFlag(void);

void MSTK_voidDelayUsec(u32 Copy_u8DelayUsec);

void MSTK_voidDelayMsec(u32 Copy_u8DelayMsec);

void MSTK_voidSetTicksAction(u32 Copy_u8TicksValue, void (*CallbackFunc)(void));

u32 MSTK_u32GetElapsedTime(void);

u32 MSTK_u32GetRemainingTime(void);






#endif
