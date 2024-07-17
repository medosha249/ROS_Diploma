#include <iostream>
using namespace std;
int main()
{
    int a = 3;
    int &r = a;
    cout << "Addresss of r: " << &r << "  Adress of a: " << &a << endl;
    r = 5;
    cout << "a = " << a << endl;
    int *ptr = nullptr;
}