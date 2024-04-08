//int는 반환값이 있다.
//void는반환값이 없다
#include <iostream>
#include <string>
#include "car.h"
using namespace std;

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