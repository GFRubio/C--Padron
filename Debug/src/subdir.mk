################################################################################
# Automatically-generated file. Do not edit!
################################################################################

# Add inputs and outputs from these tool invocations to the build variables 
CPP_SRCS += \
../src/AnoNacimiento.cpp \
../src/Barrio.cpp \
../src/Estudios.cpp \
../src/Gestor.cpp \
../src/ListaVias.cpp \
../src/LugarNacimiento.cpp \
../src/Nacionalidad.cpp \
../src/Utils.cpp \
../src/Via.cpp \
../src/datosdemograficos.cpp \
../src/gestorano.cpp \
../src/gestorestudios.cpp \
../src/gestorlugarnacimiento.cpp \
../src/gestornacionalidad.cpp \
../src/listabarrio.cpp \
../src/pruebaUtils.cpp \
../src/timer.cpp \
../src/ui.cpp 

OBJS += \
./src/AnoNacimiento.o \
./src/Barrio.o \
./src/Estudios.o \
./src/Gestor.o \
./src/ListaVias.o \
./src/LugarNacimiento.o \
./src/Nacionalidad.o \
./src/Utils.o \
./src/Via.o \
./src/datosdemograficos.o \
./src/gestorano.o \
./src/gestorestudios.o \
./src/gestorlugarnacimiento.o \
./src/gestornacionalidad.o \
./src/listabarrio.o \
./src/pruebaUtils.o \
./src/timer.o \
./src/ui.o 

CPP_DEPS += \
./src/AnoNacimiento.d \
./src/Barrio.d \
./src/Estudios.d \
./src/Gestor.d \
./src/ListaVias.d \
./src/LugarNacimiento.d \
./src/Nacionalidad.d \
./src/Utils.d \
./src/Via.d \
./src/datosdemograficos.d \
./src/gestorano.d \
./src/gestorestudios.d \
./src/gestorlugarnacimiento.d \
./src/gestornacionalidad.d \
./src/listabarrio.d \
./src/pruebaUtils.d \
./src/timer.d \
./src/ui.d 


# Each subdirectory must supply rules for building sources it contributes
src/%.o: ../src/%.cpp
	@echo 'Building file: $<'
	@echo 'Invoking: GCC C++ Compiler'
	g++ -O0 -g3 -Wall -c -fmessage-length=0 -MMD -MP -MF"$(@:%.o=%.d)" -MT"$(@:%.o=%.d)" -o "$@" "$<"
	@echo 'Finished building: $<'
	@echo ' '


