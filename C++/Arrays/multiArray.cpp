#include<iostream>
using namespace std;
int main()
{
    int size;
    cout<<"Enter the size of array; ";
    cin>>size;
    int arr[size][size];
    for(int i =0;i<=size-1;i++)
    {
        for(int j =0;j<=size-1;j++)
        {
            cout<<"Enter "<<i<<" "<<j<<" : ";
            cin>>arr[i][j];
        }
    }
    for(int i =0;i<=size-1;i++)
    {
        for(int j =0;j<=size-1;j++)
        {
            cout<<arr[i][j]<<" ";
        }
        cout<<endl;
    }

}