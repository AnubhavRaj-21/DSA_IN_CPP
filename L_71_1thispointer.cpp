#include<iostream>
using namespace std;

class customer
{
    string name;
    int account_number,balance;


public:
customer(string name,int account_number,int balance)
{
    this->name=name;
    this->account_number=account_number;
    this->balance=balance;
}
};