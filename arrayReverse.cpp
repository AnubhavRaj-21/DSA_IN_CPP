//reverse array

//method-1


// #include<iostream>
// using namespace std;
// int main(){
//     int temp[6];
//     int arr[6]={3,54,23,13,12,66};
//     for(int i=0,j=5;i<=5;i++,j--){
//         temp[j]=arr[i];

//     }
//     for(int i=0;i<=5;i++){
//         arr[i]=temp[i];
//     }
//     for(int i=0;i<=5;i++){
//         cout<<arr[i]<<"  ";
//     }
// }

//method-2

#include<iostream>
using namespace std;
int main(){

  int arr[6]={34,54,22,11,44,21};

    for(int i=0,j=5;i<j;i++,j--){
        swap(arr[i],arr[j]);
    }

    for(int i=0;i<=5;i++){
        cout<<arr[i]<<" ";
    }
    
}
