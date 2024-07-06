//Q1  U ARE GIVEN A ARRAY/VECTOR WITH VALUES 0 AND 1,SEGGREGATE ALL THE ZEROS AND ONES

//APPROACH1: SOLVE BY SORTING---------------TC=O(N^2)

//APPROACH2: CONVERT INTO VECTOR AND THEN APPLY SORTING FUNCTION-----------TC=O(Nlog(N))

//APPROACH3
// #include<iostream>
// using namespace std;
// int main(){
//     int arr[6]={1,0,1,0,1,0};
//     int count0=0,count1=0;
//     for(int i=0;i<6;i++){
//         if(arr[i]==0)
//             count0++;
//         else
//         count1++;
//     }
//     for(int i=0;i<count0;i++)
//     arr[i]=0;
//     for(int i=0;i<6;i++)
//     arr[i]=1;
// }

// //APPROACH4: 2 POINTERS
// #include<iostream>
// using namespace std;
// int main(){
//     int arr[6]={1,0,1,0,1,0};
//     int start=0,end=5;
//     while(start<end){
//         if(arr[start]==0)
//         start++;
//         else{
//             if(arr[end]==0){
//                 swap(arr[start],arr[end]);
//                 start++,end--;
//             }
//             else {
//         end--;
//         }
//         }
        
//     }
// }




//Q2. SUM OF ANY 2 ELEMENTS OF THE ARRAY IS 22 FIND BOTH THE ELEMENTS
//APPROACH1
#include<iostream>
#include<vector>
#include<algorithm>
using namespace std;
int main(){
vector<int>v(2);
int target=22;
int arr[5]={2,7,11,15,27};
for(int i=0;i<4;i++){
    for(int j=i+1;j<5;j++){
        if(arr[i]+arr[j]==target){
            v.push_back(arr[i]),(arr[j]);
        break;
        }
       
    }
}

}
#include<iostream>
using namespace std;