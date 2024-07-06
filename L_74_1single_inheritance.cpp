//single inheritance

#include<iostream>
using namespace std;
class human
{
    protected:
    string name;
    int age;

    public:

    human(string name,int age)
    {
        this->name=name;
        this->age=age;
    }

     void display()  //when the function is called it first searches in that class 
   {                //then moves to the parent
    cout<<name<<age;
   }
    void work()
    {
        cout<<"I am working\n";
    }
};

class student:public human
{
    int roll,fees;

    public:
    student(string name,int age,int roll,int fees):human (name,age)
    {
        this->roll=roll;
        this->fees=fees;
    }

   void display()
   {
    cout<<name<<age<<roll<<fees;
   }
};
int main()
{
    student a1("anubhav",34,321,99);
    a1.display();
}