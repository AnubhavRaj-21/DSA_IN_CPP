//hybrid inheritance

#include<iostream>
using namespace std;

class human
{
    public:
    string name;

    void display()
    {
        cout<<"my name is "<<name<<"\n";
    }
};

class engineer: public virtual human
{
    public:
    string specialization;

    void work()
    {
        cout<<"I have specialization in: "<<specialization<<endl;
    }
};

class youtuber:public virtual human
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
    int salary;

    codeTeacher()
    {

    }
    codeTeacher(string name,string specialization,int subcriber,int salary)
    {
        this->name=name;
        this->specialization=specialization;
        this->subcriber=subcriber;
        this->salary=salary;
    }

   
};
int main()
{
    codeTeacher c1("rohit","cse",49000,99);
    c1.display();
}








//the below code with show error as is getting "name" inherit from both youtuber to engineeer(from parent human)
//in order to avoid that we use virtual keyword

// //hybrid inheritance

// #include<iostream>
// using namespace std;

// class human
// {
//     public:
//     string name;

//     void display()
//     {
//         cout<<"my name is "<<name<<"\n";
//     }
// };

// class engineer: public human
// {
//     public:
//     string specialization;

//     void work()
//     {
//         cout<<"I have specialization in: "<<specialization<<endl;
//     }
// };

// class youtuber:public human
// {
//     public:
//     int subcriber;

//     void content_creater()
//     {
//         cout<<"I have a subscriber base of: "<<subcriber;
//     }
// };

// class codeTeacher:public engineer,public youtuber
// {
//     public:
//     int salary;

//     codeTeacher()
//     {

//     }
//     codeTeacher(string name,string specialization,int subcriber,int salary)
//     {
//         this->name=name;
//         this->specialization=specialization;
//         this->subcriber=subcriber;
//         this->salary=salary;
//     }

   
// };
// int main()
// {
//     codeTeacher c1("rohit","cse",49000,99);
//     c1.display();
// }