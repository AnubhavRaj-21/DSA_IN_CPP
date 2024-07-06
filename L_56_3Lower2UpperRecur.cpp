//itteration method

// #include<iostream>
// using namespace std;
// int main()
// {
//     string s="anubhav";
//     for(int i=0;i<7;i++)
//     {
//         s[i]=s[i]-32;
//     }
//     cout<<s;
// }

//recursive method 1
#include<iostream>
using namespace std;
void upper(string &str,int index)
{
    if(index==-1)
    return;

    str[index]=str[index]-32;   //alternative to this str[index]='A'+str[index]-'a'
    upper(str,index-1);
}

int main()
{
    string s="anubhav";
    upper(s,6);
    cout<<s;
}

