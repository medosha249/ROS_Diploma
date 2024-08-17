#include <iostream>
#include <memory>

int main()
{
    std::unique_ptr<int> ptr = std::make_unique<int>(25);

    std::cout << *ptr << " " << &ptr << std::endl;

    std::unique_ptr<int> ptr2 = std::move(ptr);

    std::cout << *ptr2 << " " << &ptr2 << std::endl;
}