#include <iostream>
using namespace std;
int main()
{
    int *dynamicPointer = new int;
    int *dynamicArray = new int[5];
    *dynamicPointer = 10;
    for (int i = 0; i < 5; ++i)
    {
        dynamicArray[i] = i * 10;
    }
    cout << *dynamicPointer << endl;
    for (int i = 0; i < 5; i++)
    {
        cout << dynamicArray[i] << " ";
    }
    cout << endl;
    delete dynamicPointer;
    delete[] dynamicArray;
}