################################################################################
# Automatically-generated file. Do not edit!
# Toolchain: GNU Tools for STM32 (11.3.rel1)
################################################################################

# Add inputs and outputs from these tool invocations to the build variables 
S_SRCS += \
../Core/Startup/startup_stm32f446retx.s 

OBJS += \
./Core/Startup/startup_stm32f446retx.o 

S_DEPS += \
./Core/Startup/startup_stm32f446retx.d 


# Each subdirectory must supply rules for building sources it contributes
Core/Startup/%.o: ../Core/Startup/%.s Core/Startup/subdir.mk
	arm-none-eabi-gcc -mcpu=cortex-m4 -g3 -DDEBUG -c -I"/home/manjunath/stm/Segger_Rtos/Third_Party/FreeRTOS/Config" -I"/home/manjunath/stm/Segger_Rtos/Third_Party/FreeRTOS/include" -I"/home/manjunath/stm/Segger_Rtos/Third_Party/FreeRTOS/portable/GCC/ARM_CM4F" -I"/home/manjunath/stm/Segger_Rtos/Third_Party/SEGGER/Config" -I"/home/manjunath/stm/Segger_Rtos/Third_Party/SEGGER/OS" -I"/home/manjunath/stm/Segger_Rtos/Third_Party/SEGGER/SEGGER" -x assembler-with-cpp -MMD -MP -MF"$(@:%.o=%.d)" -MT"$@" --specs=nano.specs -mfpu=fpv4-sp-d16 -mfloat-abi=hard -mthumb -o "$@" "$<"

clean: clean-Core-2f-Startup

clean-Core-2f-Startup:
	-$(RM) ./Core/Startup/startup_stm32f446retx.d ./Core/Startup/startup_stm32f446retx.o

.PHONY: clean-Core-2f-Startup

