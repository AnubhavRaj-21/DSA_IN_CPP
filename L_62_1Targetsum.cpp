//TARGET SUM

//if sum of any subset equals to the target then return 1;

#include<iostream>
using namespace std;

bool find(int arr[],int index,int n,int sum)
{
    if(sum==0)
    return 1;

    if(index==n||sum<0)
    return 0;

    return find(arr,index+1,n,sum)||find(arr,index+1,n,sum-arr[index]);
}
int main()
{
    int arr[]={3,6,4,5};
    cout<<"Enter the number to check if can subset's sum exits: ";
    int sum;
    cin>>sum;
    cout<<find(arr,0,4,sum);    
}