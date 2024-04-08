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