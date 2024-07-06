#include<iostream>
using namespace std;

class customer
{
    string name;
    int balance,acc_num;

public:
    customer(string name,int balance,int acc_num)
    {
        this->name=name;
        this->balance=balance;
        this->acc_num=acc_num;
    }

    //deposit
    void deposit(int amount)
    {
         if(amount<0)
        throw "amount should be greater than zero";
        
            cout<<amount <<"rs is credited succesfully\n";
            balance+=amount;
            cout<<"your total balance is : "<<balance<<endl;
        
       
    }

    //withdraw
    void withdraw(int amount)
    {
        if(amount>0&&amount<=balance)
        {
            balance-=amount;
            cout<<amount<<"rs is debited succesfully\n";
            cout<<"your current balance is: "<<balance<<endl;
        }
        else if(amount>balance)
        {
           throw "u have a low balnce by rs ";
        }
        else
        throw "plz enter a valid withdrawl amount";
    }
};

int main()
{
    customer c1("rohit",5000,53);
    try
    {
        c1.deposit(100);
        c1.withdraw(50000); /*this line is an exception that's why inside the try block the lower code will not run*/
        c1.deposit(123);  
    }
    catch(const char *e)
    {
        cout<<"exception occured: "<<e;
    }
    
     
}





// #include<iostream>
// using namespace std;

// class customer
// {
//     string name;
//     int balance,acc_num;

// public:
//     customer(string name,int balance,int acc_num)
//     {
//         this->name=name;
//         this->balance=balance;
//         this->acc_num=acc_num;
//     }

//     //deposit
//     void deposit(int amount)
//     {
//         if (amount>0)
//         {
//             cout<<amount <<"rs is credited succesfully\n";
//             balance+=amount;
//             cout<<"your total balance is : "<<balance<<endl;
//         }
//         else
//         cout<<"amount should be greater than zero\n";
//     }

//     //withdraw
//     void withdraw(int amount)
//     {
//         if(amount>0&&amount<=balance)
//         {
//             balance-=amount;
//             cout<<amount<<"rs is debited succesfully\n";
//             cout<<"your current balance is: "<<balance<<endl;
//         }
//         else if(amount>balance)
//         {
//             cout<<"u have a low balnce by rs "<<amount-balance;
//         }
//         else
//         cout<<"plz enter a valid withdrawl amount";
//     }
// };

// int main()
// {
//     customer c1("rohit",5000,53);
//     c1.deposit(100);
//     c1.withdraw(50000); //this is an exception as i cant withdraw more money that the available balnce
// }                       //i need to write something in else condition