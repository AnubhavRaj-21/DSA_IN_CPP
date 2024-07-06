//LEETCODE 415 add string

#include<iostream>
#include<algorithm>
using namespace std;
int main(){
    string num1,num2;
    cout<<"enter the value of num1\n";
    cin>>num1;
    cout<<"enter the value of num2\n";
    cin>>num2;

    int index1=num1.size()-1,index2=num2.size()-1;
    string ans;
    int carry=0,sum;

    while(index2>=0)
    {
        sum=(num1[index1]-'0')+(num2[index2]-'0')+carry;//substracting to convert it into number from character
        carry=sum/10;
        char c=sum%10+'0';    //adding it from zero to make sum%10 a character 

        ans+=c;             //ans is string so every c is being added in the next index
        index1--,index2--;
    }

    //index 2 khatam index1 bakki
    while(index1>=0)
    {
        sum=num1[index1]-'0'+carry;
        carry=sum/10;
        char c='0'+sum%10;
        ans+=c;
        index1--;
    }
    //for the case where we get carry to the o indexed string
    if(carry)
    ans+='1';

    //the ans stored the actual answer in reversed manner so...
    reverse(ans.begin(),ans.end());

    cout<<ans;    
}