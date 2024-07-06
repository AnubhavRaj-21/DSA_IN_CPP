#include<iostream>
using namespace std;

int partition(int arr[],int start,int end)
{
    int pos=start;
    for(int i=start;i<=end;i++)
    {
        if(arr[i]<=arr[end])
        {
            swap(arr[i],arr[pos]);
            pos++;
        }
    }
    return pos-1;
}

void quicksort(int arr[],int start,int end)
{
    if(start>=end)
    return;

    int pivot=partition(arr,start,end);
    //left
    quicksort(arr,start,pivot-1);
    //right
    quicksort(arr,pivot+1,end);
}

int main()
{
    int arr[]={34,212,12,23,65,35};
    quicksort(arr,0,5);

    for(int i=0;i<6;i++)
    cout<<arr[i]<<" ";
}