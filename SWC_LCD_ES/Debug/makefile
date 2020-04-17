################################################################################
# Automatically-generated file. Do not edit!
################################################################################

-include ../makefile.init

RM := rm -rf

# All of the sources participating in the build are defined here
-include sources.mk
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
SWC_LCD_ES.lss \

FLASH_IMAGE += \
SWC_LCD_ES.hex \

SIZEDUMMY += \
sizedummy \


# All Target
all: SWC_LCD_ES.elf secondary-outputs

# Tool invocations
SWC_LCD_ES.elf: $(OBJS) $(USER_OBJS)
	@echo 'Building target: $@'
	@echo 'Invoking: AVR C Linker'
	avr-gcc -Wl,-Map,SWC_LCD_ES.map -mmcu=atmega32 -o "SWC_LCD_ES.elf" $(OBJS) $(USER_OBJS) $(LIBS)
	@echo 'Finished building target: $@'
	@echo ' '

SWC_LCD_ES.lss: SWC_LCD_ES.elf
	@echo 'Invoking: AVR Create Extended Listing'
	-avr-objdump -h -S SWC_LCD_ES.elf  >"SWC_LCD_ES.lss"
	@echo 'Finished building: $@'
	@echo ' '

SWC_LCD_ES.hex: SWC_LCD_ES.elf
	@echo 'Create Flash image (ihex format)'
	-avr-objcopy -R .eeprom -R .fuse -R .lock -R .signature -O ihex SWC_LCD_ES.elf  "SWC_LCD_ES.hex"
	@echo 'Finished building: $@'
	@echo ' '

sizedummy: SWC_LCD_ES.elf
	@echo 'Invoking: Print Size'
	-avr-size --format=avr --mcu=atmega32 SWC_LCD_ES.elf
	@echo 'Finished building: $@'
	@echo ' '

# Other Targets
clean:
	-$(RM) $(FLASH_IMAGE)$(ELFS)$(OBJS)$(ASM_DEPS)$(S_DEPS)$(SIZEDUMMY)$(S_UPPER_DEPS)$(LSS)$(C_DEPS) SWC_LCD_ES.elf
	-@echo ' '

secondary-outputs: $(LSS) $(FLASH_IMAGE) $(SIZEDUMMY)

.PHONY: all clean dependents
.SECONDARY:

-include ../makefile.targets
