//ROTATE THE MATRIX BY 180 DEGREE


#include<iostream>
using namespace std;
int main()
{
   int matrix[4][4]={1,2,3,4,5,6,7,8,9,10,11,12,13,14,15,16};

//APPROACH 1
//I KNOW TO ROTATE MATRIX BY 90 DEGREE I WILL JUST DO THAT 2 TIMES

//APPROACH 2
//OBSERVE THE MATRIX..THE RESULT CAN BE OBTAINED BY FIRST REVERSING THE COL AND THEN REVERSING THE ROW
for(int j=0;j<3;j++)
{
    int start=0,end=3;
    while(start<end)
    {
        swap(matrix[start][j],matrix[end][j]);   //reversed the col
        start++,end--;
    }
}
for(int i=0;i<3;i++)
{
    int start=0,end=3;
    while(start<end)
    {
        swap(matrix[i][start],matrix[i][end]);  //reversed the row
        start++,end--;
    }
}
}