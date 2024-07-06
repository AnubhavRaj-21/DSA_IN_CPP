#include<iostream>
using namespace std;
int main(){
    int arr[5]={1,2,3,4,5};
    int *ptr=arr;

    //printing the address of first element
    cout<<arr<<endl;
    cout<<arr+0<<endl;
    cout<<&arr[0]<<endl;
    cout<<ptr;

    //print the address of second element
     cout<<arr+1<<endl;
      cout<<&arr[1]<<endl;


      //print the value
      cout<<arr[0]<<endl;
      cout<<*arr<<endl;
       cout<<*(arr+0)<<endl;
      cout<<*ptr;

      //prints all the address
      for(int i=0;i<5;i++)
      cout<<arr+i<<endl;


     for(int i=0;i<5;i++)
      cout<<*(arr+i)<<endl;


      for(int i=0;i<5;i++)
      cout<<ptr+i<<endl;


      //print all the value

      for(int i=0;i<5;i++)
      cout<<ptr[i]<<" ";


//arithematic operations on pointers
//print all the vlaue

    for(int i=0;i<5;i++)
    {
    cout<<*ptr<<endl;
    ptr++;
    }
      

      //addition
      ptr=ptr+3;
      cout<<*ptr<<endl;



}