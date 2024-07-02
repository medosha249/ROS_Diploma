#include <iostream>
using namespace std;
bool duplicateDigits(int number)
{
    int digitCount[10] = {0};
    while (number > 0)
    {
        int digit = number % 10; //when you use number % 10 it gives you the last digit of the number
        digitCount[digit]++;
        if (digitCount[digit] > 1)
            return true;
    }
    number /= 10; //it gives you the first digits except the last digits and so on
}
int main()
{
    int num;
    cout << "Please enter a number: ";
    cin >> num;
    if (duplicateDigits(num))
        cout << "Number " << num << "Has Duplicate Digits" << endl;
    else
    {
        cout << "Number " << num << "Has No Duplicate Digits" << endl;
    }
    return 0;
}