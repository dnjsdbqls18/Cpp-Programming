/*
#include <iostream>
using namespace std;

//함수 정의
int max(int x, int y)
{
	if (x > y)
	{
		return x;
	}
	else
	{
		return y;
	}
}

int main()
{
	int n;
	n = max(2, 3); //함수 호출
	cout << "연산 결과 = " << n << endl;
	return 0;
}
*/
/*
#include <iostream>
#include <string.h>
using namespace std;


int menu(int a, int b, char cal)
{
    int result;

    switch (cal)
    {
    case '+':
        result = a + b;
        break;
    case '-':
        result = a - b;
        break;
    case '*':
        result = a * b;
        break;
    case '/':
        if (b != 0) 
            result = a / b;
        else
        {
            cout << "0으로 나눌 수 없습니다." << endl;
            return -1; 
        }
        break;
    default:
        cout << "잘못된 연산입니다." << endl;
        return -1;
    }
    return result;
}

int main()
{
    int a, b;
    char cal; 

    cout << "첫번째 수를 입력하세요 : ";
    cin >> a;
    cout << "두번째 수를 입력하세요 : ";
    cin >> b;
    cout << "원하는 사칙 연산을 고르세요 (+, -, *, /) : ";
    cin >> cal;

    int result = menu(a, b, cal);
    if (result != -1)
    {
        cout << "연산 결과 = " << result << endl;
    }

    return 0;
}
*/
/*
#include <iostream>
using namespace std;

void swap(int x, int y)
{
    int tmp;

    tmp = x;
    x = y;
    y = tmp;
}

int main()
{
    int a = 100, b = 200;

    cout << "a = " << a << " " << "b = " << b << endl;
    swap(a, b);   
    cout << "a = " << a << " " << "b = " << b << endl;
    return 0;
}
*/
/*
#include <iostream>
using namespace std;

void swap(int& x, int& y)
{
    int tmp;

    tmp = x;
    x = y;
    y = tmp;
}

int main()
{
    int a = 100, b = 200;

    cout << "a = " << a << " " << "b = " << b << endl;
    swap(a, b);
    cout << "a = " << a << " " << "b = " << b << endl;
    return 0;
}
*/

#include <iostream>
using namespace std;

//정수값을 제곱하는 함수
int square(int i)
{
    cout << "square(int) 호출" << endl;
    return i * i;
}

//실수값을 제곱하는 함수
double square(double i)
{
    cout << "square(double) 호출" << endl;
    return i * i;
}

int main()
{
    cout << square(10) << endl;
    cout << square(2.0) << endl;
    return 0;
}