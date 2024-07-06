#include<iostream>
using namespace std;

class customer
{
    string name;
    int *data;

    public:
    customer()
    {
        name="Anubhav";
        data=new int;
        *data=10;
        cout<<"constructor\n";
    }
    ~customer()
    {
        delete data;
        cout<<"destructor\n";
    }

};
int main()
{
    customer A1;
}