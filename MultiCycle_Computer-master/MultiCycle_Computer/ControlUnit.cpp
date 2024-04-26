#ifndef CU_CPP
#define CU_CPP
#include "ControlUnit.h"
#include "ALU.cpp"
#include "Operations.h"

CU::CU() {

}

struct ControlSignals {
    bool regAEnable;
    bool regBEnable;
    bool aluEnable;
};

CU::ControlSignals generateControlSignals(uint32_t operation) {
    ControlSignals controlSignals = { false, false, false };
    switch (decodeInstruction(operation)) {
    case ADD:
    case SUB:
    case DIV:
    case MOV_RIGHT:
        controlSignals.regAEnable = true;
        controlSignals.regBEnable = true;
        controlSignals.aluEnable = true;
        break;
    case MOV_LEFT:
        controlSignals.regAEnable = true;
        controlSignals.loadEnable = true;
        controlSignals.readMemory = true;
        break;
    case SW:
        controlSignals.regBEnable = true;
        controlSignals.storeEnable = true;
        controlSignals.writeMemory = true;
        break;
    }
    return controlSignals;
}

#endif // !CU_CPP