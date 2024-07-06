//Question1: Selection Sort Algorithm to sort the array of integers in decreasing order.


// #include<iostream>
// using namespace std;
// int main(){
//     int arr[5]={1,33,21,32,1122};
//     for(int i=0;i<4;i++){
//         int index=i;
//         for(int j=i+1;j<5;j++){
//             if(arr[j]>arr[index])
//             index=j;
//         }
//         swap(arr[index],arr[i]);
//     }
//     for(int i=0;i<5;i++){
//         cout<<arr[i]<<" ";
//     }
// }




/* Question2: Selection Sort Algorithm to sort the array of integers in increasing order by taking 
the highest number to last place.*/

// #include<iostream>
// using namespace std;
// int main(){
//     int arr[5]={1,32,53,64,22};
//     for(int i=4;i>0;i--){
//         int index=i;
//         for(int j=i-1;j>0;j--){
//             if(arr[j]>arr[index]){
//                 index=j;
//             }
//             swap(arr[index],arr[i]);
//         }
//     }
//     for(int i=0;i<5;i++){
//         cout<<arr[i]<<" ";
//     }
// }




//Question3: Selection Sort Algorithm to sort the array of char in ascending order.

#include<iostream>
using namespace std;
int main(){
    char arr[5]={'a','v','r','t','w'};
    for(int i=0;i<4;i++){
        int index=i;
        for(int j=i+1;j<5;j++){
            if(arr[j]<arr[index]){
                index=j;
            }
        }
        swap(arr[index],arr[i]);
    }
for(int i=0;i<5;i++){
    cout<<arr[i]<<" ";
}
}