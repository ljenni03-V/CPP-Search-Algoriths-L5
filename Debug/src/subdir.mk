################################################################################
# Automatically-generated file. Do not edit!
################################################################################

# Add inputs and outputs from these tool invocations to the build variables 
CC_SRCS += \
../src/ASORT.cc \
../src/BSORT.cc \
../src/Helper_Func.cc 

CPP_SRCS += \
../src/Trial.cpp 

CC_DEPS += \
./src/ASORT.d \
./src/BSORT.d \
./src/Helper_Func.d 

CPP_DEPS += \
./src/Trial.d 

OBJS += \
./src/ASORT.o \
./src/BSORT.o \
./src/Helper_Func.o \
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
	-$(RM) ./src/ASORT.d ./src/ASORT.o ./src/BSORT.d ./src/BSORT.o ./src/Helper_Func.d ./src/Helper_Func.o ./src/Trial.d ./src/Trial.o

.PHONY: clean-src

