#include <iostream>

// Abstract Calss ( Using Pure Virtual Function )
class Shape
{
    std::string color;

public:
    Shape() : color("Red") {}
    Shape(std::string c)
        : color(c)
    {
        color = c;
    }
    virtual float area() = 0; // pure virtual function
};

class Rectangle : public Shape
{
    float height;
    float width;

public:
    Rectangle(float h, float w)
        : height(h), width(w)
    {
        height = h;
        width = w;
    }
    float area() override
    {
        std::cout << "The area of rectangle = " << height * width << std::endl;
        return (height * width);
    }
};

class Triangle : public Shape
{
    float base, height;

public:
    Triangle(float b, float h)
        : base(b), height(h)
    {
        base = b;
        height = h;
    }
    float area() override
    {
        std::cout << "The Triangle area = " << base * height / 2 << std::endl;
        return (base * height / 2);
    }
};

class Circle : public Shape
{
    float radius;

public:
    Circle(float r)
        : radius(r)
    {
        radius = r;
    }
    float area() override
    {
        std::cout << "Tha Circle area = " << 3.14 * radius * radius << std::endl;
        return 3.14 * radius * radius;
    }
};
int main()
{
    Shape *s;

    Rectangle r(2, 3);
    Triangle t(3, 4);
    Circle c(4);

    s = &r;
    s->area();

    s = &t;
    s->area();

    s = &c;
    s->area();
}