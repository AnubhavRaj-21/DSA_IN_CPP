#include<iostream>
using namespace std;

void Print(int num)
{
    if(num==1){
        cout<<num<<endl;
        return;
    }
    Print (num-1);
    cout<<num<<endl;
}
int main()
{
    cout<<"enter the number";
    int num;
    cin>>num;
    Print(num);

}










//USING TWO INPUTS


// #include<iostream>
// using namespace std;

// void print(int n,int num)
    
// {
//     if(num==n)
//     {
//     cout<<num<<endl;
//     return;
//     }

//     else
//     {
//     cout<<num<<endl;
//     print(n,num+1);
//     }
// }
// int main()
// {
//     int n;
//     cout<<"enter the value ";
//     cin>>n;
//     int num=1;
//     print(n,num);
// }