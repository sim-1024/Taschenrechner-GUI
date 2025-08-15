#include "calculatorengine.h"

CalculatorEngine::CalculatorEngine() {}

char CalculatorEngine::sucheOperator(string screen)
{
    for (size_t i = (screen[0]=='-'? 1:0); i < screen.length(); i++) {
        if(screen[i] == '+' || screen[i] == '-' || screen[i] == '*'|| screen[i] == '/') {
            return screen[i];
        }
    }
    return ' ';
}

double CalculatorEngine::berechneErgebnis(double operand1, double operand2, char _operator)
{
    if(_operator == '+') {
        return operand1 + operand2;
    } else if(_operator == '-') {
        return operand1 - operand2;
    } else if(_operator == '*') {
        return operand1 * operand2;
    } else if(_operator == '/' && operand2 != 0) {
        return operand1 / operand2;
    }
    return std::numeric_limits<double>::quiet_NaN();
}
