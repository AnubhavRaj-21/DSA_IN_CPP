
//my method


// #include<iostream>
// using namespace std;

// int sumarr(int arr[],int index)
// {
//      int sum;
//     if(index==-1)
//     return sum;

   
//     sum=sum+arr[index];
//     sumarr(arr,index-1);
//     return sum;
// }
// int main()
// {
//     int arr[5]={3,4,5,8,2};
//     cout<<sumarr(arr,4);
// }


 #include<iostream>
using namespace std;

int sum(int a[],int index)
{
    if(index==-1)
    return 0;

    
    return a[index]+sum(a,index-1);
}


int main()
{
    int arr[5]={3,2,5,1,7};
    cout<<sum(arr,4);
}
