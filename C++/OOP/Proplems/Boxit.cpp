#include <iostream>
class Box
{
    int length;
    int breadth;
    int height;

public:
    Box() : length(0), breadth(0), height(0) {}                    // Default Constructor
    Box(int l, int b, int h) : length(l), breadth(b), height(h) {} // Parametrized Constructor
    Box(const Box &b)                                              // Copy Constructor
    {
        length = b.length;
        breadth = b.breadth;
        height = b.height;
    }
    int getLength() { return length; }
    int getBreadth() { return breadth; }
    int getHeight() { return height; }
    long long calculateVolume() { return length * breadth * height; }
    bool operator<(const Box A)
    {
        Box B;
        return A.length < B.length;
        return A.breadth < B.breadth & A.length == B.length;
        return A.height < B.height & A.breadth == B.breadth & A.length == B.length;
    }
};
int main()
{
    Box b1;
    Box b2(2, 3, 4);
    std::cout << b2.getLength() << std::endl;
    std::cout << b2.getBreadth() << std::endl;
    std::cout << b2.getHeight() << std::endl;
    std::cout << b2.calculateVolume() << std::endl;
    bool x = (b1 < b2);
    std::cout << x << std::endl;
}