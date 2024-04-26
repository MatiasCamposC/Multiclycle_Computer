#ifndef IR_CPP
#define IR_CPP
#include "IR.h"

IR::IR() {
    operation = 0;
    valid = false;
}

void IR::setOperation(uint32_t operation) {
    this->operation = operation;
    valid = true;
}

uint32_t IR::getOperation() {
    if (!valid) {
        //Manejo de validación para acceso a las operaciones
        throw runtime_error("Invalid operation!");
    }
    return operation;
}

bool IR::isOperationValid() {
    return valid;
}

#endif // !IR_CPP