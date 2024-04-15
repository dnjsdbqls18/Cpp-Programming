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
            cout << "0으로 나눌 수 없습니다" << endl;  
        }
        break;
    default:  
        cout << "다시 입력하세요" << endl;
        break;
    }
}

void Calculator::print()
{
    cout << "결과: " << sum << endl;
    cout << "\n";
}

double Calculator::resultSum()
{
    return sum;
}