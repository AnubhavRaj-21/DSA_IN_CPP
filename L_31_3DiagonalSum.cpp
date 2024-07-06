#include<iostream>
using namespace std;
void printsumdiagonal(int matrix[][3],int row, int col)
{
    int first=0;
    int sec=0;

    //sum of first diagonal
    int i=0;
    while(i<row)
    {
        first+=matrix[i][i];
        i++;
    }

    //sum of second diaginal
    i=0;int j=col-1;
    while(i<row)
    {
        sec+=matrix[i][j];
        i++,j--;
    }

    cout<<first<<"   "<<sec<<" ";
}
int main(){
    int matrix[3][3]={1,2,3,4,5,6,7,8,9};
    printsumdiagonal(matrix,3,3);
}