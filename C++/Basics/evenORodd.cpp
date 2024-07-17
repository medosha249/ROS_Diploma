#include<iostream>
using namespace std;
int main()
{
    int Num;
   while(1)
   {
     cout<<"Enter A Number : ";
    cin>>Num;
    cout<<endl;
    if(Num%2 == 0)
    {
        cout<<"The Number is Even."<<endl;
    }
    else if(Num == 0)
    {
        cout<<"The Number is Zero."<<endl;
    }
    else
    {
        cout<<"The Number is Odd."<<endl;
    }
    char choice;
    
        cout<<"Do you want to calculate again (Y,N):  ";
        cin>>choice;
        if(choice != 'Y' && choice != 'y')
        break;
   }
}