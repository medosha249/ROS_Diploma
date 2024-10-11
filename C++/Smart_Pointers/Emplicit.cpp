#include <iostream>
class Complex
{
    double real;
    double imag;

public:
    explicit Complex(double r = 0.0, double i = 0.0) : real(r), imag(i) {}
    bool operator==(Complex rhs)
    {
        return (real == rhs.real && imag == rhs.imag);
    }
};

int main()
{
    Complex com(3.0, 0.0);
    if (com == (Complex)(3.0))
    {
        std::cout << "Same" << std::endl;
    }
    else
    {
        std::cout << "Not Same" << std::endl;
    }
}