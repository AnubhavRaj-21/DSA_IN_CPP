#include<iostream>
#include<bits/stdc++.h>
using namespace std;

int main()
{
    pair<string,int>p1,p2;

    //2 methods of pairing
    //method 1
    p1=make_pair("Anubhav",29);

    cout<<p1.first<<" "<<p2.second;
    //method 2
    p2.first="Rohit";
    p2.second=34;

    //multiple values in pair
    //storing name,age and weight
    //method 1
    pair<string,pair<int,int>>p3;
    p3.first="Anubhav";
    p3.second.first=39;
    p3.second.second=80;
    //method 2
    pair<string,pair<int,int>>p4;
    p4 =make_pair("Anubhav",make_pair(39,80));
}