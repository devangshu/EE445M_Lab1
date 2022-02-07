################################################################################
# Automatically-generated file. Do not edit!
################################################################################

CG_TOOL_ROOT := /Applications/ti/ccs1110/ccs/tools/compiler/ti-cgt-arm_20.2.5.LTS

GEN_OPTS__FLAG := 
GEN_CMDS__FLAG := 

ORDERED_OBJS += \
"./Lab1.obj" \
"./tm4c123gh6pm_startup_ccs.obj" \
"./src/ADC.obj" \
"./src/ADCSWTrigger.obj" \
"./src/ADCT0ATrigger.obj" \
"./src/CortexM.obj" \
"./src/IRDistance.obj" \
"./src/Interpreter.obj" \
"./src/LPF.obj" \
"./src/LaunchPad.obj" \
"./src/OS.obj" \
"./src/PLL.obj" \
"./src/ST7735.obj" \
"./src/Timer1A.obj" \
"./src/Timer4A.obj" \
"./src/UART0int.obj" \
"./src/Unified_Port_Init.obj" \
"./src/WTimer0A.obj" \
"./src/eDisk.obj" \
"./src/eFile.obj" \
"../tm4c123gh6pm.cmd" \
$(GEN_CMDS__FLAG) \
-llibc.a \

-include ../makefile.init

RM := rm -rf
RMDIR := rm -rf

# All of the sources participating in the build are defined here
-include sources.mk
-include subdir_vars.mk
-include src/subdir_vars.mk
-include subdir_rules.mk
-include src/subdir_rules.mk
-include objects.mk

ifneq ($(MAKECMDGOALS),clean)
ifneq ($(strip $(C55_DEPS)),)
-include $(C55_DEPS)
endif
ifneq ($(strip $(C_UPPER_DEPS)),)
-include $(C_UPPER_DEPS)
endif
ifneq ($(strip $(S67_DEPS)),)
-include $(S67_DEPS)
endif
ifneq ($(strip $(S62_DEPS)),)
-include $(S62_DEPS)
endif
ifneq ($(strip $(S_DEPS)),)
-include $(S_DEPS)
endif
ifneq ($(strip $(OPT_DEPS)),)
-include $(OPT_DEPS)
endif
ifneq ($(strip $(C??_DEPS)),)
-include $(C??_DEPS)
endif
ifneq ($(strip $(ASM_UPPER_DEPS)),)
-include $(ASM_UPPER_DEPS)
endif
ifneq ($(strip $(S??_DEPS)),)
-include $(S??_DEPS)
endif
ifneq ($(strip $(C64_DEPS)),)
-include $(C64_DEPS)
endif
ifneq ($(strip $(CXX_DEPS)),)
-include $(CXX_DEPS)
endif
ifneq ($(strip $(S64_DEPS)),)
-include $(S64_DEPS)
endif
ifneq ($(strip $(INO_DEPS)),)
-include $(INO_DEPS)
endif
ifneq ($(strip $(CLA_DEPS)),)
-include $(CLA_DEPS)
endif
ifneq ($(strip $(S55_DEPS)),)
-include $(S55_DEPS)
endif
ifneq ($(strip $(SV7A_DEPS)),)
-include $(SV7A_DEPS)
endif
ifneq ($(strip $(C62_DEPS)),)
-include $(C62_DEPS)
endif
ifneq ($(strip $(C67_DEPS)),)
-include $(C67_DEPS)
endif
ifneq ($(strip $(PDE_DEPS)),)
-include $(PDE_DEPS)
endif
ifneq ($(strip $(K_DEPS)),)
-include $(K_DEPS)
endif
ifneq ($(strip $(C_DEPS)),)
-include $(C_DEPS)
endif
ifneq ($(strip $(CC_DEPS)),)
-include $(CC_DEPS)
endif
ifneq ($(strip $(C++_DEPS)),)
-include $(C++_DEPS)
endif
ifneq ($(strip $(C43_DEPS)),)
-include $(C43_DEPS)
endif
ifneq ($(strip $(S43_DEPS)),)
-include $(S43_DEPS)
endif
ifneq ($(strip $(ASM_DEPS)),)
-include $(ASM_DEPS)
endif
ifneq ($(strip $(S_UPPER_DEPS)),)
-include $(S_UPPER_DEPS)
endif
ifneq ($(strip $(CPP_DEPS)),)
-include $(CPP_DEPS)
endif
ifneq ($(strip $(SA_DEPS)),)
-include $(SA_DEPS)
endif
endif

