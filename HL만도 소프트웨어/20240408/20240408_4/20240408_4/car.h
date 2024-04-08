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