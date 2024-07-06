//Print the matrix in wave form

#include<iostream>
using namespace std;
int main()
{
    int i,j;
  int arr[4][4]={3,6,4,2,7,8,11,5,9,3,2,1,17,8,5,9};


    for(j=0;j<4;j++)
   
    if(j%2==0)
   {
    for(i=0;i<4;i++)            //printing up to down
    cout<<arr[i][j]<<" ";
  }
  else{
    for(i=3;i>=0;i--)
    cout<<arr[i][j]<<" ";        //printing down to up
  }
}