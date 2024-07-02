#include<iostream>
using namespace std;
int *findMid(int arr[],int size)
{
    return &arr[size/2];
}
int main()
{
    int arr[] = {1,2,3,4,5,6,7,8,9,10};
    int size = sizeof(arr)/sizeof(arr[0]);
    int *mid = findMid(arr,size);
    cout<<*mid<<endl;
}