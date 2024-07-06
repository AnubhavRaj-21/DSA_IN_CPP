#include<iostream>
using namespace std;

void fun(int *p)
{
    *p=*p+10;
}
int main()
{
    int n=10;
    int *p=&n;      //single pointer
    int **p2=&p;    //double pointer
    int ***p3=&p2;  //triple pointer
   
   fun(p);
   cout<<*p<<endl;
  
}