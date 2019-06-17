################################################################################
# Automatically-generated file. Do not edit!
################################################################################

# Add inputs and outputs from these tool invocations to the build variables 
C_SRCS += \
../src/main.c \
../src/stm_drivers.c \
../src/syscalls.c \
../src/system_stm32f10x.c \
../src/tm_delay.c \
../src/tm_stm32f4_fatfs.c 

OBJS += \
./src/main.o \
./src/stm_drivers.o \
./src/syscalls.o \
./src/system_stm32f10x.o \
./src/tm_delay.o \
./src/tm_stm32f4_fatfs.o 

C_DEPS += \
./src/main.d \
./src/stm_drivers.d \
./src/syscalls.d \
./src/system_stm32f10x.d \
./src/tm_delay.d \
./src/tm_stm32f4_fatfs.d 


# Each subdirectory must supply rules for building sources it contributes
src/%.o: ../src/%.c
	@echo 'Building file: $<'
	@echo 'Invoking: MCU GCC Compiler'
	@echo $(PWD)
	arm-none-eabi-gcc -mcpu=cortex-m3 -mthumb -mfloat-abi=soft -DSTM32 -DSTM32F1 -DSTM32F103RBTx -DNUCLEO_F103RB -DDEBUG -DSTM32F10X_MD -DUSE_STDPERIPH_DRIVER -I"C:/Users/javie/WorkspaceSTM/Env_monitoring/sd_example/Utilities/STM32F1xx-Nucleo" -I"C:/Users/javie/WorkspaceSTM/Env_monitoring/sd_example/StdPeriph_Driver/inc" -I"C:/Users/javie/WorkspaceSTM/Env_monitoring/sd_example/inc" -I"C:/Users/javie/WorkspaceSTM/Env_monitoring/sd_example/CMSIS/device" -I"C:/Users/javie/WorkspaceSTM/Env_monitoring/sd_example/CMSIS/core" -O0 -g3 -Wall -fmessage-length=0 -ffunction-sections -c -MMD -MP -MF"$(@:%.o=%.d)" -MT"$@" -o "$@" "$<"
	@echo 'Finished building: $<'
	@echo ' '


