################################################################################
# Automatically-generated file. Do not edit!
################################################################################

# Add inputs and outputs from these tool invocations to the build variables 
C_SRCS += \
../src/Keypad_prg.c \
../src/LCD.c \
../src/LEDMATRIX_prg.c \
../src/MEXTI_prg.c \
../src/MGPIO_prg.c \
../src/MNVIC_prg.c \
../src/MRCC_prg.c \
../src/MUART_prg.c \
../src/SPI_prg.c \
../src/STK_prg.c \
../src/SYS_INIT.c \
../src/Servo_motor.c \
../src/TFT_prg.c \
../src/main.c \
../src/stm32f4xx_hal_msp.c 

OBJS += \
./src/Keypad_prg.o \
./src/LCD.o \
./src/LEDMATRIX_prg.o \
./src/MEXTI_prg.o \
./src/MGPIO_prg.o \
./src/MNVIC_prg.o \
./src/MRCC_prg.o \
./src/MUART_prg.o \
./src/SPI_prg.o \
./src/STK_prg.o \
./src/SYS_INIT.o \
./src/Servo_motor.o \
./src/TFT_prg.o \
./src/main.o \
./src/stm32f4xx_hal_msp.o 

C_DEPS += \
./src/Keypad_prg.d \
./src/LCD.d \
./src/LEDMATRIX_prg.d \
./src/MEXTI_prg.d \
./src/MGPIO_prg.d \
./src/MNVIC_prg.d \
./src/MRCC_prg.d \
./src/MUART_prg.d \
./src/SPI_prg.d \
./src/STK_prg.d \
./src/SYS_INIT.d \
./src/Servo_motor.d \
./src/TFT_prg.d \
./src/main.d \
./src/stm32f4xx_hal_msp.d 


# Each subdirectory must supply rules for building sources it contributes
src/%.o: ../src/%.c
	@echo 'Building file: $<'
	@echo 'Invoking: Cross ARM GNU C Compiler'
	arm-none-eabi-gcc -mcpu=cortex-m4 -mthumb -mfloat-abi=soft -Og -fmessage-length=0 -fsigned-char -ffunction-sections -fdata-sections -ffreestanding -fno-move-loop-invariants -Wall -Wextra  -g3 -DDEBUG -DUSE_FULL_ASSERT -DTRACE -DOS_USE_TRACE_SEMIHOSTING_DEBUG -DSTM32F401xC -DUSE_HAL_DRIVER -DHSE_VALUE=25000000 -I"../include" -I"../system/include" -I"../system/include/cmsis" -I"../system/include/stm32f4-hal" -std=gnu11 -MMD -MP -MF"$(@:%.o=%.d)" -MT"$(@)" -c -o "$@" "$<"
	@echo 'Finished building: $<'
	@echo ' '

src/stm32f4xx_hal_msp.o: ../src/stm32f4xx_hal_msp.c
	@echo 'Building file: $<'
	@echo 'Invoking: Cross ARM GNU C Compiler'
	arm-none-eabi-gcc -mcpu=cortex-m4 -mthumb -mfloat-abi=soft -Og -fmessage-length=0 -fsigned-char -ffunction-sections -fdata-sections -ffreestanding -fno-move-loop-invariants -Wall -Wextra  -g3 -DDEBUG -DUSE_FULL_ASSERT -DTRACE -DOS_USE_TRACE_SEMIHOSTING_DEBUG -DSTM32F401xC -DUSE_HAL_DRIVER -DHSE_VALUE=25000000 -I"../include" -I"../system/include" -I"../system/include/cmsis" -I"../system/include/stm32f4-hal" -std=gnu11 -Wno-missing-prototypes -Wno-missing-declarations -MMD -MP -MF"$(@:%.o=%.d)" -MT"src/stm32f4xx_hal_msp.d" -c -o "$@" "$<"
	@echo 'Finished building: $<'
	@echo ' '


