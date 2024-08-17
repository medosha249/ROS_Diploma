#include <iostream>
#include <array>
#include<functional>
using namespace std;
/*
    Syntax:
    [Capture] (Parameters){Body}
*/
void FOREACH(array<int, 5> arr, function<void(int)> funptr) //void (*funptr)(int) is not working with the capture of lambda.
{
    for (auto i : arr)
    {
        funptr(i);
    }
}
int main()
{
    int a = 5;
    array<int, 5> arr = {1, 5, 4, 9, 3};
    auto lambda = [](int Value)
    {
        cout << "Value is : " << Value << endl;
    };
    auto lambda2 = [a](int num) mutable
    {
        a = 3;
        cout << num * a << endl;
    };
    FOREACH(arr, lambda2);
}