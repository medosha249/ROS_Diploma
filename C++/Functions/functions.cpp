#include<iostream>
using namespace std;
float area(float length , float width)
{
    return length * width;
}
int main()
{
    float length , width;
    cin>> length>>width;
    cout<<area(length,width)<<endl;
    return 0;
}