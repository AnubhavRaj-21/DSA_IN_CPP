#include<iostream>
#include<vector>
using namespace std;

void print(int a[],int index,int n,int sum)
{
    if(index==n)
    {
        cout<<sum<<endl;
        return;
    }

    print(a,index+1,n,sum);

    print(a,index+1,n,sum+a[index]);
}
int main()
{
    int arr[]={1,2,3,4};
    print(arr,0,4,0);
}