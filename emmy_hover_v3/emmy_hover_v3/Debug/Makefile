################################################################################
# Automatically-generated file. Do not edit!
################################################################################

SHELL := cmd.exe
RM := rm -rf

USER_OBJS :=

LIBS := 
PROJ := 

O_SRCS := 
C_SRCS := 
S_SRCS := 
S_UPPER_SRCS := 
OBJ_SRCS := 
ASM_SRCS := 
PREPROCESSING_SRCS := 
OBJS := 
OBJS_AS_ARGS := 
C_DEPS := 
C_DEPS_AS_ARGS := 
EXECUTABLES := 
OUTPUT_FILE_PATH :=
OUTPUT_FILE_PATH_AS_ARGS :=
AVR_APP_PATH :=$$$AVR_APP_PATH$$$
QUOTE := "
ADDITIONAL_DEPENDENCIES:=
OUTPUT_FILE_DEP:=
LIB_DEP:=

# Every subdirectory with source files must be described here
SUBDIRS :=  \
../cmsis/ \
../cmsis/linkerScripts/ \
../cmsis/src/


# Add inputs and outputs from these tool invocations to the build variables 
C_SRCS +=  \
../cmsis/src/startup_sam3xa.c \
../cmsis/src/system_sam3xa.c \
../emmy_hover_v3.cpp


PREPROCESSING_SRCS += 


ASM_SRCS += 


OBJS +=  \
cmsis/src/startup_sam3xa.o \
cmsis/src/system_sam3xa.o \
emmy_hover_v3.o

OBJS_AS_ARGS +=  \
cmsis/src/startup_sam3xa.o \
cmsis/src/system_sam3xa.o \
emmy_hover_v3.o

C_DEPS +=  \
cmsis/src/startup_sam3xa.d \
cmsis/src/system_sam3xa.d \
emmy_hover_v3.d

C_DEPS_AS_ARGS +=  \
cmsis/src/startup_sam3xa.d \
cmsis/src/system_sam3xa.d \
emmy_hover_v3.d

OUTPUT_FILE_PATH +=emmy_hover_v3.elf

OUTPUT_FILE_PATH_AS_ARGS +=emmy_hover_v3.elf

ADDITIONAL_DEPENDENCIES:=

OUTPUT_FILE_DEP:= ./makedep.mk

LIB_DEP+= 

# AVR32/GNU C Compiler







cmsis/src/%.o: ../cmsis/src/%.c
	@echo Building file: $<
	@echo Invoking: ARM/GNU C Compiler : 4.7.3
	$(QUOTE)C:\Program Files (x86)\Atmel\Atmel Toolchain\ARM GCC\Native\4.7.3.1029\arm-gnu-toolchain\bin\arm-none-eabi-gcc.exe$(QUOTE)  -mthumb -D__SAM3X8E__ -DDEBUG  -I"$(ToolchainDir)\..\..\CMSIS_Atmel" -I"$(ToolchainDir)\..\..\CMSIS_Atmel\CMSIS\Include" -I"$(ToolchainDir)\..\..\CMSIS_Atmel\Device\ATMEL" -I"$(ToolchainDir)\..\..\CMSIS_Atmel\Device\ATMEL\sam3xa\include"  -O1 -ffunction-sections -mlong-calls -g3 -Wall -mcpu=cortex-m3 -c -std=gnu99 -MD -MP -MF "$(@:%.o=%.d)" -MT"$(@:%.o=%.d)" -MT"$(@:%.o=%.o)"   -o "$@" "$<"
	@echo Finished building: $<
	

./%.o: .././%.cpp
	@echo Building file: $<
	@echo Invoking: ARM/GNU C Compiler : 4.7.3
	$(QUOTE)C:\Program Files (x86)\Atmel\Atmel Toolchain\ARM GCC\Native\4.7.3.1029\arm-gnu-toolchain\bin\arm-none-eabi-g++.exe$(QUOTE) -mthumb -D__SAM3X8E__ -DDEBUG  -I"$(ToolchainDir)\..\..\CMSIS_Atmel" -I"$(ToolchainDir)\..\..\CMSIS_Atmel\CMSIS\Include" -I"$(ToolchainDir)\..\..\CMSIS_Atmel\Device\ATMEL" -I"$(ToolchainDir)\..\..\CMSIS_Atmel\Device\ATMEL\sam3xa\include"  -O1 -ffunction-sections -fno-rtti -fno-exceptions -mlong-calls -g3 -Wall -mcpu=cortex-m3 -c -MD -MP -MF "$(@:%.o=%.d)" -MT"$(@:%.o=%.d)" -MT"$(@:%.o=%.o)"   -o "$@" "$<"
	@echo Finished building: $<
	



