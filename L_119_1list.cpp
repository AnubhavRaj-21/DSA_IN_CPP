#include<iostream>
#include<bits/stdc++.h>
using namespace std;

int main()
{
    list<int>l1;
    l1.push_back(23);
    l1.push_back(3);
    l1.push_back(2);
    l1.push_back(233);
    l1.push_front(13);

    cout<<l1.front()<<" "<<l1.back()<<endl;

    cout<<"size is:"<<l1.size()<<endl;

    for(auto it=l1.begin();it!=l1.end();it++)
    cout<<*it<<endl;
}