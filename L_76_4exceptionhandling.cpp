#include<iostream>
#include<exception>
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

/*how would the class of exception would look like 
note:-the code we wrote below for exception class would not run as compiler creates itself*/
// class exception
// {
//     protected:
//     string msg;
//     public:
//     exception(string msg)
//     {
//         this->msg=msg;
//     }
//     string what()
//     {
//         return msg;
//     }
// };

// class runtime_error:public exception
// {
//     public:
//     runtime_error(const string &msg):exception(msg)
//     {

//     }
// };

/*But we can create for own class for our errors*/

class invalidamount:public runtime_error
{
    public:
    invalidamount(const string &msg):runtime_error(msg){};
};


    //deposit
    void deposit(int amount)
    {
         if(amount<0)
        throw runtime_error("amount should be greater than zero");
        
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
           throw runtime_error("u have a low balnce by rs ");
        }
        else
        throw invalidamount("plz enter a valid withdrawl amount");//here it would throw a object of datatype runtime_error thus i need to change in catch
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
    catch(const runtime_error &e)
    {
        cout<<"exception occured: "<<e.what();
    }
    catch(const invalidamount &e)
    {
        cout<<"exception occured: "<<e.what();
    }
    catch(const bad_alloc &e) 
    {
        cout<<"exception occured: "<<e.what();
    }
    /*we write this catch(const bad_alloc &e) instead of catch(const char *e) even though the 
    second one would do the job we do so that it would be easy for a coder to read it*/
    //default catch
    catch(...)
    {
        cout<<"exception occured";
    }
    
     
}