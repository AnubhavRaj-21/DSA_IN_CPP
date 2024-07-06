//find all the subsequence of the sets

#include<iostream>
#include<vector>
using namespace std;


void subseq(int arr[],int index,int n,vector<vector<int>>&ans,vector<int>temp)
{
//stoping condition
    if(index==n)
    {
        ans.push_back(temp);
        return;
    }

//no
subseq(arr,index+1,n,ans,temp);

//yes
temp.push_back(arr[index]);
subseq(arr,index+1,n,ans,temp);
}



int main()
{
    int arr[]={1,2,3};
    vector<vector<int>>ans;
    vector<int>temp;
    subseq(arr,0,2,ans,temp);
    
    for(int i=0;i<ans.size();i++)
    {
        for(int j=0;j<ans[i].size();j++)//number of column
        {
            cout<<ans[i][j]<<" ";
        }

        cout<<endl;
    }
}