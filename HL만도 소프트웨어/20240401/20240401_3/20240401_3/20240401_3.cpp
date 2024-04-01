#include <iostream>
using namespace std;

class Time
{
public:
	int hour;
	int minute;

	Time()
	{
		hour = 0;
		minute = 0;
	}
	Time(int h, int m)
	{
		hour = h;
		minute = m;
	}
	void print()
	{
		cout << hour << ":" << minute << endl;
	}
};
/*
// p220 생성자는 왜 필요할까?
int main()
{
	//Time a;
	Time b(10, 25);
	Time c{10, 25};
	Time d = { 10, 25 };

	b.print();
	c.print();
	d.print();

	return 0;
}
*/

int main()
{
	Time a;
	Time b(10, 25);

	a.print();
	b.print();
	return 0;
}