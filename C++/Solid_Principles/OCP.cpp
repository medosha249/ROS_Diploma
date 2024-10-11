#include <iostream>
// OCP: Shape base class can be extended with more shapes without modifying it 
class Shape
{
public:
    virtual double area() const = 0;
};

class Circle : public Shape
{
private:
    double m_radius;

public:
    Circle(double radius) : m_radius(radius) {}

    double area() const override
    {
        return 3.14 * m_radius * m_radius;
    }
};

class Rectangle : public Shape
{
private:
    double m_width;
    double m_height;

public:
    Rectangle(double width, double height) : m_width(width), m_height(height) {}

    double area() const override
    {
        return m_height * m_width;
    }
};

class Triangle : public Shape
{
private:
    double m_height;
    double m_width;

public:
    Triangle(double width, double height) : m_width(width), m_height(height) {}

    double area() const override
    {
        return (m_height * m_width) * 1 / 2;
    }
};

void printShapeArea(const Shape &shape)
{
    std::cout << "Area: " << shape.area() << std::endl;
}

int main()
{
    Circle circle(2);
    Rectangle rectangle(2, 4);
    Triangle triangle(6, 3);
    printShapeArea(circle);
    printShapeArea(rectangle);
    printShapeArea(triangle);
    return 0;
}