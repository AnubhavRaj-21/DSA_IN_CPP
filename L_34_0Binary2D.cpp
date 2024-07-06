//BINARY SEARCH IN 2-D ARRAY

#include<iostream>
using namespace std;
int main()
{
   int matrix[4][5]={2,6,10,14,18,20,24,27,29,38,47,52,78,93,102,108,111,200,218,320};

   int x;
   cout<<"ENTER THE VALUE YOU WANT TO FIND:- ";
   cin>>x;

//    //method 1
//    //check the row where the number may exist and then apply binary search
//    for(int i=0;i<4;i++)         //HERE i<row
//    {
//       if(matrix[i][0]<=x && x<=matrix[i][4])  //here matrix[i][col-1]
//       {
//          int start=0,end=4,mid;   //here end=col-1
//          while(start<=end)
//          {
//             mid=(start+end)/2;
            
//             if(matrix[i][mid]==x){
//             cout<<"THE VALUE YOU ENTERED IS PRESENT IN ROW-> "<<i<<" and column-> "<<mid;
//            return 0;
//             }

//             else if(matrix[i][mid]<x)
//             start=mid+1;
            

//             else
//             end=mid-1;
//          }
//       }
     
//    }
//     cout<<"THE VALUE YOU ENTERED DOESN'T EXIST";
// }

// //time complexity for the above code is O(row+log(col))



//method 2
//as we know the array is in row major form and saved as 1-d array in data so we would treat it
// like 1d(by converting row_index and col_index into 1d index)

int start=0,end=19,mid;   //end=row*col-1
while(start<=end)
{
   mid=(start+end)/2;
   int row_index=mid/5;  //row_index=1dIndex/column
   int col_index=mid%5;  //col_index=1dIndex%column

   if(matrix[row_index][col_index]==x)
   {
      cout<<"the number u entered in in row-->"<<row_index<<"and column-->"<<col_index;
      return 0;
   }

   else if(matrix[row_index][col_index]<x)
   start=mid+1;

   else
   end=mid-1;
}
cout<<"the value u entered doesn't exist in this 2d array";
}