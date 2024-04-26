#ifndef ALU_CPP
#define ALU_CPP
#include "ALU.h"
#include "Data_Memory.h" 
#include "MUX.h" 


ALU::ALU() {
    
};
CU::CU() {

};

MUX::MUX(int inputA, int inputB) {

}

void ALU::executeOperation(CU::ControlSignals controlSignals, uint32_t a, uint32_t b, uint32_t* result) {
    if(controlSignals.aluEnable){
        switch (decodeInstruction(controlSignals.)) {
        case ADD: {
            *result = a + b;
            break;
            } 
        case SUB:
            {
            *result = a - b;
            break;
            }      
        case DIV:
        {
            *result = a / b;
            break;
        }
        case MOV_RIGHT:
            {
            *result = a >> b;
            break;
            }        
        case MOV_LEFT:
            {
            *result = a << b;
            break;
            }           
        }
    }
    else {

    }
}
#endif // !ALU_CPP