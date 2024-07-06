#include<iostream>
using namespace std;

class student
{
    string name;
    int *data;

    public:

    student()
    {
        name="4";
        cout<<"constructor"<<name<<endl;
    }
    student(string name)
    {
        this->name=name;
        cout<<"constructor"<<name<<endl;
    }

    ~student()
    {
        cout<<"destructor"<<name<<endl;
    }
};
int main()
{
    student a1("1"),a2("2"),a3("3");
    student *a4=new student;
    delete a4;
}