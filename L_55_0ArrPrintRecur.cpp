// //Printing array using recursion

// //METHOD 1

// #include<iostream>
// using namespace std;

// void Printarray(int arr[],int index,int size)
// {
//     if(index==size)
//     {
//         return;
//     }
//     cout<<arr[index];
//     Printarray(arr,index+1,5);
// }

// int main()
// {
//     int arr[5]={1,2,3,4,6};
//     Printarray(arr,0,5);
// }


// METHOD 2

#include<iostream>
using namespace std;

void Prtarr(int arr[],int index)
{
if(index==-1)
return;

Prtarr(arr,index-1);
cout<<arr[index];
}

int main()
{
    int arr[5]={2,4,6,8,10};
    Prtarr(arr,4);
}