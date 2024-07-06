//binary search+ FUNCTIONS

#include<iostream>
using namespace std;
int BinarySearch(int arr[],int n,int key){
    int start=0,end=n-1,mid;
    
    while(start<=end){
        mid=(start+end)/2;              //mid ko find karo  //use mid=start+(end-start)/2

        if(arr[mid]==key)
            return mid;

            else if(arr[mid]<key)
            start=mid+1;
            
        else
        end=mid-1;
    }

    return -1;
}
int main(){
    int arr[1000];
    int n;
    cout<<"the the number of element ";
    cin>>n;
    cout<<"enter the elemets ";
    for(int i=0;i<n;i++){
        cin>>arr[i];
    }
    int key;
    cout<<"enter the key";
    cin>>key;

    cout<<BinarySearch(arr,n,key);
    return 0;
}





//without functions

// #include<iostream>
// using namespace std;
// int main(){
//     cout<<"Enter the size of array: ";
//     int arr[1000];
//     int n;
//     cin>>n;
//     cout<<"enter the element: ";
//     for(int i=0;i<n;i++){
//         cin>>arr[i];
//     }
// cout<<"enter the key";
//     int key;
//     cin>>key;
    
//     //binary search

//     int start=0,end=n-1,mid;
//     while(start<=end){
//         mid=(start+end)/2;
//         if(arr[mid]==key){
//         cout<<"the index of the key is: " <<mid;
//         break;
//         }
//         else if(arr[mid]<key)
//         start=mid+1;
//         else
//         end=mid-1;
//     }
//    cout<<"the key u entered doesnt belong to the array!"
// ;    }