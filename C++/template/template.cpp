#include <iostream>

// Generic Programming
template <typename T>
void swap(T *x, T *y)
{
    T temp = *x;
    *x = *y;
    *y = temp;
}

int main()
{
    int x = 6, y = 5;
    swap(&x, &y);
    std::cout << "x = " << x << " y = " << y << std::endl;
    return 0;
}