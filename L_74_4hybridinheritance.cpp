#include<iostream>
using namespace std;

class student
{
    public:
    void print()
    {
        cout<<"I AM student\n";
    }
};

class boy:public student,public male
{
    public:
    void boyprint()
    {
        cout<<"I am boy\n";
    }
};

class girl:public student,public female
{
   public:
   void girlprint()
   {
    cout<<"I am a girl\n";
   }
};

class male
{
    public:
    void maleprint()
    {
        cout<<"I am a male\n";
    }
};

class female
{
    public:
 void femaleprint()
    {
        cout<<"I am a female\n";
    }
};
int main()
{
    girl g1;
    g1.girlprint();
    g1.print();
    g1.femaleprint();

    boy b1;
    b1.maleprint();
}