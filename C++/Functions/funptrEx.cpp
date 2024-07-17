#include <iostream>
#include <array>
using namespace std;
void printValues(int value)
{
    cout << "Value is : " << value << endl;
}
void func(int num)
{
    cout << num * 5 << endl;
}
void FOREACH(array<int, 5> arr, void (*funptr)(int))
{
    for (auto i : arr)
    {
        funptr(i);
    }
}

int main()
{
    array<int, 5> arr = {1, 5, 4, 9, 3};
    FOREACH(arr, func);
}