-include ../makefile.defs

# Add inputs and outputs from these tool invocations to the build variables 
EXE_OUTPUTS += \
RTOS_sp22_lab1.out \

EXE_OUTPUTS__QUOTED += \
"RTOS_sp22_lab1.out" \

BIN_OUTPUTS += \
RTOS_sp22_lab1.hex \

BIN_OUTPUTS__QUOTED += \
"RTOS_sp22_lab1.hex" \


# All Target
all: $(OBJS) $(CMD_SRCS) $(GEN_CMDS)
	@$(MAKE) --no-print-directory -Onone "RTOS_sp22_lab1.out"

# Tool invocations
RTOS_sp22_lab1.out: $(OBJS) $(CMD_SRCS) $(GEN_CMDS)
	@echo 'Building target: "$@"'
	@echo 'Invoking: Arm Linker'
	"/Applications/ti/ccs1110/ccs/tools/compiler/ti-cgt-arm_20.2.5.LTS/bin/armcl" -mv7M4 --code_state=16 --float_support=FPv4SPD16 -me --define=ccs="ccs" --define=PART_TM4C123GH6PM -g --gcc --diag_warning=225 --diag_wrap=off --display_error_number --abi=eabi -z -m"RTOS_sp22_lab1.map" --heap_size=0 --stack_size=512 -i"/Applications/ti/ccs1110/ccs/tools/compiler/ti-cgt-arm_20.2.5.LTS/lib" -i"/Applications/ti/ccs1110/ccs/tools/compiler/ti-cgt-arm_20.2.5.LTS/include" --reread_libs --diag_wrap=off --display_error_number --warn_sections --xml_link_info="RTOS_sp22_lab1_linkInfo.xml" --rom_model -o "RTOS_sp22_lab1.out" $(ORDERED_OBJS)
	@echo 'Finished building target: "$@"'
	@echo ' '

RTOS_sp22_lab1.hex: $(EXE_OUTPUTS)
	@echo 'Building secondary target: "$@"'
	@echo 'Invoking: Arm Hex Utility'
	"/Applications/ti/ccs1110/ccs/tools/compiler/ti-cgt-arm_20.2.5.LTS/bin/armhex" --diag_wrap=off -o "RTOS_sp22_lab1.hex" $(EXE_OUTPUTS__QUOTED)
	@echo 'Finished building secondary target: "$@"'
	@echo ' '

# Other Targets
clean:
	-$(RM) $(BIN_OUTPUTS__QUOTED)$(EXE_OUTPUTS__QUOTED)
	-$(RM) "Lab1.obj" "tm4c123gh6pm_startup_ccs.obj" "src/ADC.obj" "src/ADCSWTrigger.obj" "src/ADCT0ATrigger.obj" "src/CortexM.obj" "src/IRDistance.obj" "src/Interpreter.obj" "src/LPF.obj" "src/LaunchPad.obj" "src/OS.obj" "src/PLL.obj" "src/ST7735.obj" "src/Timer1A.obj" "src/Timer4A.obj" "src/UART0int.obj" "src/Unified_Port_Init.obj" "src/WTimer0A.obj" "src/eDisk.obj" "src/eFile.obj" 
	-$(RM) "Lab1.d" "tm4c123gh6pm_startup_ccs.d" "src/ADC.d" "src/ADCSWTrigger.d" "src/ADCT0ATrigger.d" "src/CortexM.d" "src/IRDistance.d" "src/Interpreter.d" "src/LPF.d" "src/LaunchPad.d" "src/OS.d" "src/PLL.d" "src/ST7735.d" "src/Timer1A.d" "src/Timer4A.d" "src/UART0int.d" "src/Unified_Port_Init.d" "src/WTimer0A.d" "src/eDisk.d" "src/eFile.d" 
	-@echo 'Finished clean'
	-@echo ' '

.PHONY: all clean dependents
.SECONDARY:

-include ../makefile.targets

