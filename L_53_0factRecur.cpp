#include<iostream>
using namespace std;

int Factorial(int n)
{
    if(n==0){
        return 1;
    }

    return n*Factorial(n-1);
}
int main()
{
    int n;
    cout<<"enter the number";
    cin>>n;

    if(n<0)
    {
    cout<<"factorial doesn't exist";
    return;
    }

    cout<<Factorial(n);
}



// #include<iostream>
// using namespace std;
// int main()
// {
//     int n;
//     cout<<"enter the number";
//     cin>>n;
//     int fact=1;
//     for(int i=1;i<=n;i++)
//     {
//         fact=i*fact;
//     }
//     cout<<"factorial of the given number is "<<fact;
// }