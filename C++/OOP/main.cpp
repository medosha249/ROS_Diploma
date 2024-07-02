#include <iostream>
using namespace std;
// Struct is norrmally public
class Rectangle // class is normally private
{
    // Methods
public:
    // Default Constructor
    Rectangle() : length(0), width(0)
    {
        cout << "Default Constructor Created\n";
    }

    // Parametrized Construcor
    Rectangle(float len, float wid) : length(len), width(wid)
    {
        cout << "Parametrized Constructor Created\n";
    }

    // Destrucor
    ~Rectangle()
    {
        cout << "Destructor Called" << endl;
    }

    void setLength(float l)
    {
        if (l >= 0)
            length = l;
        else
            cout << "ERROR!\nThe number should be POSITIVE!\n";
    }

    float getLength()
    {
        return length;
    }

    void setWidth(float w)
    {
        if (w >= 0)
            width = w;
        else
            cout << "ERROR!\nThe number should be POSITIVE!\n";
    }

    float getWidth()
    {
        return width;
    }

    void calculateArea()
    {
        area = length * width;
    }

    float getArea()
    {
        return area;
    }

    // Attributes
private:
    float length;
    float width;
    float area;
};

int main()
{
    // Rectangle rec;
    Rectangle rec(2, 3);
    rec.calculateArea();
    cout << "The area = " << rec.getArea() << endl;
    return 0;
}