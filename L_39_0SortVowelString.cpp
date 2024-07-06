//LEETCODE 2785 Sort vowel in string a/c to ASCII values

#include<iostream>
#include<vector>
using namespace std;
int main(){
    string s="LEetcOde";
    vector<int>lower(26,0),upper(26,0);   //to store upper and lower letters



    for(int i=0;i<s.size();i++)
    {
        if(s[i]=='a'||s[i]=='e'||s[i]=='i'||s[i]=='o'||s[i]=='u')
        {
            lower[s[i]-'a']++;//---------->storing the occurence of each voewl in there respective indexes(accourdig to their alphabetical rank.e.g a is in 0 while e is in 4th and so on.)
            s[i]='#';    //--------------->done to avoid more codes
        }

        else if(s[i]=='A'||s[i]=='E'||s[i]=='I'||s[i]=='O'||s[i]=='U')
        {
            upper[s[i]-'A']++;
            s[i]='#';
        }
    }


    string ans;

    for(int i=0;i<26;i++)
    {
        char c='A'+i;
        while(upper[i])//---------->only the index where the vowel is present will run. e.g-0,4,etc.
        {
            ans=ans+c;   //ans is string so vowel is being stored compactically
            upper[i]--;
        }
    }

    for(int i=0;i<26;i++)
    {
        char c='a'+i;
        while(lower[i])
        {
            ans=ans+c;
            lower[i]--;
        }
    }

    int second=0,first=0; //fist is a pointer on s and second is the pointer on ans

    while(second<ans.size())
    {
        if(s[first]=='#')//---------->first is on string s(L##tc#d#) and second is on string ans(EOee)
        {
            s[first]=ans[second];
            second++;
        }
        first++;
    }  
    cout<<s;  
}