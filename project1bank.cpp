// Project:  1 //
#include<iostream>
#include<string>
using namespace std;

class PNB
{
   
    string Name;
    int Age;
    double Balance;

    public:
    void setPNB(string name, int age, double balance)
{   
    Name = name;
    Age = age;
    Balance = balance;
}

    void in()
    {
        cout << "Enter Name of Account Holder: ";
        cin>>Name;

        cout<<"Enter Age of account holder: "<<endl;
        cin>>Age;

        cout<<"Enter the available balance: "<<endl;
        cin>>Balance;
    }

    void deposit( )
    {
        double amount;
        cout<<"Enter the amount you wanna deposit: "<<endl;
        cin>>amount;

        Balance += amount;
        cout<<"Money depositted successfully :) "<<Balance<<endl;
    }

    void withdraw( )
   
    {
        double amount;
        cout<<"Enter the amount you wanna withdraw: "<<endl;
        cin>>amount;

        if(amount > Balance)
        {
            cout<<"Insufficient Balance! Please check your amount."<<endl;
        }
        else
        {
            Balance -= amount;
            cout<<"Money withdrawn successfully :) "<<Balance<<endl;
        }
    } 

    void Check_balance()
    {
        cout<<"Balance of your account is - "<<Balance<<endl;
    }

};
 
int main()
{

    PNB pnb;

    double initial_amount;

    cout<<"Enter initial amount:- "<<endl;
    cin>>initial_amount;



    pnb.setPNB(" ", 0, initial_amount);

    cout<<"1. Deposit money: "<<endl;
    cout<<"2. Withdraw money: "<<endl;
    cout<<"3. Check Balance: "<<endl;
    cout<<"4. Exit page: "<<endl;

    int pick;
    cout<<"How may I help you?  : "<<endl;
    cin>>pick;

    switch(pick)
    {
        case 1:
        pnb.deposit();
        break;

        case 2:
        pnb.withdraw();
        break;

        case 3:
        pnb.Check_balance();
        break;

        case 4:
        cout<<"Thank you for using our services"<<endl;

        default:
        cout<<"Invalid option"<<endl;
    }

return 0;
}