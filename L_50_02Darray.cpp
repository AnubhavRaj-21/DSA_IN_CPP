//creating 2d arrays in heap 

#include<iostream>
using namespace std;
int main()
{
    //creating an array which stores address
    int n,m; //n=rows m=columns
    cout<<"enter the number of rows and columns";
    cin>>n>>m;



    //creating an array of n size which stores address pointing to an int type value.
    //as(new int *[n]) will return address of the array it is a double pointer 
    int **ptr=new int *[n]; 



    //creating an 2d array
    for(int i=0;i<n;i++)
    {
        ptr[i]=new int [m];
    }


    //inserting value in that 2d array we just created

    cout<<"enter the value of array";
    for(int i=0;i<n;i++)
    {
        for(int j=0;j<m;j++)
        {
            cin>>ptr[i][j];
        }
    }


    //printing the value 
     for(int i=0;i<n;i++)
    {
        for(int j=0;j<m;j++)
        {
            cout<<ptr[i][j]<<" ";
            
        }
        cout<<endl;
    }


    //release the memory in heap
    for(int i=0;i<n;i++)
    delete[] ptr[i];

    delete ptr;
}