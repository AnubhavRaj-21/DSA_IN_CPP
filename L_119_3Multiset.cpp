#include<iostream>
#include<bits/stdc++.h>
using namespace std;

int main()
{
    multiset<int>s;
    s.insert(45);
    s.insert(25);
    s.insert(15);
    s.insert(5);
    s.insert(5);
    s.erase(5);
    for(auto it=s.begin();it!=s.end();it++)
    cout<<*it<<" ";
}