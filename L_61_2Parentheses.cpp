//generate parentheses

#include<iostream>
#include<vector>
using namespace std;

void parentheses(int n,int left,int right,vector<string>&ans,string &temp)
{
    if(left+right==2*n)
    {
        ans.push_back(temp);
        return;
    }

    //left parentheses
    if(left<n)
    {
        temp.push_back('(');
        parentheses(n,left+1,right,ans,temp);
        temp.pop_back();
    }

    //right parentheses
    if(right<left)
    {
        temp.push_back(')');
        parentheses(n,left,right+1,ans,temp);
        temp.pop_back();
    }
}

int main()
{
    string temp;
    vector<string>ans;
}