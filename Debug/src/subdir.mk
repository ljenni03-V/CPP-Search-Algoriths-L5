################################################################################
# Automatically-generated file. Do not edit!
################################################################################

# Add inputs and outputs from these tool invocations to the build variables 
CC_SRCS += \
../src/CountingSort.cc \
../src/Helper_Func.cc \
../src/InsertionSort.cc 

CPP_SRCS += \
../src/Trial.cpp 

CC_DEPS += \
./src/CountingSort.d \
./src/Helper_Func.d \
./src/InsertionSort.d 

CPP_DEPS += \
./src/Trial.d 

OBJS += \
./src/CountingSort.o \
./src/Helper_Func.o \
./src/InsertionSort.o \
./src/Trial.o 


# Each subdirectory must supply rules for building sources it contributes
src/%.o: ../src/%.cc src/subdir.mk
	@echo 'Building file: $<'
	@echo 'Invoking: GCC C++ Compiler'
	g++ -O0 -g3 -Wall -c -fmessage-length=0 -MMD -MP -MF"$(@:%.o=%.d)" -MT"$@" -o "$@" "$<"
	@echo 'Finished building: $<'
	@echo ' '

src/%.o: ../src/%.cpp src/subdir.mk
	@echo 'Building file: $<'
	@echo 'Invoking: GCC C++ Compiler'
	g++ -O0 -g3 -Wall -c -fmessage-length=0 -MMD -MP -MF"$(@:%.o=%.d)" -MT"$@" -o "$@" "$<"
	@echo 'Finished building: $<'
	@echo ' '


clean: clean-src

clean-src:
	-$(RM) ./src/CountingSort.d ./src/CountingSort.o ./src/Helper_Func.d ./src/Helper_Func.o ./src/InsertionSort.d ./src/InsertionSort.o ./src/Trial.d ./src/Trial.o

.PHONY: clean-src

