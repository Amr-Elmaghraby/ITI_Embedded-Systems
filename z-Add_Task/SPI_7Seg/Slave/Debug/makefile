################################################################################
# Automatically-generated file. Do not edit!
################################################################################

-include ../makefile.init

RM := rm -rf

# All of the sources participating in the build are defined here
-include sources.mk
-include MCAL/WDT/subdir.mk
-include MCAL/USART/subdir.mk
-include MCAL/TIMER/subdir.mk
-include MCAL/SPI/subdir.mk
-include MCAL/GIE/subdir.mk
-include MCAL/EXTI/subdir.mk
-include MCAL/Driver_DIO_V1/subdir.mk
-include MCAL/ADC/subdir.mk
-include HAL/Servo/subdir.mk
-include HAL/LED_Handler/subdir.mk
-include HAL/LCD/subdir.mk
-include HAL/KPD/subdir.mk
-include HAL/7Seg/subdir.mk
-include App/subdir.mk
-include subdir.mk
-include objects.mk

ifneq ($(MAKECMDGOALS),clean)
ifneq ($(strip $(ASM_DEPS)),)
-include $(ASM_DEPS)
endif
ifneq ($(strip $(S_DEPS)),)
-include $(S_DEPS)
endif
ifneq ($(strip $(S_UPPER_DEPS)),)
-include $(S_UPPER_DEPS)
endif
ifneq ($(strip $(C_DEPS)),)
-include $(C_DEPS)
endif
endif

-include ../makefile.defs

# Add inputs and outputs from these tool invocations to the build variables 
LSS += \
Slave.lss \

FLASH_IMAGE += \
Slave.hex \

SIZEDUMMY += \
sizedummy \


# All Target
all: Slave.elf secondary-outputs

# Tool invocations
Slave.elf: $(OBJS) $(USER_OBJS)
	@echo 'Building target: $@'
	@echo 'Invoking: AVR C Linker'
	avr-gcc -Wl,-Map,Slave.map -mmcu=atmega32 -o "Slave.elf" $(OBJS) $(USER_OBJS) $(LIBS)
	@echo 'Finished building target: $@'
	@echo ' '

Slave.lss: Slave.elf
	@echo 'Invoking: AVR Create Extended Listing'
	-avr-objdump -h -S Slave.elf  >"Slave.lss"
	@echo 'Finished building: $@'
	@echo ' '

Slave.hex: Slave.elf
	@echo 'Create Flash image (ihex format)'
	-avr-objcopy -R .eeprom -R .fuse -R .lock -R .signature -O ihex Slave.elf  "Slave.hex"
	@echo 'Finished building: $@'
	@echo ' '

sizedummy: Slave.elf
	@echo 'Invoking: Print Size'
	-avr-size --format=avr --mcu=atmega32 Slave.elf
	@echo 'Finished building: $@'
	@echo ' '

# Other Targets
clean:
	-$(RM) $(FLASH_IMAGE)$(ELFS)$(OBJS)$(ASM_DEPS)$(S_DEPS)$(SIZEDUMMY)$(S_UPPER_DEPS)$(LSS)$(C_DEPS) Slave.elf
	-@echo ' '

secondary-outputs: $(LSS) $(FLASH_IMAGE) $(SIZEDUMMY)

.PHONY: all clean dependents
.SECONDARY:

-include ../makefile.targets
