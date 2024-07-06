//exception hanlding 
//it may seem that all expection can be handled using the if else statement 
//but sometimes it becomes complex using if else

// #include<iostream>
// using namespace std;
// int main()
// {
//     int *p= new int[10000000000000000000000000];
//     delete[]p;
// }

#include<iostream>
#include<exception>
using namespace std;
int main()
{
    try {
        int *p=new int[10000000000000];
        delete[]p;
    }
    catch(const exception &e)
    {
        cout<<"exception occured due to line 9: "<<e.what();  //-e is class name and e.what to know what kind of exception is that 
    }
}