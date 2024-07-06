//linear search

// #include<iostream>
// using namespace std;
// int main()
// {
//     int arr[5]={1,2,3,4,5};
//     //search if x is situated in arr array
//     for(int i=0;i<5;i++){
//     if(arr[i]==3)
//     cout<<i;
// }
// }

//recursive linear seach
#include<iostream>
using namespace std;
bool linear(int arr[],int x,int index,int size)
{
    if(index==size)
    return 0;

    if(arr[index]==x)
    return 1;

    return linear(arr,x,index+1,size);
}
int main()
{
    int arr[5]={2,3,5,79,4};
    cout<<linear(arr,79,0,5);
}