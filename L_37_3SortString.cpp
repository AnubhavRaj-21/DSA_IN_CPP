//sort a string with lower time complexity that bubble, selection etc.

#include<iostream>
#include<vector>
using namespace std;
int main(){
    string s="eabcabd";

    vector<int>alpha(26,0);

    for(int i=0;i<s.size();i++)
    {
        alpha[s[i]-'a']++;
    }

    string ans;

    for(int i=0;i<26;i++)
    {
        char c='a'+i;
        while(alpha[i])
        {
            ans=ans+c;
            alpha[i]--;
        }
    }
    cout<<ans;
}