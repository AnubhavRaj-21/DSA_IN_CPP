//Print in the spiral form

#include<iostream>
using namespace std;
int main()
{
    int arr[6][6]={1,2,3,4,5,6,7,8,9,10,11,12,13,14,15,16,17,18,19,20,21,22,23,24,25,26,27,28,29,30,31,32,33,34,35,36};
    
    int top=0,right=5,bottom=5,left=0;

    while(top<=bottom && left<=right)
    {
        //Print top
        for(int j=left;j<=right;j++)
        cout<<arr[top][j]<<" ";         
        top++;

        //Print right
        for(int i=top;i<=bottom;i++)
        cout<<arr[i][right]<<" ";       
        right--;

        if(top<=bottom)//-------->>put this condition as once the top<=bottom condition passes in the loop
        {                         //top increases its value within the loop so in order to counter that

        //Print bottom
        for(int j=right;j>=left;j--)
        cout<<arr[bottom][j]<<" ";      
        bottom--;
        }

        //Print left
        if(left<=right)
        {
        for(int i=bottom;i>=top;i--)
        cout<<arr[i][left]<<" ";        
        left++;
        }

    }

}