//int�� ��ȯ���� �ִ�.
//void�¹�ȯ���� ����
#include <iostream>
#include <string>
#include "car.h"
using namespace std;

int main()
{
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
	myCar.setColor("blue");

	myCar.show();

	return 0;
}