#ifndef M_SYS_INT_H
#define M_SYS_INT_H

  extern u8 user1 ;
  extern  u8 user2  ;
  extern u8 user3  ;







void SYS_INIT(void);


void USER1(void);
void USER2(void);
void USER3(void);


void MUART_RUNNABLE (void);
void EXTI_INIT(void);
void ADMIN_STATE (void);



void ENTERY_LED_ON (void);
void ENTERY_LED_OFF (void);
void EXIT_LED_ON (void);
void EXIT_LED_OFF (void);







#endif
