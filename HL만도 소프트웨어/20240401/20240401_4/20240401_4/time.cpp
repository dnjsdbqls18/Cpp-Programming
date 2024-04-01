#include <iostream>
#include "time.h"
using namespace std;

Time::Time(int h, int m)
{
	hour = h;
	minute = m;
}

void Time::ine_hour()
{
	++hour;
	if (hour > 23)
	{
		hour = 0;
	}
}

void Time::print()
{
	cout << hour << ":" << minute << endl;
}