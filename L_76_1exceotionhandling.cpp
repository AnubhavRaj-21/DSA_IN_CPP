#include<iostream>
using namespace std;
int main()
{
    int a,b;
    cin>>a>>b;
    
    try
    {
        if(b==0)
        throw "divison by zero is invalid";
        int c=a/b;
        cout<<c;
    }

    catch(const char *e)
    {
        cout<<"exception occured "<<e<<endl;
    }  
}


// #include<iostream>
// using namespace std;
// int main()
// {
//     int a,b;
//     cin>>a>>b;
//     if(b==0)
//     {
//         cout<<"division by zero is invalid";
//         return 0;
//     }
//     int c=a/b;
//     cout<<c;
// }