//trying to increase the value of p by 1;


#include<iostream>
using namespace std;

void fun(int *p1)
{
    p1++;
}
int main()
{
    int n=10;
    int *p=&n;      //single pointer
    int **p2=&p;    //double pointer
    int ***p3=&p2;  //triple pointer
   
   fun(p);
   cout<<p<<endl;
  
}

//this code doesn't work as p1 and p are not same the changes we expected actually happened in p1 not in p