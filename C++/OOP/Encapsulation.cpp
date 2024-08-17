#include <iostream>

class Rectangle
{
    float height;
    float width;

public:
    Rectangle(float h, float w) : height(h), width(w) { std::cout << "=============================" << std::endl; }
    void setHeight(float h)
    {
        height = h;
    }

    void setWidth(float w)
    {
        width = w;
    }
    float getHeight()
    {
        return height;
    }

    float getWidth()
    {
        return width;
    }

    float getArea()
    {
        return height * width;
    }
};

int main()
{
    float h, w;
    std::cout << "Enter the height and width: ";
    std::cin >> h >> w;
    Rectangle rect(h,w);
    std::cout << "Area = " << rect.getArea() << std::endl;
}