//Transpose of a matrix

#include<iostream>
using namespace std;
int main()
{
int arr[4][4]={1,2,3,4,5,6,7,8,9,10,11,12,13,14,15,16};


// //method 1
// int arrt;

// for(int i=0;i<4;i++)
// for(int j=0;j<4;j++)
// arrt[j][i]=arr[i][j];         

// for(int i=0;i<4;i++)
// for(int j=0;j<4;j++)
// cout<<arrt<<" ";

//time complexity for the above code is O(n^2) and space complexity is O(n^2)




//method 2
for(int i=0;i<3;i++)   //row-1=3
for(int j=i+1;j<4;j++) //col=4
{
    swap(arr[i][j],arr[j][i]);
}

//time complexity for the above code is o(n^2) and space complexity is O(1)
}