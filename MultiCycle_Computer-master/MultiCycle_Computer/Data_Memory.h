#pragma once

#include <iostream>
#include <vector>

class Data_Memory {
private:
    std::vector<int> data; // Vector para almacenar los datos

public:
    Data_Memory(); // Constructor
    int readData(int address); // M�todo para leer datos desde la memoria
    void writeData(int address, int value); // M�todo para escribir datos en la memoria
};

/*MATIAS*/