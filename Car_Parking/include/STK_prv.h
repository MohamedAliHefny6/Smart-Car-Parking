#ifndef STK_PRV_H
#define STK_PRV_H


#define   MSTK_BASE_ADDRESS     (0xE000E010)


typedef struct
{
   u32 CTRL;
   u32 LOAD;
   u32 VAL;
   u32 CALIB;
}STK_t;


#define   MSTK_REG              ((volatile STK_t*)(MSTK_BASE_ADDRESS))


#define STK_ENABLE  0
#define TICKINT		1
#define CLKSOURCE	2
#define COUNTFLAG	16



#endif
