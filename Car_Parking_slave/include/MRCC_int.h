#ifndef MRCC_INT_H
#define MRCC_INT_H


/*Buses options*/
#define RCC_AHB1    0
#define RCC_AHB2	1
#define RCC_APB1	2
#define RCC_APB2    3

/* Macros or Enum
typedef enum{
   AHB1 = 0,
   AHB2,
   ABP1,
   ABP2,
}MRCC_BUS;
*/

/* AHB1 Peripheral */
#define   AHB1ENR_GPIOAEN      0
#define   AHB1ENR_GPIOBEN      1
#define   AHB1ENR_GPIOCEN      2
#define   AHB1ENR_GPIODEN      3
#define   AHB1ENR_GPIOEEN      4
#define   AHB1ENR_GPIOHEN      7
#define   AHB1ENR_CRCEN        12
#define   AHB1ENR_DMA1EN       21
#define   AHB1ENR_DMA2EN       22


/* AHB Prescaler */
#define PRESCALER_NOT_DIV          0
#define PRESCALER_DIV_2            1
#define PRESCALER_DIV_4            2
#define PRESCALER_DIV_8            3
#define PRESCALER_DIV_16           4
#define PRESCALER_DIV_64           5
#define PRESCALER_DIV_128          6
#define PRESCALER_DIV_256          7
#define PRESCALER_DIV_512          8


/* AHB2 Peripheral */
#define   AHB2ENR_OTGFSEN      7


/* APB1 Peripheral */
#define   APB1ENR_TIM2EN       0
#define   APB1ENR_TIM3EN       1
#define   APB1ENR_TIM4EN       2
#define   APB1ENR_TIM5EN       3
#define   APB1ENR_WWDGEN       11
#define   APB1ENR_SPI2EN       14
#define   APB1ENR_SPI3EN       15
#define   APB1ENR_USART2EN     17
#define   APB1ENR_I2C1EN       21
#define   APB1ENR_I2C2EN       22
#define   APB1ENR_I2C3EN       23
#define   APB1ENR_PWREN        28


/* APB2 Peripheral */
#define   APB2ENR_TIM1EN       0
#define   APB2ENR_USART1EN     4
#define   APB2ENR_USART6EN     5
#define   APB2ENR_ADC1EN       8
#define   APB2ENR_SDIOEN       11
#define   APB2ENR_SPI1EN       12
#define   APB2ENR_SPI4EN       13
#define   APB2ENR_SYSCFGEN     14
#define   APB2ENR_TIM9EN       16
#define   APB2ENR_TIM10EN      17
#define   APB2ENR_TIM11EN      18


void MRCC_InitSysClk(void);

void MRCC_vidEnable_Peripheral(u8 BusId, u8 PeripheralId);

void MRCC_vidDisable_Peripheral(u8 BusId, u8 PeripheralId);





#endif
