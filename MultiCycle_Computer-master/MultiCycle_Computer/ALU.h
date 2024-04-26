#pragma once
/*Unidad de l�gica y aritm�tica:
Se encarga de realizar operaciones matem�ticas y l�gicas sobre los datos*/
#ifndef ALU_H
#define ALU_H
#include <iostream>
#include <stdio.h>
#include <stdlib.h>
#include "Operations.h"
#include "ControlUnit.h"

using namespace std;

class ALU {
public:
	//Constructores
	ALU();
	//uint32_t: es un tipo de dato entero sin signo de 32 bits, alamacena valores entre 0 y 2^32 - 1 (4.294.967.295)
	void executeOperation(CU::ControlSignals controlSignals, uint32_t a, uint32_t b, uint32_t* result);
	Operation decodeInstruction(uint32_t instructionCode);
private:

};
#endif // !ALU_H