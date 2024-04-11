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
	/*
	Car(int s, int g, string c)
	{
		speed = s;
		gear = g;
		color = c;
	}
	*/
	
	/*
	Car()
	{
		speed = 0;
		gear = 1;
		color = "white";
	}
	*/

	Car(int s = 1, int g = 2, string c = "white")
	{
		speed = s;
		gear = g;
		color = c;
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
	Car c1(0, 1, "red");
	Car c2(0, 1, "blue");
	Car c3;
	c1.print();
	c2.print();
	c3.print();

	return 0;
}