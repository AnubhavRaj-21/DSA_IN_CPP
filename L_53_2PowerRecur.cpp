//Power of any number

#include<iostream>
using namespace std;

int Powernum(int num,int n)
{
    if(n==0)
    return 1;

    // if(n==1)
    // return num;

    return num*Powernum(num,n-1);
}
int main()
{
    int n,num;
    cout<<"enter the number";
    cin>>num;
    cout<<"enter the power";
    cin>>n;
    cout<<Powernum(num,n);
}