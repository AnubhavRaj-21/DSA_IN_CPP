#include<iostream>
using namespace std;

class student
{
    public:
    string name;
    int roll,age;
    string grade;
};

int main()
{
    student *s=new student;

    (*s).name="Anubhav";
    (*s).age=43;
    (*s).roll=3;   //or s->roll=3;
    (*s).grade="A+";

    cout<<(*s).name<<endl;

    //or

    cout<<s->age;



}