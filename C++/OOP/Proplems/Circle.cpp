/*
Programme : Make a Circle with OOP
*/
#include <iostream>
#define PI 3.14
class Circle
{
private:
    float r;

public:
    Circle(float rad) : r(rad) {}
    float getArea() { return PI * r * r; }
    float getPerimeter() { return 2 * PI * r; }
};

int main()
{
    Circle circy(11);
    std::cout << "Area = " << circy.getArea() << std::endl;
    Circle circy2(4.44);
    std::cout << "Perimeter = " << circy2.getPerimeter() << std::endl;
}