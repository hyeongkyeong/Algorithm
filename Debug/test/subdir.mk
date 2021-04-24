################################################################################
# Automatically-generated file. Do not edit!
################################################################################

# Add inputs and outputs from these tool invocations to the build variables 
CPP_SRCS += \
../test/ArrayList_test.cpp \
../test/testmain.cpp 

OBJS += \
./test/ArrayList_test.o \
./test/testmain.o 

CPP_DEPS += \
./test/ArrayList_test.d \
./test/testmain.d 


# Each subdirectory must supply rules for building sources it contributes
test/%.o: ../test/%.cpp
	@echo 'Building file: $<'
	@echo 'Invoking: Cygwin C++ Compiler'
	g++ -DDEBUG -I"D:\workspace-eclipse-cpp\Algorithm\Algorithm" -O0 -g3 -Wall -c -fmessage-length=0 -MMD -MP -MF"$(@:%.o=%.d)" -MT"$(@)" -o "$@" "$<"
	@echo 'Finished building: $<'
	@echo ' '


