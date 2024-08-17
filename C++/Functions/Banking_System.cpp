#include <iostream>
#include <string>
using namespace std;
string username;
float accountBalance = 0;
void accountCreation()
{
    cout << "Enter the username: ";
    cin >> username;
    float initial_deposit;
    cout << "Enter the initial deposit amount: ";
    cin >> initial_deposit;
    if (initial_deposit < 100)
       { cout << "The deposit must be at least 100$ " << endl;}
    else
    {
        cout << "Welcome "<<username<<" Your account has been created succesfly." << endl;
    }
    accountBalance = initial_deposit;
}
void accountBalance_inquiery()
{
    cout << "Your Account Balance is " << accountBalance << "$" << endl;
}
void withdrawl()
{
    float withdrawl;
    cout << "Enter the amount of withdrawl: ";
    cin >> withdrawl;
    if (withdrawl > accountBalance)
        cout << "You don't have money u poor!" << endl;
    else
    {
        cout << "withdrawal is completed. " << endl;
    }
    accountBalance = accountBalance-withdrawl;
}
void deposit()
{
    float deposit;
    cout << "Enter deposit amount: ";
    cin >> deposit;
    if(deposit>50)
        cout<<"The deposit must be at least 50$ "<<endl;
    else{
        cout<<"The dposit has been made succesfuly!\n";
    }
    accountBalance = accountBalance+deposit;
}
int main()
{
    while(1)
    {
    cout<<"1.Account Creation\n2.Account Balance Inquiery\n3.Withdrawal\n4.Deposits\n5.Exit\n";
    int choice;
    cout<<"Enter Your Choice: ";
    cin>>choice;
    switch(choice)
    {
        case 1:
            accountCreation();
            break;
        case 2:
            accountBalance_inquiery();
            break;
        case 3:
            withdrawl();
            break;
        case 4:
            deposit();
            break;
        case 5:
            return 0;
        default:
            cout<<"Error!\nPlease try again.\n";
            break;
    
    }
    continue;
    }
}