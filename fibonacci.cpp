//fibbonaci series
#include<iostream>
using namespace std;
int main(){
cout<<"enter the rank of term of fibonacci series:--";
int n;
int a=0,b=1;
cin>>n;
cout<<"the fibonacci series till the"<<n<<"th"<<"term :--"<<a<<" "<<b<<" ";
int next=0;
for(int i=3;i<=n;i++){
next=a+b;
cout<<next<<" ";
a=b;
b=next;
}
}