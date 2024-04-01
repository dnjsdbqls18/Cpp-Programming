#include <iostream>
#include <windows.h>
#include "circle.h"
using namespace std;

//아직 생성자를 학습하지 않았기 때문에 init() 함수 사용하여 초기화 한다.
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
