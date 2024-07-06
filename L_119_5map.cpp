#include<iostream>
#include<bits/stdc++.h>
using namespace std;

int main()
{
    map<int,int>m;
    m.insert(make_pair(20,120));
    m.insert(make_pair(30,320));
    m.insert(make_pair(2,12));
    m.insert(make_pair(4,10));
    m.insert(make_pair(23,210));
    m[100]=60;

    for(auto it=m.begin();it!=m.end();it++)
    {
        cout<<it->first<<" "<<it->second<<endl;
    }

    cout<<m[200]; //wrong way as u can't detemine whether the value inside it is zero or the m[200 not present]
    //better way
    if(m.count(20))
    cout<<m[20];
    //deleting
    m.erase(20);

    unordered_map<int,int>m1;

}