#ifndef CALCULATORENGINE_H
#define CALCULATORENGINE_H

#include <string>
#include <limits>
using namespace std;

class CalculatorEngine
{
public:
    CalculatorEngine();
    static char sucheOperator(string screen);
    static double berechneErgebnis(double operand1, double operand2, char _operator);
};

#endif // CALCULATORENGINE_H
