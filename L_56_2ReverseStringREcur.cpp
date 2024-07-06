//reversing a string

#include<iostream>
using namespace std;

void reverse(string &s,int start,int end)
{
    if(start>=end)
    return;

   swap(s[start],s[end]);
   reverse(s,start+1,end-1);
}
int main()
{
    string str="anubhav";
    reverse(str,0,6);
    cout<<str;
}