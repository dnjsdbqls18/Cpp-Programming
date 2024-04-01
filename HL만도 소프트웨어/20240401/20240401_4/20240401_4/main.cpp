#include <iostream>
#include "time.h"
using namespace std;

int main()
{
	Time a(0, 0);

	a.setHour(6);
	a.setMinute(30);

	a.print();
	return 0;
}