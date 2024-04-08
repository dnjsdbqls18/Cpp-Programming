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
	void setGear(int s);

	string getColor();
	void setColor(string s);

	void speedUp();
	void speedDown();
	void gearUp();
	void gearDown();

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
void Car::setGear(int s)
{
	gear = s;
}

string Car::getColor()
{
	return color;
}
void Car::setColor(string s)
{
	color = s;
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
	Car myCar;

	myCar.setSpeed(100);
	myCar.setGear(1);
	myCar.setColor("black");

	myCar.show();

	myCar.speedUp();
	myCar.gearUp();

	myCar.show();

	myCar.speedDown();
	myCar.gearDown();

	myCar.show();

	return 0;
}