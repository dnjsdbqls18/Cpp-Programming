#include <iostream>
#include <string>
using namespace std;

class Car
{
private:
	int speed;
	int gear;
	string color;

public:
	
	Car(int s, int g, string c)
	{
		speed = s;
		gear = g;
		color = c;
	}

	Car(string c)
	{
		Car(0, 0, c);
	}

	void print()
	{
		cout << "===================" << endl;
		cout << "속도: " << speed << endl;
		cout << "기어: " << gear << endl;
		cout << "색상: " << color << endl;
		cout << "===================" << endl;
	}
};

int main()
{
	Car c4("white");

	c4.print();

	return 0;
}