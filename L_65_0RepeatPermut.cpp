//input can only be bewteen -10to10
//LEETCODE(PERMUTATION II 47)

#include<iostream>
#include<vector>
using namespace std;

void permut(vector<int>&arr,vector<vector<int>>&ans,int index)
{
    if(index==arr.size())
    {
        ans.push_back(arr);
        return;
    }

    vector<bool>use(21,0);
    for(int i=index;i<arr.size();i++)
    {
        if(use[arr[i]+10]==0)
        {
            swap(arr[index],arr[i]);
            permut(arr,ans,index+1);
            swap(arr[index],arr[i]);
            use[arr[i]+10]=1;
        }
    }
}

int main()
{
    vector<vector<int>>ans;
    vector<int>arr={1,1,2};
    permut(arr,ans,0);
}






// #include<iostream>
// #include<vector>
// using namespace std;

//  void permut(vector<int>&arr,vector<vector<int>>&ans,int index)
// {
//     if(index==arr.size())
//     {
//         ans.push_back(arr);
//         return;
//     }

//     if(arr[index]==arr[index+1])
//     index++;
    

//     for(int i=index;i<arr.size();i++)
//     {
//         swap(arr[i],arr[index]);
//         permut(arr,ans,index+1);
//         swap(arr[i],arr[index]);
//     }
// }

// int main()
// {
//     vector<int>arr={1,1,2};
//     vector<vector<int>>ans;

//     permut(arr,ans,0);

//     for(int i=0;i<ans.size();i++)
//     {
//         for(int j=0;j<ans[i].size();j++)
//         {
//             cout<<ans[i][j]<<" ";
//         }
//         cout<<endl;
//     }
// }