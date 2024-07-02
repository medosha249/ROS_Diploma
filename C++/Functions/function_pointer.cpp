#include <iostream>
using namespace std;
void hello(int x)
{
    cout << "Hello World " << x << endl;
}
int main()
{
    typedef void (*functionPointer)(int);
    // void (*functionPointer)(int) = hello;
    // auto functionPointer = hello;
    functionPointer name = hello;
    name(10);
}