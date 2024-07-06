//incresing order
#include<iostream>
using namespace std;
int main(){
int index=0;

int arr[5]={4,23,11,456,2};

 for(int i=0;i<4;i++){             // loop is for rounds
    index=i;

    for(int j=i+1;j<5;j++){        //loop is for checking the element in the ith index
        if(arr[j]<arr[index])       //this one is to find the smallest element in the array 
        index=j;
    }
    swap(arr[index],arr[i]);
}
}