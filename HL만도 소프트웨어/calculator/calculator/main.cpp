#include <iostream>
#include <string>
#include "calculator.h"

int main()
{
    double x;
    double y;
    char oper;
    double sum = 0;

    cout << "X ��: ";
    cin >> x;

    while (1)
    {
        cout << "������: ";
        cin >> oper;

        if (oper == 'Q')
        {
            cout << "\n";
            cout << "����" << endl;
            break;
        }

        if (oper != 'C')
        {
            cout << "Y ��: ";
            cin >> y;
        }

        Calculator cal(x, oper, y, sum);
        cal.print();
        sum = cal.resultSum();
        x = sum;
    }

    return 0;
}
