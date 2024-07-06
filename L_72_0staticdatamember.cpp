//they are attributes of class or class memeber not to the object

#include<iostream>
using namespace std;
class customer
{
    string name;
    int acc_num,balance;
    static int total_customer;

    public:
    customer(string name,int acc_num,int balance)
    {
        this->name=name;
        this->acc_num=acc_num;
        this->balance=balance;

        total_customer++;
    }

    void display()
    {
        cout<<name<<" "<<acc_num<<" "<<balance<<" "<<total_customer<<endl;
    }

    void display_total()
    {
        cout<<total_customer<<endl;
    }
};

int customer::total_customer=0;

int main()
{
    customer a1("rohit",1,1000);
    customer a2("mohit",1,1800);

    // a1.display();
    // a2.display();
    // customer a3("anubhav",12,1230);
    // a3.display();

    a2.display_total();

}