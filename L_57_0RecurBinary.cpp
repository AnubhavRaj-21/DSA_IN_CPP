
//binary search

// #include<iostream>
// using namespace std;
// int main()
// {
//     int a[5]={2,4,6,8,9};
//     int start=0,end=4;
//     int mid;
//     while(start<=end)
//     {
//     mid=(start+end)/2;
//     if(a[mid]==8){
//     cout<<mid;
//     return 0;
//     }

//     else if(a[mid]>8)
//     end=mid-1;

//     else
//     start=mid+1;
// }
// }

//recursive binary

#include<iostream>
using namespace std;
int find(int arr[],int start,int end)
{
    if (start>end)
    return -1;
    int mid=(start+end)/2;
    if(arr[mid]==78)
    return mid;

    else if(arr[mid]>57)
    find(arr,start,mid-1);

    else
    find(arr,mid+1,end);
}
int main()
{
    int arr[5]={2,3,4,57,78};
    cout<<find(arr,0,4);
}