#pragma once
/*Registro de instrucciones:
* Almacena la instrucción que se está ejecutando actualmente*/
/*JUAN DIEGO*/
#ifndef IR_H
#define IR_H
#include <iostream>
#include <stdio.h>
#include <stdlib.h>
using namespace std;

class IR {
private:
	uint32_t operation;  // Instruction word
	bool valid;           // Indicates if the IR holds a valid instruction

public:
	IR();
	void setOperation(uint32_t operation);
	uint32_t getOperation();
	bool isOperationValid();
};

#endif // !IR_H