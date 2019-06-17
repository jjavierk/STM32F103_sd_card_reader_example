################################################################################
# Automatically-generated file. Do not edit!
################################################################################

# Add inputs and outputs from these tool invocations to the build variables 
C_SRCS += \
../fatfs/option/ccsbcs.c \
../fatfs/option/syscall.c \
../fatfs/option/unicode.c 

OBJS += \
./fatfs/option/ccsbcs.o \
./fatfs/option/syscall.o \
./fatfs/option/unicode.o 

C_DEPS += \
./fatfs/option/ccsbcs.d \
./fatfs/option/syscall.d \
./fatfs/option/unicode.d 


# Each subdirectory must supply rules for building sources it contributes
fatfs/option/%.o: ../fatfs/option/%.c
	@echo 'Building file: $<'
	@echo 'Invoking: MCU GCC Compiler'
	@echo $(PWD)
	arm-none-eabi-gcc -mcpu=cortex-m3 -mthumb -mfloat-abi=soft -DSTM32 -DSTM32F1 -DSTM32F103RBTx -DNUCLEO_F103RB -DDEBUG -DSTM32F10X_MD -DUSE_STDPERIPH_DRIVER -I"C:/Users/javie/WorkspaceSTM/Env_monitoring/sd_example/Utilities/STM32F1xx-Nucleo" -I"C:/Users/javie/WorkspaceSTM/Env_monitoring/sd_example/StdPeriph_Driver/inc" -I"C:/Users/javie/WorkspaceSTM/Env_monitoring/sd_example/inc" -I"C:/Users/javie/WorkspaceSTM/Env_monitoring/sd_example/CMSIS/device" -I"C:/Users/javie/WorkspaceSTM/Env_monitoring/sd_example/CMSIS/core" -O0 -g3 -Wall -fmessage-length=0 -ffunction-sections -c -MMD -MP -MF"$(@:%.o=%.d)" -MT"$@" -o "$@" "$<"
	@echo 'Finished building: $<'
	@echo ' '


