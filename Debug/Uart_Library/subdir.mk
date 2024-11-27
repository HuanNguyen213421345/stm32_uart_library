################################################################################
# Automatically-generated file. Do not edit!
# Toolchain: GNU Tools for STM32 (12.3.rel1)
################################################################################

# Add inputs and outputs from these tool invocations to the build variables 
C_SRCS += \
../Uart_Library/cli_command.c \
../Uart_Library/cli_command_table.c \
../Uart_Library/cli_types.c \
../Uart_Library/get_temperature_ci.c \
../Uart_Library/lm35.c \
../Uart_Library/response_ci.c \
../Uart_Library/set_temperature.c \
../Uart_Library/uart.c 

OBJS += \
./Uart_Library/cli_command.o \
./Uart_Library/cli_command_table.o \
./Uart_Library/cli_types.o \
./Uart_Library/get_temperature_ci.o \
./Uart_Library/lm35.o \
./Uart_Library/response_ci.o \
./Uart_Library/set_temperature.o \
./Uart_Library/uart.o 

C_DEPS += \
./Uart_Library/cli_command.d \
./Uart_Library/cli_command_table.d \
./Uart_Library/cli_types.d \
./Uart_Library/get_temperature_ci.d \
./Uart_Library/lm35.d \
./Uart_Library/response_ci.d \
./Uart_Library/set_temperature.d \
./Uart_Library/uart.d 


# Each subdirectory must supply rules for building sources it contributes
Uart_Library/%.o Uart_Library/%.su Uart_Library/%.cyclo: ../Uart_Library/%.c Uart_Library/subdir.mk
	arm-none-eabi-gcc "$<" -mcpu=cortex-m3 -std=gnu11 -g3 -DDEBUG -DUSE_HAL_DRIVER -DSTM32F103xB -c -I../Core/Inc -I../Drivers/STM32F1xx_HAL_Driver/Inc/Legacy -I../Drivers/STM32F1xx_HAL_Driver/Inc -I../Drivers/CMSIS/Device/ST/STM32F1xx/Include -I../Drivers/CMSIS/Include -I"C:/Users/ASUS/STM32CubeIDE/workspace_1.16.1/UART_Library/Uart_Library" -O0 -ffunction-sections -fdata-sections -Wall -fstack-usage -fcyclomatic-complexity -MMD -MP -MF"$(@:%.o=%.d)" -MT"$@" --specs=nano.specs -mfloat-abi=soft -mthumb -o "$@"

clean: clean-Uart_Library

clean-Uart_Library:
	-$(RM) ./Uart_Library/cli_command.cyclo ./Uart_Library/cli_command.d ./Uart_Library/cli_command.o ./Uart_Library/cli_command.su ./Uart_Library/cli_command_table.cyclo ./Uart_Library/cli_command_table.d ./Uart_Library/cli_command_table.o ./Uart_Library/cli_command_table.su ./Uart_Library/cli_types.cyclo ./Uart_Library/cli_types.d ./Uart_Library/cli_types.o ./Uart_Library/cli_types.su ./Uart_Library/get_temperature_ci.cyclo ./Uart_Library/get_temperature_ci.d ./Uart_Library/get_temperature_ci.o ./Uart_Library/get_temperature_ci.su ./Uart_Library/lm35.cyclo ./Uart_Library/lm35.d ./Uart_Library/lm35.o ./Uart_Library/lm35.su ./Uart_Library/response_ci.cyclo ./Uart_Library/response_ci.d ./Uart_Library/response_ci.o ./Uart_Library/response_ci.su ./Uart_Library/set_temperature.cyclo ./Uart_Library/set_temperature.d ./Uart_Library/set_temperature.o ./Uart_Library/set_temperature.su ./Uart_Library/uart.cyclo ./Uart_Library/uart.d ./Uart_Library/uart.o ./Uart_Library/uart.su

.PHONY: clean-Uart_Library

