#include<iostream>
#include<bits/stdc++.h>
using namespace std;

//we can even insert class in sets but how would it store them in sorted form
class person
{
    public:
    int age;
    string name;
//suppose i have to do it on the basis of age
    bool operator<(const person &other) const
    {
        return age<other.age;//age>other.age for descending
    }
};


int main()
{
    set<int>s;
    s.insert(45);
    s.insert(25);
    s.insert(15);
    s.insert(5);
    cout<<"printing in its default ascending order"<<endl;
    for(auto it=s.begin();it!=s.end();it++)
    cout<<*it<<" ";
    //now implenting using descending order
    set<int,greater<int>>s2;
    s2.insert(34);
    s2.insert(3);
    s2.insert(34);
    s2.insert(334);

    cout<<"implenting set to print in descending order"<<endl;
    for(auto it=s2.begin();it!=s2.end();it++)
    cout<<*it<<" ";

    //finding element
    if(s.find(5)!=s.end())  cout<<"Present";
    else cout<<"absent";

    //method 2 of finding element
    if(s2.count(34))    cout<<"present";
    else    cout<<"absent";

    //deleting
    s.erase(5);


    //class in sets
    set<person>s3;
    person p1,p2,p3;
    p1.age=2, p1.name="anubhav";
    p2.age=3, p2.name="aryan";
    for(auto it=s3.begin();it!=s3.end();it++)
    {
        cout<<(*it).age<<" "<<(*it).name<<endl;
        //another way
        cout<<it->age<<" "<<it->name<<endl;
    }
}