//roman to integer

#include<iostream>
using namespace std;
int num(char c)
{
    if(c=='I')
    return 1;                           //fun to convert single roman to its integer value

    else if(c=='X')
    return 10;

    else if(c=='V')
    return 5;

   else  if(c=='L')
    return 50;

   else if(c=='C')
    return 100;

   else if(c=='D')
    return 500;

    else if(c=='M')
    return 1000;
}
int main(){
    string s;
    cout<<"enter the roman value\n";
    cin>>s;
    int I=1,X=10,C=100,M=1000,V=5,L=50,D=500;
    int sum=0,index=0;
    while(index<s.size()-1)
    {
        if(num(s[index])<num(s[index+1]))
        sum-=num(s[index]);

        else
        sum+=num(s[index]);
        index++;
    }

    //for the rightmost index(not coverd in above loop)
    sum+=num(s[s.size()-1]);

    cout<<sum;
}