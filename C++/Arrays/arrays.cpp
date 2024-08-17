/*
    global arr[10] will print all 0
    local arr[10] will print garbage values for all elements
    sizeof() is a function to get the byets of an a element

    to get the number of elements of array use 
    int arrsize = sizeof(arr) / sizeof(arr[0])

*/
#include <iostream>
using namespace std;
 int arr[] = {1,2,3,4,5,6,7,8,9,10};
int main()
{
   
    for (int i = 0; i < 10; i++)
    {
        cout << arr[i] << "  " ;
    }
    cout << endl;
    int arrsize = sizeof(arr) / sizeof(arr[0]);
    cout<<arrsize<<endl;   //print the number of elements.
}