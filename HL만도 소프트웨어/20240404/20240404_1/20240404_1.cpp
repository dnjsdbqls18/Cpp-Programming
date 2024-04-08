/*
#include<iostream>
using namespace std;

class Circle
{
public:
    int x, y;
    int radius;
    Circle() :x(0), y(0), radius(0) {}
    Circle(int x, int y, int r) :x(x), y(y), radius(r) {}
    void print()
    {
        cout << "반지름: " << radius << "@(" << x << ", " << y << ")" << endl;
    }
};

int main(void)
{
    Circle objArray[10];

    for (Circle& c : objArray)
    {
        c.x = rand() % 500;
        c.y = rand() % 300;
        c.radius = rand() % 100;
    }

    for (Circle c : objArray)
    {
        c.print();
    }

    return 0;
}
*/

#include<iostream>
using namespace std;

class Circle
{
public:
    int x, y;
    int radius;
    Circle() :x(0), y(0), radius(0) {}
    Circle(int x, int y, int r) :x(x), y(y), radius(r) {}
    void print()
    {
        cout << "반지름: " << radius << "@(" << x << ", " << y << ")" << endl;
    }
};

int main(void)
{
    Circle objArray[10] = {
        Circle(0,0,0),
        Circle(1,2,3),
        Circle(4,5,6),
        Circle(7,8,9),
        Circle(10,11,12),
        Circle(13,14,15),
        Circle(16,17,18),
        Circle(19,20,21),
        Circle(22,23,24),
        Circle(25,26,27),
    };



    for (Circle c : objArray)
    {
        c.Circle();
    }

    for (Circle d : objArray)
    {
        d.print();
    }

    return 0;
}