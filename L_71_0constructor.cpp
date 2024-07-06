//

#include<iostream>
using namespace std;
class customer
{
    string name;
    int account_number,balance;

    public:
    //default constructor
    customer()
    {
        cout<<"constructor\n";
        name="Anubhav";
        account_number=12;
        balance=1000;
    }
    //parametarized constructor
    customer(string a,int b,int c)
    {
        name=a;
        account_number=b;
        balance=c;
    }

    //constructor overloading--same function name but different parameter

    customer(string a,int b)
    {
        name=a;
        account_number=b;
    }

//incline constructor
inline customer(string a,int b,int c): name(a),account_number(b),balance(c)
{

}
    void display()
    {
        cout<<name<<" "<<account_number<<" "<<balance<<endl;
    }
};

int main()
{
    customer A1;
    A1.display();
    
    customer A2("Rohit",123,768);
    A2.display();

    customer A3("Nikhil",124);
    A3.display();
}