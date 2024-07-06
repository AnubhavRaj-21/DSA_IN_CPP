//big factorials 

#include<iostream>
#include<vector>
#include<algorithm>
using namespace std;
int main(){

    cout<<"Enter the number to get factorial";
    int n;
    cin>>n;

    vector<int>ans(1,1);
    while(n>1)
    {
        int carry=0,result,size=ans.size();

        for(int i=0;i<size;i++)
        {
            result=ans[i]*n+carry;
            ans[i]=result%10;
            carry=result/10;
        }

        //carry for the last one
        while(carry)
        {
            ans.push_back(carry%10);
            carry/=10;                      //carry/=10---->carry= carry/10;
        }
        n--;
    }
    reverse(ans.begin(),ans.end());

    cout<<"Factorial of "<<n<<"is ";
    for(int i=0;i<ans.size();i++){
    cout<<ans[i];
}
}
