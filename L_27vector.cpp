#include<iostream>
#include<vector>
#include<algorithm>
using namespace std;
int main(){

//declare vector
vector<int>v;
vector<int>v1(5,1);            //size of the vector is 5 and each element is 1;
vector<int>v2={1,2,3,4,5};

//size and capacity
cout<<"size of v: "<<v.size()<<endl;
cout<<"capacity of v: "<<v.capacity()<<endl;
v.push_back(2);
v.push_back(3);
v.push_back(10);
cout<<"size of v: "<<v.size()<<endl;
cout<<"capacity of v: "<<v.capacity()<<endl;
//update & insetion of values

v[1]=5;     //----------------put '5' in second index
v.insert(v.begin()+1,50); //inserts 50 in the second index note that the value which was initially in 2nd index would shift to 3rd index

//delete a value from vector
vector<int>vnew;
vnew.push_back(2);
vnew.push_back(3);
vnew.push_back(4);
vnew.push_back(5);
vnew.pop_back();

//deleting a value from an specific index 
vnew.erase(vnew.begin()+1);


//----->printing vector <-----------------------
//method 1(printing all the values)
for(int i=0;i<vnew.size();i++){
cout<<vnew[i];
}
//method 2(printing specific indexs only)
cout<<vnew[2]<<endl;
cout<<vnew.front()<<endl;//print the value in index=0
cout<<vnew.back()<<endl;//prints the value in the last index
cout<<vnew[vnew.size()-1]<<endl; 
//method 3
for(auto it = vnew.begin();it!=vnew.end();it++)
cout<<*it<<" "<<endl;
//method 4
for(auto i:vnew)
cout<<i<<" ";
//copying value from 1 vector to another
vector<int>arr;
arr=vnew;

//clearing the entire value in the vector
vnew.clear();


//sorting
vector<int>ans;
ans.push_back(5);
ans.push_back(35);
ans.push_back(1225);
ans.push_back(54);
ans.push_back(125);

sort(ans.begin(),ans.end()); //sort in increasing order
for(int i=0;i<ans.size();i++){
    cout<<ans[i]<<" ";
}
cout<<endl;


sort(ans.begin(),ans.end(),greater<int>()); //sort in decreasing order[method 1]
for(int i=0;i<ans.size();i++){
    cout<<ans[i]<<" ";
}
cout<<endl;

sort(ans.rbegin(),ans.rend()); //sort in decreasing order [method 2]
for(int i=0;i<ans.size();i++){
    cout<<ans[i]<<" ";
}
cout<<endl;

//search in binary search
cout<<binary_search(ans.begin(),ans.end(),54)<<endl;

//finding the index in vector
cout<<find(ans.begin(),ans.end(),54)-ans.begin()<<endl;

}