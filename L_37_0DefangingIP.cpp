//Q1108(LEETCODE) DEFANGING AN IP ADDRESS

#include<iostream>
using namespace std;
int main(){

  string address="255.100.50.0";

  int index=0;
  string ans;

  while(index<address.size())
  {
    if(address[index]=='.')
    ans+="[.]";

    else
    ans+=address[index];
    index++;
  }
  cout<<ans;
}