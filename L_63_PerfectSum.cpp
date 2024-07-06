//PERFECT SUM

//find the number of subsets whose sum is equal to the target sum

#include<iostream>
using namespace std;
int total(int arr[],int index,int n,int sum,int count)

{
    if(sum==0)
    {
        return 1+count;
    }
    if(index==n||sum<0)
    return 0;

    return total(arr,index+1,n,sum,count);

    return total(arr,index+1,n,sum-arr[index],count);
    
}
int main()
{
    int arr[]={5,2,3,6,10,8};
    int sum;
    cin>>sum;
    int count;
    cout<<count;
}