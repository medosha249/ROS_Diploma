#include <iostream>
using namespace std;
int main()
{
    int rows;
    cout << "Pleaes Enter The number of rows: ";
    cin >> rows;
    for (int i = 1; i <= rows; i++)
    {
        for (int j = 1; j <= rows * 2 - 1; j++)
        {
            if (j >= rows - (i - 1) && j <= rows + (i - 1))
            {
                cout << "*";
            }
            else
            {
                cout<<" ";
            }
        }

        cout << endl;
    }
}