#include <iostream>
#include <array>
using namespace std;
const int Size = 5;
void input(array<int, Size> &input)
{
    for (int i = 0; i < Size; i++)
    {
        cout << "Please enter the elements of array: ";
        cin >> input[i];
    }
}
void output(array<int, Size> &output)
{
    // Range based for loop
    for (int i : output)
    {
        cout << i << endl;
    }
}
int main()
{
    array<int, 5> array;
    input(array);
    output(array);
    return 0;
}