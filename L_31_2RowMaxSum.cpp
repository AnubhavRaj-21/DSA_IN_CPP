#include<iostream>
using namespace std;
void printrowmax(int arr[][4],int row, int col)
{
      int sum=INT16_MIN,index=-1;
   
    for(int i=0;i<5;i++)
    {
        int total=0;
        for(int j=0;j<4;j++)
        total+=arr[i][j];

        if(total>sum)
        {
            sum=total;
            index=i;
        }
    }
    cout<<index<<" ";
}
int main(){
     int arr[5][4]={3,4,7,18,2,8,3,9,5,4,2,2,7,3,0,8,2,8,9,1};
     int arr2[5][4]={1,2,3,4,5,6,7,8,9,10,11,12,13,14,15,16,17,18,19,20};
     printrowmax(arr,4,5);
  
}