#include<iostream>
using namespace std;
int main(){
    int arr1[3][4]={2,3,4,5,0,1,2,3,1,2,6,4};
    int arr2[3][4]={3,4,1,2,2,2,2,0,1,3,5,4};
    int ans[3][4];
    for(int i=0;i<3;i++)
    for(int j=0;j<4;j++)
    {
        ans[i][j]= arr1[i][j] + arr2[i][j];
         cout<<ans[i][j]<<" ";  //--------------->better way to print 
    }
        //  for(int row=0;row<3;row++)
        //  for(int col=0;col<4;col++)
        //  {                                                        
        //      cout<<ans[row][col]<<" ";
        //  }
     
}


//time comolexity is o(row*col)
//space complexinty is o(row*col)