//Q1 FIND THE FIRST AND THE LAST OCCURENCE OF AN ELEMENT IN AN SORTED ARRAY

//first and last occurence of an element

#include<iostream>
using namespace std;
int main(){
    int arr[6]={2,2,2,2,2,3};
    int key;
    cout<<"enter the key";
    cin>>key;


 int start=0,end=5,mid,first=-1,last=-1;

 //for the first occurence
 while(start<=end){
    mid=(start+end)/2;
    if(arr[mid]==key){
    first=mid;
    end=mid-1;
    }
    else if(arr[mid]<key){
    start = mid+1;
    
} 
else
end=mid-1;
 }


//for the last occurence
start=0;end=5;
while(start<=end){
    mid=(start+end)/2;
    if(arr[mid]==key){
    last=mid;
    start=mid+1;
    }
    else if(arr[mid]<key){
    start = mid+1;
    
} 
else
end=mid-1;


}
cout<<first<<" "<<last;
}   



//

// #include<iostream>
// using namespace std;
// int main(){
//     int arr[5]={1,3,4,6,7};
//     int target;
//     cout<<"enter the target";
//     cin>>target;
//     int start=0,end=4,mid,index=5;
//     while(start<=end){
//         if(arr[mid]<target)
//         start=mid+1;
//         else if(arr[mid]==target){
//         index=mid;
//         break;
//     }
//         else
//         index=mid;
//         end=mid-1;
//     }
//     cout<<index;
// }
