#include<iostream>
using namespace std;
int main()
{
    cout<<"========Simple_Calculator========\n";
    float Num1 ,Num2;
     char op;
     while(1)
     {
        cout<<"Enter the first number : ";
    cin>>Num1;
    cout<<endl;
    cout<<"Enter the operator (+,-,*,/): ";
    cin>>op;
    cout<<endl;
    cout<<"Enter the second number : ";
    cin>>Num2;
    cout<<endl;

        switch(op)
    {
        case '+':
            cout<<Num1<<"+"<<Num2<<"="<<Num1+Num2<<endl;
            break;
        case '-':
            cout<<Num1<<"-"<<Num2<<"="<<Num1-Num2<<endl;
            break;
        case '*':
            cout<<Num1<<"*"<<Num2<<"="<<Num1*Num2<<endl;
            break;
        case '/':
            if(Num2 != 0)
            {
            cout<<Num1<<"/"<<Num2<<"="<<Num1/Num2<<endl;
            break;
            }
            else
            {
                cout<<"Error! Division By Zero is Not allowed..\n Please Try Again!... "<<endl;
                continue;
            }
        default:
            cout<<"Error!\nPlease Try Again..."<<endl;
            continue;
    }
    char choice;
    
        cout<<"Do you want to calculate again (Y,N):  ";
        cin>>choice;
        if(choice != 'Y' && choice != 'y')
        break;
}
     }
     
    