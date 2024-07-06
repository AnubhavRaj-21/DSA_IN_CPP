//check panagram

#include<iostream>
#include<vector>
using namespace std;
int main(){
    string sentence="the quick brown fox jumps over the lazy dog";

    vector<bool>alpha(26,0);  //created a vector to store the occurence of the alphabets

    for(int i=0;i<sentence.size();i++)
    {
        alpha[sentence[i]-'a']=1;
    }

    for(int i=0;i<26;i++)
    {
        if(alpha[i]==0)
        cout<<"the sentence is not a panagram";
        return 0;
    }

    cout<<"the sentence is a panagram";
}