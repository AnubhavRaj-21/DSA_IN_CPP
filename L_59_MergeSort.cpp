#include<iostream>
#include<vector>
using namespace std;

void merge(int arr[],int start,int mid,int end)
{
    vector<int>temp(end-start+1);
    int left=start,right=mid+1,index=0;

    while(left<=mid&&right<=end)
    {
        if(arr[left]<=arr[right])
        {
            temp[index]=arr[left];
            index++,left++;
        }

        else
        {
            temp[index]=arr[right];
            index++,right++;
        }
    }

    //there is possible that either from left or right the pointer crosses the end value and breaks the 
    //while loop but we know that the both divided array is sorted so just insert it

    //if the right one crosses the pointer and the left one need to be filled
    while(left<=mid)
    {
        temp[index]=arr[left];
        index++,left++;
    }

    //if the left one crosses the pointer and the left one need to be filled
    while(right<=end)
    {
        temp[index]=arr[right];
        index++,right++;
    }

    //now as we get the sorted data in vector temp let's put it in the arr
    index=0;
    while(start<=end)
    {
        arr[start]=temp[index];
        start++,index++;
    }
}

void mergesort(int arr[],int start,int end)
{
    if(start==end)
    return;

    int mid=(start+end)/2;

    //left
    mergesort(arr,start,mid);
    //right
    mergesort(arr,mid+1,end);

    merge(arr,start,mid,end);

}


int main()
{
    int arr[]={12,21,11,3,6,2,10,17,78,45};
    mergesort(arr,0,9);

    for(int i=0;i<10;i++)
    cout<<arr[i]<<" ";
}