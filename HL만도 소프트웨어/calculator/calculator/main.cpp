#include <iostream>
#include <string>
#include "calculator.h"

int main()
{
    double x;
    double y;
    char oper;
    double sum = 0;

    cout << "X 값: ";
    cin >> x;

    while (1)
    {
        cout << "연산자를 입력하세요: ";
        cin >> oper;

        if (oper == 'Q')
        {
            cout << "\n";
            cout << "종료" << endl;
            break;
        }

        if (oper != 'C')
        {
            cout << "Y 값: ";
            cin >> y;
        }

        Calculator cal(x, oper, y, sum);
        cal.print();
        sum = cal.resultSum();
        x = sum;
    }

    return 0;
}
