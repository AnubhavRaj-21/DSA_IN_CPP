//trying to increase the value of p by 1;


#include<iostream>
using namespace std;

void fun(int **p1)
{
    *p1=*p1+1;
}
int main()
{
    int n=10;
    int *p=&n;      //single pointer
    int **p2=&p;    //double pointer
    int ***p3=&p2;  //triple pointer
   

   cout<<p<<endl;
   fun(p2);
   cout<<p<<endl;
  
}

//done succesfully