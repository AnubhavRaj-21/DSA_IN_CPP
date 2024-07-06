// Sorting the sentence
#include<iostream>
#include<vector>
using namespace std;
int main(){

    string s="is2 sentence4 This1 a3";
    vector<string>ans(10);
    string temp;
    int count=0,index=0;

    while(index<s.size())
    {
        if(s[index]==' ')   //finding the last emt before space
        {
            int pos=temp[temp.size()-1]-'0';     //removing the last number associated with each word
            temp.pop_back();
            ans[pos]=temp;
            temp.clear();
            count++;
        }
        else{
        temp+=s[index];
        index++;
        }
    }
    int pos=temp[temp.size()-1]-'0';     //writing this after the loop as the last word don't have space
            temp.pop_back();
            ans[pos]=temp;
            temp.clear();
            count++;

            for(int i=0;i<=count;i++)
            {
                temp+=ans[i];
                temp+=' ';     //adding space after each word
            }

            temp.pop_back();
            cout<<temp;
}