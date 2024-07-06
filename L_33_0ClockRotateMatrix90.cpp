//ROTATE THE MATRIX BY 90 DEGREE


#include<iostream>
using namespace std;
int main()
{
   int matrix[4][4]={1,2,3,4,5,6,7,8,9,10,11,12,13,14,15,16};

   //METHOD 1
//    int ans[4][4];

//    for(int i=0;i<3;i++)  //3=row-1
//    for(int j=0;j<3;j++)
//    {
//     ans[j][4-1-i]=matrix[i][j];  //row-1-i;
//    }
//time complexity ans space complexity is O(n^2)


//METHOD 2

//if we observe the matrix we can notice that (col--->reverse)--->row
//i.e if we transpose the matrix and then reverse the row we will get the required result 

//transposing the matrix
for(int i=0;i<3;i++)
for(int j=i+1;j<3;j++){
    swap(matrix[i][j],matrix[j][i]);
}
//reversing the row of the matrix(typical start and end method)
for(int i=0;i<4;i++) //number of rows =4
{
    int start=0,end=3;  //nubmer of columns = 4 thus end=3
    while(start<end)
    {
        swap(matrix[i][start],matrix[i][end]);
        start++,end--;
    }
}
}