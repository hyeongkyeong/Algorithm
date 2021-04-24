################################################################################
# Automatically-generated file. Do not edit!
################################################################################

# Add inputs and outputs from these tool invocations to the build variables 
CPP_SRCS += \
../test_old/ArrayList_test.cpp \
../test_old/BinaryTree_test.cpp \
../test_old/LinkedList_test.cpp \
../test_old/Map_test.cpp \
../test_old/Queue_test.cpp 

OBJS += \
./test_old/ArrayList_test.o \
./test_old/BinaryTree_test.o \
./test_old/LinkedList_test.o \
./test_old/Map_test.o \
./test_old/Queue_test.o 

CPP_DEPS += \
./test_old/ArrayList_test.d \
./test_old/BinaryTree_test.d \
./test_old/LinkedList_test.d \
./test_old/Map_test.d \
./test_old/Queue_test.d 


# Each subdirectory must supply rules for building sources it contributes
test_old/%.o: ../test_old/%.cpp
	@echo 'Building file: $<'
	@echo 'Invoking: Cygwin C++ Compiler'
	g++ -DDEBUG -I"D:\workspace-eclipse-cpp\Algorithm\Algorithm" -O0 -g3 -Wall -c -fmessage-length=0 -MMD -MP -MF"$(@:%.o=%.d)" -MT"$(@)" -o "$@" "$<"
	@echo 'Finished building: $<'
	@echo ' '


