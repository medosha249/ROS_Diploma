#include<iostream>
using namespace std;
int main()
{
    int i =10 , j =20;
    int *p,*q;
    p = &i;
    q = &j;
    *q = *p;
    cout<<*q<<"  "<<*p<<endl;
}