#include<iostream>
using namespace std;
void func(int *p,int *q)
{
    p =q;
    *p = 2;
}
int main()
{
    int i =0,j=1;
    func(&i,&j);
    cout<<i<<"  "<<j<<endl;
}