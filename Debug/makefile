################################################################################
# Automatically-generated file. Do not edit!
################################################################################

-include ../makefile.init

RM := rm -rf

# All of the sources participating in the build are defined here
-include sources.mk
-include startup/subdir.mk
-include src/subdir.mk
-include fatfs/option/subdir.mk
-include fatfs/drivers/subdir.mk
-include fatfs/subdir.mk
-include Utilities/STM32F1xx-Nucleo/subdir.mk
-include StdPeriph_Driver/src/subdir.mk
-include subdir.mk
-include objects.mk

ifneq ($(MAKECMDGOALS),clean)
ifneq ($(strip $(S_UPPER_DEPS)),)
-include $(S_UPPER_DEPS)
endif
ifneq ($(strip $(C_DEPS)),)
-include $(C_DEPS)
endif
endif

-include ../makefile.defs

# Add inputs and outputs from these tool invocations to the build variables 

# All Target
all: sd_example.elf

# Tool invocations
sd_example.elf: $(OBJS) $(USER_OBJS) C:\Users\javie\WorkspaceSTM\Env_monitoring\sd_example/LinkerScript.ld
	@echo 'Building target: $@'
	@echo 'Invoking: MCU GCC Linker'
	arm-none-eabi-gcc -mcpu=cortex-m3 -mthumb -mfloat-abi=soft -T"C:/Users/javie/WorkspaceSTM/Env_monitoring/sd_example/LinkerScript.ld" -Wl,-Map=output.map -Wl,--gc-sections -o "sd_example.elf" @"objects.list" $(USER_OBJS) $(LIBS) -lm
	@echo 'Finished building target: $@'
	@echo ' '
	$(MAKE) --no-print-directory post-build

# Other Targets
clean:
	-$(RM) *
	-@echo ' '

post-build:
	-@echo 'Generating binary and Printing size information:'
	arm-none-eabi-objcopy -O binary "sd_example.elf" "sd_example.bin"
	arm-none-eabi-size "sd_example.elf"
	-@echo ' '

.PHONY: all clean dependents
.SECONDARY: post-build

-include ../makefile.targets
