#include<iostream>
using namespace std;

int vowel(string s,int index)
{
    if(index==-1)
    return 0;

    if(s[index]=='a'||s[index]=='e'||s[index]=='i'||s[index]=='o'||s[index]=='u')
    return 1+vowel(s,index-1);

    else 
    return vowel(s,index-1);
}
int main()
{
    string str="anubhav";
    cout<<vowel(str,6);
}