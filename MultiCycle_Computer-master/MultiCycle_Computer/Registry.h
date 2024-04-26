#pragma once
/*Registros:
* Almacenan datos temporales que se estan utilizando en la ejecución del programa*/
/*DAVID*/
#ifndef REGISTRY_H
#define REGISTRY_H
#include <iostream>
#include <stdio.h>
#include <stdlib.h>
#include<map>
#include<string>
using namespace std;

class Registry {
public:
	//Constructores
	Registry();
	//uint32_t: es un tipo de dato entero sin signo de 32 bits, alamacena valores entre 0 y 2^32 - 1 (4.294.967.295)
	//A1 es el campo del registro fuente,el RD1 es el valor de A1 
	uint32_t find(uint32_t a1);
	void readAll();
	//A1 es el valor del registro fuente a ingresar
	void write(uint32_t a1);
	
	map<uint32_t, uint32_t> source;

private:

	

};

#endif // !REGISTRY_H