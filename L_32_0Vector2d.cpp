#include<iostream>
#include<vector>
#include<algorithm>
using namespace std;
int main()
{
  //creating a 2D vector
  int rows,col;
  cout<<"Enter rows and columns: ";
  cin>>rows>>col;
  vector<vector<int>>matrix(rows,vector<int>(col,1));          //1d vector----->     vector<int>matrix; 


// //printing a 2d vector
//   for(int i=0;i<3;i++)
//   for(int j=0;j<4;j++)
//   cout<<"vector matrix is  "<<matrix[i][j]<<" ";


// cout<<endl;

//   //finding the number of rows and column
//   cout<<"Rows= "<<matrix.size()<<" ";
//   cout<<"columns= "<<matrix[0].size();



//taking input from the user
for(int i=0;i<rows;i++)
for(int j=0;j<col;j++)
cin>>matrix[i][j];

for(int i=0;i<rows;i++)
for(int j=0;j<col;j++)
cout<<matrix[i][j]<<" ";
}