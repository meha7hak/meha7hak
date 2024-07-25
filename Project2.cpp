/* project: 2
Fee management system */
#include<iostream>
using namespace std;
class Data
{
    private:
    string name;
    int rollno;
    string branch;

    public:

    void in()
    {
        cout<<"Enter student's Name: "<<endl;
        cin>>name;

        cout<<"Enter student's roll no: "<<endl;
        cin>>rollno;

        cout<<"Enter Branch of Student: "<<endl;
        cin>>branch;
    }
};
class student: public Data
{
    private:
    double fee;
    double amount = 77000;

    public:

    void deposit()

    {
        cout<<"Enter amount of fee: ";
        cin>>fee;

        if(fee == amount )
        {
            cout<<"The fee is paid :) "<<endl;
        }

        else if(fee>amount)
        {
            cout<<"The amount of fee is greater than actual fee: ";
        
        }

        else
        {
            cout<<"The fee is pending!";

        }
    }
};

int main()
{
    student f;
    f.in();
    f.deposit();
    return 0;
}
