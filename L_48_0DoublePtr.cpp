#include<iostream>
using namespace std;
int main()
{
    int n=10;
    int *p=&n;      //single pointer
    int **p2=&p;    //double pointer
    int ***p3=&p2;  //triple pointer
    cout<<p<<endl;
    cout<<p2<<endl;
    cout<<p3<<endl;


    //modifying the value of n


    *p=*p+5;        //increases the value of n by 5 
    **p2=**p2+5;    //increases the value of n by 5
    ***p3=***p3+5;  //increases the value of n by 5 
  

  
}