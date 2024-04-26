#pragma once
/*Unidad de control:
* Se encarga de leer la siguiente instrucción de la memoria, decodificarla y generar las señales
de control para el resto de la arquitectura*/
/*JUAN DIEGO*/
#ifndef CU_H
#define CU_H
#include <iostream>
#include <stdio.h>
#include <stdlib.h>


using namespace std;

enum ControlSignal {
    // DATAPATH SIGNALS (e.g., registers, ALU)
    REG_A_ENABLE,
    REG_B_ENABLE,
    ALU_ENABLE,
    LOAD_ENABLE,
    STORE_ENABLE,
    // MEMORY ACCESS SIGNALS
    READ_MEMORY,
    WRITE_MEMORY,
};

class CU {
public:
    CU();

    struct ControlSignals {
        bool regAEnable;
        bool regBEnable;
        bool aluEnable;
        // ... other control signals
    };

    ControlSignals generateControlSignals(uint32_t operation);

private:

};

#endif // !CU_H
