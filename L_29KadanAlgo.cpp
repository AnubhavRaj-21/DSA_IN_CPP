//Kandane Algorithm

#include<iostream>
using namespace std;
int main(){
    int arr[8]={4,-5,8,-12,7,6,-2};

    int maxi=INT16_MIN;
    int prefix=0;

    for(int i=0;i<8;i++)
    {
    prefix+=arr[i];
    maxi=max(maxi,prefix);
    if(prefix<0)
    prefix=0;
    }
}