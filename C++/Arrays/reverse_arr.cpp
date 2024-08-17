#include <iostream>
using namespace std;
int arr[10] = {34, 23, 52, 65, 95, 5, 2, 14, 56, 8};
int main()
{
    for (int i = 9; i >= 0; i--)
    {
        cout << arr[i] << "  ";
    }
    cout << endl;
}