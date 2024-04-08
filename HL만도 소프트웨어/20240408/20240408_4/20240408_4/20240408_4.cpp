//int는 반환값이 있다.
//void는반환값이 없다
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
	int getSpeed();
	void setSpeed(int s);

	int getGear();
	void setGear(int g);

	string getColor();
	void setColor(string c);

	void speedUp();
	void speedDown();
	void gearUp();
	void gearDown();

	void init(int s, int g, string c);

	void show();
};

int Car::getSpeed()
{
	return speed;
}
void Car::setSpeed(int s)
{
	speed = s;
}

int Car::getGear()
{
	return gear;
}
void Car::setGear(int g)
{
	gear = g;
}

string Car::getColor()
{
	return color;
}
void Car::setColor(string c)
{
	color = c;
}

void Car::speedUp()
{
	speed += 10;
}
void Car::speedDown()
{
	speed -= 10;
}
void Car::gearUp()
{
	gear += 1;
}
void Car::gearDown()
{
	gear -= 1;
}

void Car::init(int s, int g, string c)
{
	speed = s;
	gear = g;
	color = c;
}

void Car::show()
{
	cout << "===================" << endl;
	cout << "speed : " << speed << endl;
	cout << "gear  : " << gear << endl;
	cout << "color : " << color << endl;
	cout << "===================" << endl;
}

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
	else if(car1.getSpeed() < car2.getSpeed())
	{
		cout << "car2이 승리하였습니다." << endl;
	}

	return 0;
}