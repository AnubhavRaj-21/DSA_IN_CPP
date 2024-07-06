#include<iostream>
using namespace std;
int main(){
    int n;
    cout<<"enter number";
    cin>>n;
    int rem,ans=0;
    while(n){
rem=n%10;
n=n/10;
ans=ans+rem;
    }
    cout<<"sum of digits of number: "<<ans;
}