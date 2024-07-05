#include <iostream>
#include <string>
class A
{
    std::string color;
    std::string type;
    int model;

public:
    A(std::string t, std::string c, int m) : type(t), color(c), model(m) {}
    virtual void show()
    {
        std::cout << "The vehicle type is: " << type << std::endl
                  << "Color: " << color << std::endl
                  << "Model: " << model << std::endl;
    }
};

class B : public A
{
    float acceleration;

public:
    B(std::string t, std::string c, int m, float n) : A(t, c, m), acceleration(n) {}
    // Function Override
    void show() override
    {
        A::show();
        std::cout << "Acceleration: " << acceleration << "KM/H" << std ::endl;
    }
};
int main()
{
    A a("BMW", "Black", 2013);
    B b("Hyunday", "White", 2022, 70.3);
    std::cout << "The Vehicle A: " << std::endl;
    a.show();
    std::cout << "\nThe Vehicle B: " << std::endl;
    b.show();
    return 0;
}