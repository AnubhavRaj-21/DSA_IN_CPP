#include<iostream>
#include<vector>
#include<algorithm>
using namespace std;

bool divide(vector<int>arr){
    int maxi=INT32_MIN,prefix=0,total_sum=0,n=arr.size();
    //Total sum

    for(int i=0;i<n;i++)
    total_sum+=arr[i];
     
     for(int i=0;i<n;i++){
    prefix+=arr[i];
    int ans=total_sum-prefix;     //you don't need to make a new variable ans u can simply wite
    if(ans==prefix)                  //if(total_sum-prefix==prefix)-->if(total_sum=2*prefix) also
    return 1;
     }
     return 0;
}

int main(){

    int n;
    cout<<"enter the size of array";
    vector<int>v(n);

    cout<<"enter the elements of array";
    for(int i=0;i<n;i++){
        cin>>v[i];
    }

    cout<<divide(v);
    }