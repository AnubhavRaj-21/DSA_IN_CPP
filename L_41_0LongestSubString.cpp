//Longest substring without repeating character
//e.g.=In 'abcdecbeadf longest substring is cbeadf

#include<iostream>
#include<vector>
using namespace std;
int main(){
   string s={'a','b','c','d','e','c','b','e','a','d','f'};
   vector<bool>count(256,0);
   int first=0,second=0,len=0;

   while(second<s.size())
   {
      while(count[s[second]])
      {
         count[s[second]]=0;
         first ++;
      }

      count[s[second]]=1;
      len=max(len,second-first+1);
      second++;
   }
   cout<<len;
}

//This technique is called sliding window technique