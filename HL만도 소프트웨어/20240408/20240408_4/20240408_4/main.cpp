#include <iostream>
#include <string>
#include "car.h"
using namespace std;

int main()
{
	/*
	Car myCar;

	myCar.setSpeed(100);
	myCar.setGear(1);
	myCar.setColor("black");

	myCar.show();

	myCar.speedUp();
	myCar.gearUp();
	myCar.setColor("red");

	myCar.show();

	myCar.speedDown();
	myCar.gearDown();
	myCar.speedDown();
	myCar.gearDown();
	myCar.setColor("blue");

	myCar.show();


	myCar.show();
	*/

	Car car1, car2;

	car1.init(rand() % 200, 1, "red");
	car1.show();

	car2.init(rand() % 200, 1, "blue");
	car2.show();

	if (car1.getSpeed() > car2.getSpeed())
	{
		cout << "car1이 승리하였습니다." << endl;
	}
	else if (car1.getSpeed() < car2.getSpeed())
	{
		cout << "car2이 승리하였습니다." << endl;
	}

	return 0;
}