#pragma once
/*Unidad de l�gica y aritm�tica:
Se encarga de realizar operaciones matem�ticas y l�gicas sobre los datos*/
#ifndef OPERATIONS_H
#define OPERATIONS_H
#include <iostream>
#include <stdio.h>
#include <stdlib.h>
using namespace std;

// Definici�n de las operaciones
enum Operation {
	//Suma de dos valores y almacena el resultado en un registro
	ADD,
	//Resta dos valores y almacena el resultado en un registro
	SUB,
	//Divide dos valores y almacena el resultado en un registro
	DIV,
	//Desplazamiento a la derecha
	MOV_RIGHT,
	//Desplazamiento a la izquierda
	MOV_LEFT,
	//Load to memory, carga los datos desde la memoria
	LW,
	//Store to memory, almacena los datos en la memoria
	SW
};

#endif // !OPERATIONS_H