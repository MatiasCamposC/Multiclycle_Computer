/*Se requiere programar la arquitectura de un computador multiciclo, para esto se va a proporcionar los bloques
a programar estos bloques según la arquitectura deben de conectarse como la arquitectura lo indica en la
figura. Las instrucciones de la arquitectura en el caso de la ALU pueden ser definidas por el programador y las
funciones que hace dicho módulo es sumar, restar, dividir, desplazamiento a la derecha, izquierda o pueden
seguir las instrucciones de una arquitectura mips para esto le proporcionaría dentro de la documentación el
tipo de instrucciones de las cuales puede elegir 5 instrucciones. */

#include <iostream>
#include "ALU.cpp"
#include "ControlUnit.cpp"
#include "Data_Memory.h" // Agregamos la inclusión del encabezado Data_Memory.h
#include "MUX.h" // Agregamos la inclusión del encabezado MUX.h

int main()
{
    CU controlUnit();
    ALU alu;
    Data_Memory dataMemory; // Creamos una instancia de Data_Memory
    MUX mux; // Creamos una instancia de MUX

    uint32_t operation = ADD; // Get instruction from memory or input
    CU::ControlSignals controlSignals = controlUnit().generateControlSignals(operation);

    // Suma de dos valores
    uint32_t a = 10;
    uint32_t b = 20;
    uint32_t result;

    alu.executeOperation(controlSignals, a, b, &result);

    cout << "Resultado de la suma: " << result << endl;
}
