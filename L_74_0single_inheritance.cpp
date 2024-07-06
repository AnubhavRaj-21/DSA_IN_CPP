//single inheritance

#include<iostream>
using namespace std;
class human
{
    protected:
    string name;
    int age;

    public:

    ~human()
    {
        cout<<"hello human\n"; //parent constructor is called first then child 
    }                           //child destructor is called first then parent

    void work()
    {
        cout<<"I am working\n";
    }
};

class student:public human
{
    int roll,fees;

    public:
    student(string name,int age,int roll,int fees)
    {
        this->name=name;
        this->age=age;
        this->roll=roll;
        this->fees=fees;
    }

    ~student()
    {
        cout<<"hello student\n";
    }
};
int main()
{
    student a1("anubhav",34,321,99);
    a1.work();
}