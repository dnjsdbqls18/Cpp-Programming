#include <iostream>
#include <string>
using namespace std;

class Calculator
{
private:
    double X;
    double Y;
    char oper;
    double sum;

public:
    Calculator(double x, char op, double y, double sum);
    void print();
    double resultSum();
};
