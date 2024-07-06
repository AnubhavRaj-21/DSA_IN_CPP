//search in sorted row-column wise matrix

#include<iostream>
using namespace std;
int main()
{
    int matrix[5][5]={4,8,15,25,60,18,22,26,42,80,36,40,45,68,104,48,50,72,83,130,70,99,114,128,170};
    cout<<"enter the value u want to search";

    int x;
    cin>>x;

    int row=0,col=4;  //col=no. of col-1;
    while(row<5 && col>=0)  
    {
        if(matrix[row][col]==x)
        {
            cout<<"the value u enterd in present in row-- "<<row<<" and col-- "<<col;
            return 0;
        }

        else if(matrix[row][col]<x)
        row++;

        else
        col--;
    }
    cout<<"the value u enterd doesn't exist in this array";
}