#include<iostream>
using namespace std;
float sum(float x , float y)
{
    return x + y;
}
int main()
{
    float x ,y;
    string f_name , s_name;
    int num1 , num2;
    cin>>x>>y;
    cin>>f_name>>s_name;
    cin>>num1>>num2;
    cout<<sum(x,y)<<endl;
}
//هي Function بتتنادي علي حسب اللي داخلها