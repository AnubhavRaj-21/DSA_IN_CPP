//LONGEST PREFIX SUFFIX

#include<iostream>
#include<vector>
using namespace std;
int main(){
     string s={'A','B','C','D','E','F','A','B','C','D','E'};
    vector<int>lps(s.size(),0);
    int pre=0,suf=1;
   
    while(suf<s.size())
    {
        if(s[pre]==s[suf])
        {
            lps[suf]=pre+1;
            pre++,suf++;
        }

        else
        {
            if(pre==0)
            {
                lps[suf]=0;        //in case if lps[suf]!=lps[pre]
                suf++;             //we can just put pre=lps[pre-1]
            }

            else
            pre=lps[pre-1];
        }
    }

    for(int i=0;i<s.size();i++)
    {
        cout<<lps[i];
    }
}