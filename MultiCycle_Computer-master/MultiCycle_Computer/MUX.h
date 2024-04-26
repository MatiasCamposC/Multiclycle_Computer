#pragma once
#ifndef MUX_H
#define MUX_H
#include <iostream>

class MUX {
private:
    int inputA;
    int inputB;
    int inputC;
    int inputD;
    int control;

public:
    MUX();// Constructor

    MUX(int inputA, int inputB);

    MUX(int inputA, int inputB, int inputC);

    MUX(int inputA, int inputB, int inputC, int inputD);

    int selectInput();
    void setInputA(int value);
    void setInputB(int value);
    void setInputC(int value);
    void setInputD(int value);
    void setControl(int value);

};
#endif // !MUX_H