#include <iostream>
using namespace std;
int factorial(int n)
{
    if (n <= 1)
    {
        return 1;
    }
    return n * factorial(n - 1);
}
int main()
{
    int num;
    cout << "=======Calculate Factorial=======" << endl;
    cout << "Please Enter The Number : ";
    cin >> num;
    cout << "The factorial = " << factorial(num) << endl;
}