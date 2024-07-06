#include<iostream>
using namespace std;

void printcol(int arr[][4],int row,int col)
{                                       //not necessary to mention row here but is necessary here
  for(int i=0;i<row;i++)
  {
    for(int j=0;j<col;j++)
    {
        cout<<arr[i][j];
    }
  }

}              
int main()
{
    //create 2d array
    int arr[3][4]={1,2,3,4,5,6,7,8,9,10,11,12};

    //print all the values of array
    // for(int row=0;row<3;row++)
    // {
    //     for(int col=0;col<4;col++)
    //     {                                                          //using this loop the array would be printed row-wise
    //         cout<<arr[row][col]<<" ";
    //     }
    // }

    //Print all the values in array col-wise and using function
  //  printcol(arr,3,4);










//printing array if same way as of matrix
 int arr12[3][4]={2,3,4,5,1,2,6,8,4,9,3,2};
    for(int i=0;i<3;i++)
    {
        for(int j=0;j<4;j++)
        {
            cout<<arr12[i][j]<<" ";
        }
        cout<<endl;
    }




    //find an element in an 2d array
    int x=7;

    for(int row=0;row<3;row++)
    for(int col=0;col<4;col++)
    {
        if(arr[row][col]==x)
        cout<<"yes";
        return 0;
    }
    cout<<"no";
}