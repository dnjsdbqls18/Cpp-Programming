//while문
/*
#include <iostream>
using namespace std;

int main()
{
	int n = 10;
	while (n > 0)
	{
		cout << n << " ";
		n--;
	}
	cout << "발사\n";
}
*/

//구구단 예제
//구구단 중에 출력하고 싶은 단을 입력하시오:
/*
#include <iostream>
using namespace std;

int main()
{
	int num;
	int i = 1;
	cout << "구구단 중에 출력하고 싶은 단을 입력하시오 : ";
	cin >> num;

	while (i<10) // i <= 9
	{
		cout << num << " x " << i << " = " << num * i << "\n";
		i++;
	}

	return 0;
}
*/

//while문은 조건을 보고 가는거고 do-while문은 일단 하고 나서 결과 값에 따라 돌아감
/*
#include <iostream>
#include <string>
using namespace std;

int main()
{
	string str;
	do {
		cout << "문자열을 입력하시오 : ";
		getline(cin, str);
		cout << "사용자의 입력 : " << str << "\n";
	} while (str != "종료");
	return 0;
}
*/

//for문
/*
#include <iostream>
using namespace std;

int main()
{
	int sum = 0;

	for (int i = 1; i <= 10; i++)
	{
		sum += i;
	}
	cout << "1부터 10까지의 정수의 합 = " << sum << endl;
	return 0;
}
*/

//break문장 예제
/*
#include <iostream>
using namespace std;

int main()
{
	for (int i = 1; i < 10; i++)
	{
		cout << i << " ";
		if (i == 4)
		{
			break;
		}
	}
	return 0;
}
*/

//continue문장 예제
/*
#include <iostream>
using namespace std;

int main()
{
	int i = 0;
	do {
		i++;
		cout << "continue 문장 전에 있는 문장" << endl;
		continue; // 아래 문장 무시하고 바로 while로 넘어감
		cout << "continue 문장 후에 있는 문장" << endl;
	} while (i < 3);
	return 0;
}
*/

//숫자 맞추기 게임
/*
#include <iostream>
#include <time.h>
using namespace std;

int main()
{
	srand(time(NULL));

	int answer = rand() % 100;
	int guess;
	int tries = 0;
	
	do {
		cout << "정답을 추측하여 보시오 : ";
		cin >> guess;
		tries++;

		if (guess > answer)
		{
			cout << "더 낮은 수를 입력하세요.\n";
		}
		else if (guess < answer)
		{
			cout << "더 높은 수를 입력하세요.\n";
		}
	} while (guess != answer);
	
	cout << "답 = " << answer << " 입니다.\n";
	cout << "시도 횟수 = " << tries << endl;
	return 0;
}
*/

//산수 문제 자동 출제
/*
#include <iostream>
#include <stdlib.h>
using namespace std;

int main()
{
	int i, ans;
	cout << "산수 문제를 자동으로 출제합니다." << endl;

	while (true)
	{
		int x = rand() % 100;
		int y = rand() % 100;

		cout << x << "+" << y << "=";
		cin >> ans;

		if (x + y == ans)
		{
			cout << "맞았습니다." << endl;
			break;
		}
		else
		{
			cout << "틀렸습니다." << endl;
		}
	}

	return 0;
}
*/

//배열

#include <iostream>
using namespace std;

int main()
{
	const int STUDENTS = 10;
	int scores[STUDENTS];
	int sum = 0;
	int i, average;

	for (i = 0; i < STUDENTS; i++)
	{
		cout << i+1 << "번 학생의 성적을 입력하시오 : ";
		cin >> scores[i];
	}
	for (i = 0; i < STUDENTS; i++)
	{
		sum += scores[i];
	}

	average = sum / STUDENTS;
	cout << "성적 평균 = " << average << endl;
	return 0;
}