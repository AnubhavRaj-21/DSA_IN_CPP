#include<iostream>
using namespace std;

class student
{
    private:
    string name,grade;
    int age , roll;

    //the above class is private in order to use it i need to use functions Getter and Setter
    public:
    void setname(string s)
    {
        if(s.size()==0)
        {
            cout<<"invalid name";
            return;
        }
        name=s;
    }

    void setage(int s)
    {
        age=s;
    }

    void setroll(int r)
    {
        roll=r;
    }

    void setname(string g)
    {
        grade=g;
    }

    void getname(){
    cout<<name<<endl;
    }

    void getage()
    {
        cout<<age<<endl;
    }

     string getgrade(int pin)
    {
        if(pin==9031)
        {
        cout<<age<<endl;
        return grade;
        }

        else
        return "wrong passaword";
    }
};
int main()
{
   student s1;
   s1.setname("Anubhav");
   s1.setroll(1169);
   s1.setage(20);

   s1.getname();
   s1.getage(); 
}