//subseq on strings

#include<iostream>
#include<vector>
using namespace std;

void subseq(string s,int start,int end,vector<vector<char>>&ans,vector<char>temp)
{
    if(start==end)
    {
        ans.push_back(temp);
        return;
    }

    //no case
    subseq(s,start+1,end,ans,temp);

    //yes case
    temp.push_back(s[start]);
    subseq(s,start+1,end,ans,temp);
}

int main()
{
    string s="abc";
    vector<vector<char>>ans;
    vector<char>temp;

    subseq(s,0,3,ans,temp);

    //printing the result
    for(int i=0;i<ans.size();i++)
    {
        for(int j=0;j<ans[i].size();j++)
        {
            cout<<ans[i][j]<<" ";
        }
        cout<<endl;
    }

}