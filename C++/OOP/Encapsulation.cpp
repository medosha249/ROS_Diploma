// Encapsulation is hiding data (fields) from user
#include <iostream>
using namespace std;

class Rectangle
{
public:
    // Constructor to initialize height and width
    Rectangle() : height(0), width(0) {}

    void setHeight(float h)
    {
        if (h <= 0)
            cout << "Please enter a positive number\n";
        else
            height = h;
    }

    float getHeight() const
    {
        return height;
    }

    void setWidth(float w)
    {
        if (w <= 0)
            cout << "Please enter a positive number\n";
        else
            width = w;
    }

    float getWidth() const
    {
        return width;
    }

    float getArea() const
    {
        return height * width;
    }

private:
    float height;
    float width;
};

int main()
{
    Rectangle rec;
    rec.setHeight(5);
    rec.setWidth(-5);
    cout << "Area = " << rec.getArea() << endl;

    return 0;
}
