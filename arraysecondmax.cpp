#include<iostream>
using namespace std;
int main(){
    int arr[5]={45,34,22,11,55};
int ans=0;
for(int i=0;i<5;i++){
    if(arr[i]>ans)
    ans=arr[i];

}
int second=0;
for(int i=0;i<5;i++){
    if(arr[i]!=ans){
        second=max(second,arr[i]);
        
    }
    
}
cout<<second;
}
  

