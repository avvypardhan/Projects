#include<iostream>
#include<conio.h>
#include<stdio.h>
#include<stdlib.h>
using namespace std;

class bank
{
private:
    char name[30], add[100], t;
    int balance, withdraw, deposit, ch;
public:
    void open_account();
    void deposit_money();
    void withdraw_money();
    void check_account();
};
void bank::open_account()
{
    cout << "Enter Your Full Name : ";
    cin >>name;
    cout << "Enter Your Address : ";
    cin >> add;
    cout << "Type of Account : Saving (s) or Current (c)";
    cin >>t;
    cout << "Enter Amount of Deposit : ";
    cin >> balance;
    cout << "Your Account Is Created! ";
}

void bank::deposit_money()
{

 cout << "Enter Amount of Deposit : ";
 cin  >> deposit;
 balance+=deposit;
 cout << "Total Amount : " << balance;
}


void bank::check_account()
{
    cout << "Your Full Name : " << name;
    cout << "Your Address : " << add;
    cout << "Type of Account : " << t;
    cout << "Total Amount : " << balance;
}
void bank::withdraw_money()
{
    cout << "Enter Amount To Withdraw : ";
    cin >> withdraw;
    balance-=withdraw;
    cout << "Now Total Amount is : " << balance;
}

main()
{
    int ch;
    char x;
    bank obj;
    do
    {

    cout << "1.) Open Account. \n";
    cout << "2.) Deposit Money. \n";
    cout << "3.) Withdraw Money. \n";
    cout << "4.) Check Account. \n";
    cout << "5.) Exit. \n";
    cout << "Select the option from above.\n";
    cin >> ch;

    switch(ch)
    {
    case 1:
        {
            cout << "Open Account \n";
            obj.open_account();
            break;
        }
    case 2:
        {
            cout << "Deposit Your Money \n";
            obj.deposit_money();
            break;
        }
    case 3:
        {
            cout << "Withdraw Your Money \n";
            obj.withdraw_money();
            break;
        }
    case 4:
        {
            cout << "Check Account \n";
            obj.check_account();
            break;
        }
    case 5:
        if(ch==5)
        {
            exit(1);
        }
    default:
        cout << "Invalid Input!!\n";
        cout << "Try Again!";
    }
    cout << "\nDo You want to exit y/n.";
    x=getch();
    if(x=='y' || x=='Y')
    {
        exit(0);
    }
 }while(x=='y' || x=='Y');

}
