//INHERITANCE 
#include<iostream>
using namespace std;

class human 
{
    string religion,color;
    protected:
    string name;
    int age,weight;

};

class student:public human
{
    int roll,fees;
    public:
    student(string i,int j,int k)
    {
        name=i;
        age=j;
        weight=k;
    }

    void display()
    {
        cout<<"name is: "<<name<<"age is"<<age<<endl;
    }
};
int main()
{
    student a("rohit",20,59);
    a.display();
}