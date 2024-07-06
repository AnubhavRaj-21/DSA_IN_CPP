//storing memeory in heap

#include<iostream>
using namespace std;
int main()
{
    int *ptr=new int;  //variable ke liye heap mei memory allocate kar di

    *ptr=5;  //value assigned to the heap variable
    cout<<*ptr;  //address of the new memory location


    //making an array in heap
    int n;
    cout<<"enter the size of the array";
    cin>>n;

    int *p=new int [n];

    //inserting values
    for(int i=0;i<n;i++)
    p[i]=i+1;

    //printing the values
    for(int i=0;i<n;i++)
    cout<<p[i]<<" ";


    //use of delete keyword
    delete ptr;
    delete[] p;

}