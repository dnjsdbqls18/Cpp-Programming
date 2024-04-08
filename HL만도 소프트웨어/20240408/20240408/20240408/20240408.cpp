#include <iostream>
#include <string>
using namespace std;

class Car
{
public:
	int speed;
	int gear;
	string color;

	void speedUp()
	{
		speed += 10;
	}

	void speedDown()
	{
		speed -= 10;
	}

	void gearUp()
	{
		gear += 1;
	}

	void gearDown()
	{
		gear -= 1;
	}

	void show()
	{
		cout << "===================" << endl;
		cout << "speed : " << speed << endl;
		cout << "gear  : " << gear << endl;
		cout << "color : " << color << endl;
		cout << "===================" << endl;
	}
};

int main()
{
	Car myCar;

	myCar.speed = 100;
	myCar.gear  = 1;
	myCar.color = "black";

	myCar.gearUp();
	myCar.show();

	myCar.speedUp();
	myCar.show();

	return 0;
}