//multiple in heritance

#include<iostream>
using namespace std;

class engineer
{
    public:
    string specialization;

    void work()
    {
        cout<<"I have specialization in: "<<specialization<<endl;
    }
};

class youtuber
{
    public:
    int subcriber;

    void content_creater()
    {
        cout<<"I have a subscriber base of: "<<subcriber;
    }
};

class codeTeacher:public engineer,public youtuber
{
    public:
    string name;

    codeTeacher(string name,string specialization,int subcriber)
    {
        this->name=name;
        this->specialization=specialization;
        this->subcriber=subcriber;
    }

    void showcase()
    {
        cout<<"my name is "<<name<<endl;
        work();
        content_creater();
    }
};
int main()
{
    codeTeacher c1("rohit","cse",49000);
}

//constructor of engineer would be called first then youtuber,and class child class codeTeacher
//as is first inherit engineer(public engineer !)