#include <iostream>

void func(int &num)
{
    std::cout << "Lvalue Reference" << std::endl;
}

void func(int &&num)
{
    std::cout << "Rvalue Reference" << std::endl;
}

int main()
{
    int i = 20;
    func(i);
    func(10);
}