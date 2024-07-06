#include<iostream>
#include<vector>
using namespace std;
int main()
{
    string s="aaaabbbacccc";
    bool odd=0;
    int count=0;

    vector<int>lower(26,0);

    for(int i=0;i<s.size();i++)
    {
      lower[s[i]-'a']++;  
    }

    for(int i=0;i<26;i++)
    {
        if(lower[i]%2==0)
        count+=lower[i];

        else
        count+=lower[i]-1;
        odd=1;
    }

    cout<<count+odd;
}
















//checking the longest palindrome
// #include<iostream>
// #include<vector>
// using namespace std;
// int main(){

//     string s ="aaaaabbbcccc";
//     vector<int>count(26,0);
//     int ans;

//     for(int i=0;i<s.size();i++)
//     {
//         count[s[i]-'a']++;
//     }

//     for(int i=0;i<26;i++)
//     {
//         if(count[i]%2==0)
//         ans+=count[i];
    

//         else 
//         ans+=count[i]-1;
//     }

//     for(int i=0;i<26;i++){
//     if(count[i]%2!=0)
//     ans+=ans+1;
//     break;
//     }
//     cout<<ans;
// }