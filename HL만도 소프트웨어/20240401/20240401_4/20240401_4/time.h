#include <iostream>
using namespace std;

class Time
{
public:
	Time(int h, int m);
	void ine_hour();
	void print();

	int getHour()
	{
		return hour;
	}
	int getMinute() { return minute; }
	void setHour(int h)
	{
		hour = h;
	}
	void setMinute(int m) { minute = m; }

private:
	int hour;
	int minute;
};