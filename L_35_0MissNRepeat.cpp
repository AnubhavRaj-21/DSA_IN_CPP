//Find the missing and the repeating number in an array
//There is an array of size n and ideally i should have elmts from 1to7 but here one number 
//is missing and one is repeated find both.



//method--->best one
#include<iostream>
#include<vector>
using namespace std;
int main()
{
  int arr[7]={4,3,2,1,2,7,6};

  //decreasing value by 1
  for(int i=0;i<7;i++)
  arr[i]--;

  for(int i=0;i<7;i++)
  {
    arr[arr[i]%7]+=7;
  }  

  //finding the missing number
  for(int i=0;i<7;i++)
  {
    if(arr[i]/7==0)
    {
        cout<<"the number is  "<<i+1;
        break;
    }
  }

  //finding the repeating one
  for(int i=0;i<7;i++)
  {
    if(arr[i]/7==2)
    {
        cout<<"the number which repeated is "<<i+1;
        break;
    }
  }
}



//another method
// int main()
// {
//     vector<int>count(7,0);
//     for(int i=0;i<7;i++)
//     count[arr[i]-1]++;

//     //missing
//      for(int i=0;i<7;i++)
//      if(count[i]==0)
//      cout<<"the missing number is "<<i+1;

//      //repeating
//       for(int i=0;i<7;i++)
//       if(count[i]==2)
//       {
//         cout<<i+1;
//       }

// }