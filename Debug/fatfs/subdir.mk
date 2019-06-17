################################################################################
# Automatically-generated file. Do not edit!
################################################################################

# Add inputs and outputs from these tool invocations to the build variables 
C_SRCS += \
../fatfs/diskio.c \
../fatfs/ff.c 

OBJS += \
./fatfs/diskio.o \
./fatfs/ff.o 

C_DEPS += \
./fatfs/diskio.d \
./fatfs/ff.d 


# Each subdirectory must supply rules for building sources it contributes
fatfs/%.o: ../fatfs/%.c
	@echo 'Building file: $<'
	@echo 'Invoking: MCU GCC Compiler'
	@echo $(PWD)
	arm-none-eabi-gcc -mcpu=cortex-m3 -mthumb -mfloat-abi=soft -DSTM32 -DSTM32F1 -DSTM32F103RBTx -DNUCLEO_F103RB -DDEBUG -DSTM32F10X_MD -DUSE_STDPERIPH_DRIVER -I"C:/Users/javie/WorkspaceSTM/Env_monitoring/sd_example/Utilities/STM32F1xx-Nucleo" -I"C:/Users/javie/WorkspaceSTM/Env_monitoring/sd_example/StdPeriph_Driver/inc" -I"C:/Users/javie/WorkspaceSTM/Env_monitoring/sd_example/inc" -I"C:/Users/javie/WorkspaceSTM/Env_monitoring/sd_example/CMSIS/device" -I"C:/Users/javie/WorkspaceSTM/Env_monitoring/sd_example/CMSIS/core" -O0 -g3 -Wall -fmessage-length=0 -ffunction-sections -c -MMD -MP -MF"$(@:%.o=%.d)" -MT"$@" -o "$@" "$<"
	@echo 'Finished building: $<'
	@echo ' '


