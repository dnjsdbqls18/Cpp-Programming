#include <iostream>
#include <string>
#include "calculator.h"

Calculator::Calculator(double x, char op, double y, double sum)
{
    X = x;      
    oper = op; 
    Y = y;     
    sum = sum;  

    switch (oper)
    {
    case '+':   
        sum = X + Y;
        break;
    case '-':   
        sum = X - Y;
        break;
    case '*':  
        sum = X * Y;
        break;
    case '/':   
        if (Y != 0) 
        {
            sum = X / Y;
        }
        else
        {
            cout << "0���� ���� �� �����ϴ�" << endl;  
        }
        break;
    default:  
        cout << "�ٽ� �Է��ϼ���" << endl;
        break;
    }
}

void Calculator::print()
{
    cout << "���: " << sum << endl;
    cout << "\n";
}

double Calculator::resultSum()
{
    return sum;
}