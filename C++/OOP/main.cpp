#include <iostream>
#include <ostream>
using namespace std;
// Struct is norrmally public
class Rectangle // class is normally private
{
    // Attributes
private:
    float length;
    float width;
    static int count;
    // Methods
public:
    // Default Constructor
    Rectangle() : length(0), width(0)
    {
        count++;
        cout << "Default Constructor Created\n";
    }

    // Parametrized Construcor
    Rectangle(float len, float wid) : length(len), width(wid)
    {
        count++;
        cout << "Parametrized Constructor Created\n";
    }
    // Copy Construcor
    Rectangle(const Rectangle &object)
    {
        count++;
        length = object.length;
        width = object.width;
        cout << "Copy Constructor Called" << endl;
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

    float getArea()
    {
        return length * width;
    }
    int getCount()
    {
        return count;
    }

    Rectangle mergeRectangle(const Rectangle r1, const Rectangle r2)
    {
        Rectangle r3;
        r3.length = r1.length + r2.length;
        r3.width = r1.width + r2.width;
        return r3;
    }

    // Operator Overloading
    Rectangle operator+(const Rectangle r1)
    {
        Rectangle r3;
        r3.length = r1.length + length;
        r3.width = r1.width + width;
        return r3;
    }
    friend ostream &operator<<(ostream &output, const Rectangle &rect);
};
// Friend
ostream &operator<<(ostream &output, const Rectangle &rect)
{
    output << rect.length << "  " << rect.width;
    return output;
}

int Rectangle::count = 0;

int main()
{
    /*
    // Rectangle rec;
    Rectangle rec1(2, 3);
    Rectangle rec2(rec1); // Copy Constructor
    Rectangle rec3 = rec1 + rec2;
    // rec3 = rec3.mergeRectangle(rec1, rec2);
    cout << rec3.getArea() << endl;
    cout << rec3 << endl;
    */
    Rectangle rec1(2, 3);
    cout << rec1.getCount() << endl;
    Rectangle rec2(rec1);
    cout << rec2.getCount() << endl;
    return 0;
}