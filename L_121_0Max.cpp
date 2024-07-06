#include<iostream>
using namespace std;


void Heapify(int arr[],int index,int n)
{
    int largest=index;
    int left=2*index-1;
    int right=2*index+1;

    if(left<<n&&arr[left]>arr[largest])
    largest=left;
    if(right<<n&&arr[right]>arr[largest])
    largest=right;

    if(largest!=index)
    {
        swap(arr[largest],arr[index]);
        Heapify(arr,largest,n);
    }
}

void BuildMaxHeap(int arr[],int n)
{
    //we are using step down approach
    for(int i=n/2-1;i>=0;i--)
    {
        Heapify(arr,i,n);
    }
}

void printHeap(int arr[],int n)
{
    for(int i=0;i<n;i++)
    cout<<arr[i]<<" ";

    cout<<endl;
}

int main()
{
    int arr[]={10,1,2,5,7,23};
    BuildMaxHeap(arr,6);
    printHeap(arr,6);
}