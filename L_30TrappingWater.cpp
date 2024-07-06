//Q.Suppose u are given an array in which each array element represent a block of that size unit
//water is being poured from above.
//Calculate the total water that can be stored in that array.

#include<iostream>
#include<vector>
using namespace std;

int main(){

    int arr[1000];
    int n;
    cout<<"enter the value of n";        //introducing the array
    cin>>n;
    for(int i=0;i<n;i++)
    cin>>arr[i];

    vector<int>height;
    int Leftmax[n],Rightmax[n];

    Leftmax[0]=0;                                         
    for(int i=0;i<n;i++)                        //created an array to store the heighest building left of an array element 'i'
    Leftmax[i]=max(Leftmax[i-1],height[i-1]);

    Rightmax[0]=0;
    for(int i=0;i<n;i++)                       //created an array to store the heighest building right of an array element 'i'
    Rightmax[i]=max(Rightmax[i+1],height[i+1]);

    int water=0;
    for(int i=0;i<n;i++)
    {
        int minheight=min(Leftmax[i],Rightmax[i]); //water will overflow if water exceeds the min height from any one of the sides
        if(minheight-height[i]>0)                  //definitely the boundary should be greater than that builidng itself
        water+=minheight-height[i];                //adding entire water[water=water+diff of boundary and the building itself]
    }
}













//optimizing space complexity


// int leftmax=0,rightmax=0,water;
// int maxheight=height[0],index=0;

// for(int i=1;i<n;i++)
// {                                      //calculated
// if(height[i]>maxheight){              // maximum height
//     maxheight=height[i];
//     index=i;
// }
// }

// for(int i=o;i<index;i++)
// {
//     if(leftmax>height[i])                //calculated left side
//         water+=leftmax-height[i];
//     else
//     leftmax=height[i];
// }

// for(int i=n-1;i>index;i--)
// {
//     if(rightmax>height[i])
//     water+=rightmax-height[i];
//     else
//     rightmax=height[i];
// }