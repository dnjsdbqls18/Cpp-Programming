//int�� ��ȯ���� �ִ�.
//void�¹�ȯ���� ����
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