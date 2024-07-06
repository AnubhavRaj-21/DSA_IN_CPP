//static member function
#include<iostream>
using namespace std;
class customer
{
    string name;
    int acc_num,balance;
    static int total_customer;
    static int total_balance;

    public:
    customer(string name,int acc_num,int balance)
    {
        this->name=name;
        this->acc_num=acc_num;
        this->balance=balance;

        total_customer++;
        total_balance+=balance;
    }

    void deposit(int amount)
    {
        if(amount>0)
        {
            balance+=amount;
            total_balance+=amount;
        }
    }

    void withdrawl(int amount)
    {
        if(amount<=balance&&amount>0)
        {
            balance-=amount;
            total_balance-=amount;
        }
    }

    static void acceStatic()
    {
        cout<<"total number of customer is : "<<total_customer<<" ";
        cout<<"total balnce in the bank is: " <<total_balance<<" ";
    }

    //note static function can only access the static ones
    //static is a function of class 
    //balance ,name etc are part of object

    void display()
    {
        cout<<"nameof the customer:" <<name<<" ";
        cout<<"account number: " <<acc_num<<" "<<"balnce:" <<balance<<" "<<endl;
    }

    void display_total()
    {
        cout<<"total balance in bank is: "<< total_customer<<endl;
    }
};

int customer::total_customer=0;
int customer::total_balance=0;
int main()
{
    customer a1("rohit",1,1000);
    customer a2("mohit",1,1800);

    a2.deposit(500);

    customer::acceStatic();
}