# AVR32/GNU Preprocessing Assembler



# AVR32/GNU Assembler




ifneq ($(MAKECMDGOALS),clean)
ifneq ($(strip $(C_DEPS)),)
-include $(C_DEPS)
endif
endif

# Add inputs and outputs from these tool invocations to the build variables 

# All Target
all: $(OUTPUT_FILE_PATH) $(ADDITIONAL_DEPENDENCIES)

$(OUTPUT_FILE_PATH): $(OBJS) $(USER_OBJS) $(OUTPUT_FILE_DEP) $(LIB_DEP)
	@echo Building target: $@
	@echo Invoking: ARM/GNU Linker : 4.7.3
	$(QUOTE)C:\Program Files (x86)\Atmel\Atmel Toolchain\ARM GCC\Native\4.7.3.1029\arm-gnu-toolchain\bin\arm-none-eabi-g++.exe$(QUOTE) -o$(OUTPUT_FILE_PATH_AS_ARGS) $(OBJS_AS_ARGS) $(USER_OBJS) $(LIBS) -mthumb -Wl,-Map="emmy_hover_v3.map" -Wl,--start-group -lm  -Wl,--end-group -L"../cmsis/linkerScripts"  -Wl,--gc-sections -mcpu=cortex-m3 -Tsam3x8e_flash.ld 
	@echo Finished building target: $@
	"C:\Program Files (x86)\Atmel\Atmel Toolchain\ARM GCC\Native\4.7.3.1029\arm-gnu-toolchain\bin\arm-none-eabi-objcopy.exe" -O binary "emmy_hover_v3.elf" "emmy_hover_v3.bin"
	"C:\Program Files (x86)\Atmel\Atmel Toolchain\ARM GCC\Native\4.7.3.1029\arm-gnu-toolchain\bin\arm-none-eabi-objcopy.exe" -O ihex -R .eeprom -R .fuse -R .lock -R .signature  "emmy_hover_v3.elf" "emmy_hover_v3.hex"
	"C:\Program Files (x86)\Atmel\Atmel Toolchain\ARM GCC\Native\4.7.3.1029\arm-gnu-toolchain\bin\arm-none-eabi-objcopy.exe" -j .eeprom --set-section-flags=.eeprom=alloc,load --change-section-lma .eeprom=0 --no-change-warnings -O binary "emmy_hover_v3.elf" "emmy_hover_v3.eep" || exit 0
	"C:\Program Files (x86)\Atmel\Atmel Toolchain\ARM GCC\Native\4.7.3.1029\arm-gnu-toolchain\bin\arm-none-eabi-objdump.exe" -h -S "emmy_hover_v3.elf" > "emmy_hover_v3.lss"
	"C:\Program Files (x86)\Atmel\Atmel Toolchain\ARM GCC\Native\4.7.3.1029\arm-gnu-toolchain\bin\arm-none-eabi-objcopy.exe" -O srec -R .eeprom -R .fuse -R .lock -R .signature  "emmy_hover_v3.elf" "emmy_hover_v3.srec"
	"C:\Program Files (x86)\Atmel\Atmel Toolchain\ARM GCC\Native\4.7.3.1029\arm-gnu-toolchain\bin\arm-none-eabi-size.exe" "emmy_hover_v3.elf"
	
	





# Other Targets
clean:
	-$(RM) $(OBJS_AS_ARGS) $(EXECUTABLES)  
	-$(RM) $(C_DEPS_AS_ARGS)   
	rm -rf "emmy_hover_v3.elf" "emmy_hover_v3.a" "emmy_hover_v3.hex" "emmy_hover_v3.bin" "emmy_hover_v3.lss" "emmy_hover_v3.eep" "emmy_hover_v3.map" "emmy_hover_v3.srec"
	