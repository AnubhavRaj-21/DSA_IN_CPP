#include<iostream>
using namespace std;
int main(){
    int arr[5];
    cout<<"enter elements in the array: ";
    for(int i=0;i<5;i++)
    cin>>arr[i];
  int ans=0;
  for(int i=0;i<5;i++){
    if(arr[i]>ans)
    ans=arr[i];
  }  
  cout<<"the maximum element in the array is"<<ans;
}