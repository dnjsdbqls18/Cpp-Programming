#include <iostream>
#include <windows.h>
#include "circle.h"
using namespace std;

//���� �����ڸ� �н����� �ʾұ� ������ init() �Լ� ����Ͽ� �ʱ�ȭ �Ѵ�.
void Circle::init(int xval, int yval, int r)
{
	x = xval;
	y = yval;
	radius = r;
}

void Circle::draw()
{
	HDC hdc = GetWindowDC(GetForegroundWindow());
	Ellipse(hdc, x - radius, y - radius, x + radius, y + radius);
}

void Circle::move()
{
	x += rand() % 50;
}
