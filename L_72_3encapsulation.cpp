//encapsulated data

#include<iostream>
using namespace std;
class customer
{
    string name;
    int balance,age;

    public:

    customer(string a,int b,int c)
    {
        name=a;
        balance=b;
        age=c;
    }

    void deposit(int amount)
    {
        if(amount>0)
        {
            balance+=amount;
        }
        else
        cout<<"invalid amount\n";
    }

    void updateage(int age)
    {
        if(age>0&&age<150)
        this->age=age;

        else
        cout<<"Invalid age\n";
    }

};
int main()
{
    customer a1("anubhav",4500,24);

}



// //unencapsulated data

// #include<iostream>
// using namespace std;

// class customer{
// public:
// string name;
// int balance,age;

// customer(string a,int b, int c)
// {
//     name=age;
//     balance=b;
//     age=c;
// }
// };
// int main()
// {
//     customer a1("anubhav",-5,-344);
//     a1.name="anubhav";
//     a1.balance=3512543;
// }

// //note here we can see that user can put any data he wants and i have no control on
// //the data that's why i need encapsulation of data..