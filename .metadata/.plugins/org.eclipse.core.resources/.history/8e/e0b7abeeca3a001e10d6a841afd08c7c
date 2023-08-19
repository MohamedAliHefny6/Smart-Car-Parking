#ifndef	MNVIC_INT_H
#define MNVIC_INT_H



typedef enum
{
	MNVIC_GROUPMODE_G16S0 =3 ,
	MNVIC_GROUPMODE_G8S2,
	MNVIC_GROUPMODE_G4S4,
	MNVIC_GROUPMODE_G2S8,
	MNVIC_GROUPMODE_G0S16,
}MNVIC_GroupMode_t;

void MNVIC_EnableInterrupt(u8 Copy_u8IntPos);
void MNVIC_DisablePerInt(u8 Copy_u8IntPos);

void MNVIC_EnableInterruptPending(u8 Copy_u8IntPos);
void MNVIC_DisablePendingFlag(u8 Copy_u8IntPos);

u8	 MNVIC_u8IsInterruptActive(u8 Copy_u8IntPos);

void MNVIC_SetIntterruptPriority(u8 Copy_u8IntPos, u8 Copy_u8GroupNum, u8 Copy_u8SubGroupNum);
void MNVIC_SetIntterruptGroupMode( MNVIC_GroupMode_t Copy_uaddtGroupMode);



#endif
