#include<iostream>
using namespace std;
int main()
{
    try {
        int *p=new int[10000000000000];
        delete[]p;
    }
    catch(const bad_alloc &e)
    {
        cout<<"exception occured due to line 9: "<<e.what();  //-e is class name and e.what to know what kind of exception is that 
    }
}