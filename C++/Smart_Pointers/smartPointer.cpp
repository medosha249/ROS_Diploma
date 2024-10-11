#include <iostream>
template <typename T>
class Smart_ptr
{
private:
    T *ptr;

public:
    explicit Smart_ptr() = default;
    explicit Smart_ptr(T *pointer = NULL)
    {
        ptr = pointer;
    }

    Smart_ptr(const Smart_ptr &) = delete;            // No copy constructor
    Smart_ptr &operator=(const Smart_ptr &) = delete; // No Assignment Operator
    T &
    operator*()
    {
        return *ptr;
    }

    ~Smart_ptr()
    {
        std::cout << "Freed" << std::endl;
        delete ptr;
    }
};

int main()
{
    Smart_ptr ptr(new int(10));
    *ptr = 20;
    std::cout << *ptr << std::endl;
    std::cin.get();
    return 0;
}