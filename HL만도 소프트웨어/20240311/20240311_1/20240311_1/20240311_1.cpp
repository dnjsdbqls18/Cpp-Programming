// 20240311

/* 1.첫 번째 예제 프로그램
#include <iostream>
using namespace std;

int main()
{
	cout << "Hello Wolrd!" << endl;
	return 0;
}
*/

// endl 은 줄 바꿈
//cout << 은 print
//cin >> scanf
/* ***** 식별자를 쓰는 방법 *****
1. std::cout << "Hello World!" << std::endl;
2. using namespace std;
cout << "Hello World!" << endl;
*/

/* 2. 문자열
#include <iostream>
#include <string>
using namespace std;

int main()
{
	string s1 = "Good";
	string s2 = "Morning";
	string s3 = s1 + " " + s2 + "!";
	cout << s3 << endl;
	return 0;
}
*/

/*
// 3. 이름 입력받아서 출력하기
#include <iostream>
#include <string>
using namespace std;

int main()
{
	string name;
	cout << "이름을 입력하세요:";
	cin >> name;
	cout << name << "을 환영합니다." << endl;
	return 0;
}
*/

// 4. 최대한의 사탕 사기
/*
#include <iostream>
using namespace std;

int main()
{
	int money;
	int candy_price;

	cout << "현재 가지고 있는 돈 = ";
	cin >> money;
	cout << "캔디의 가격 = ";
	cin >> candy_price;

	// 최대한 살 수 있는 사탕 수
	int n_candies = money / candy_price;
	cout << "최대로 살 수 있는 캔디의 개수 = " << n_candies << endl;

	//사탕을 구입하고 남은 돈
	int change = money % candy_price;
	cout << "캔디 구입 후  남은 돈 = " << change << endl;
	return 0;
}
*/

// 5. 화씨 -> 섭씨
/*
#include <iostream>
#include <iomanip> // 포맷 조작을 위해 추가
using namespace std;

int main()
{
	double f_temp;
	double c_temp;

	cout << "화씨 온도 = ";
	cin >> f_temp;

	c_temp = (f_temp - 32) / 1.8;
	// 소수점 2자리까지만
	cout << fixed << setprecision(2);

	cout << "화씨 온도 " << f_temp << "도는 " << "섭씨온도는 " << c_temp << "입니다";
	return 0;

}
*/

// 6. random 함수
/*
#include <iostream>
#include <ctime>
#include <cstdlib>
using namespace std;

int main()
{
	srand(time(NULL));
	int dice1 = (rand() % 6) + 1;
	int dice2 = (rand() % 6) + 1;

	cout << "첫 번째 주사위 = " << dice1 << endl;
	cout << "두 번째 주사위 = " << dice2 << endl << endl;
	cout << "두 주사위 합 = " << dice1 + dice2 << endl;
	return 0;
}
*/

// 7. bool
/*
#include <iostream>
using namespace std;

int main()
{
	bool b;
	b = (1 == 2);

	cout << b << endl;
	cout << std::boolalpha;
	cout << b << endl;

	return 0;
}
*/

// 8. if - else
/*
#include <iostream>
using namespace std;

int main()
{
	int x, y;

	cout << "x값을 입력하시오 : ";
	cin >> x;	
	
	cout << "y값을 입력하시오 : ";
	cin >> y;

	if (x > y)
	{
		cout << "x가 y보다 큽니다" << endl;
	}
	else if (x == y)
	{
		cout << "x와 y 값이 같습니다" << endl;
	}
	else
	{
		cout << "y가 x보다 큽니다" << endl;
	}
	return 0
}
*/
/*
#include <iostream>
#include <ctime>
#include <cstdlib>
using namespace std;

int main()
{
	srand(time(NULL));
	int x = (rand() % 100) + 1;
	int y = (rand() % 100) + 1;

	cout << "x값: " << x << endl;

	cout << "y값: " << y << endl;

	if (x > y)
	{
		cout << "x가 y보다 큽니다" << endl;
	}
	else if (x == y)
	{
		cout << "x와 y 값이 같습니다" << endl;
	}
	else
	{
		cout << "y가 x보다 큽니다" << endl;
	}
	return 0;
}
*/
/*
#include <iostream>
using namespace std;

int main()
{
	int age;
	cout << "나이를 입력하세요: ";
	cin >> age;

	if (age <= 12)
	{
		cout << "어린이입니다" << endl;
	}
	else if (age <= 19)
	{
		cout << "청소년입니다" << endl;
	}
	else
	{
		cout << "성인입니다" << endl;
	}
	return 0;
}
*/

/*
// 알파벳 비교하기
#include <iostream>
using namespace std;

int main()
{
	char secret_code = 'h';

	cout << "비밀코드를 맞춰보세요: ";
	char code;
	cin >> code;
	if (code < secret_code)
	{
		cout << code << "뒤에 있음" << endl;
	}
	else if (code > secret_code)
	{
		cout << code << "앞에 있음" << endl;
	}
	else
	{
		cout << "맞추었습니다" << endl;
	}
	return 0;
}
*/

/*
//세 개의 정수 중에 큰 수 찾기
#include <iostream>
using namespace std;

int main()
{
	int a, b, c, largest;

	cout << "3개의 정수를 입력하시오 : " << endl;
	cin >> a >> b >> c;

	if (a > b && a > c)
	{
		largest = a;
	}
	else if (b > a && b > c)
	{
		largest = b;
	}
	else
	{
		largest = c;
	}

	cout << "가장 큰 정수는 " << largest << endl;

	return 0;
}
*/ 

//switch문
#include <iostream>
using namespace std;

int main()
{
	int number;
	cout << "숫자를 입력하세요 : ";
	cin >> number;
	switch (number)
	{
	case 0:
			cout << "zero\n";
			break;
	case 1:
		cout << "one\n";
		break;
	case 2:
		cout << "two\n";
		break;
	default:
		cout << "many\n";
		break;
	}
	return 0;
}