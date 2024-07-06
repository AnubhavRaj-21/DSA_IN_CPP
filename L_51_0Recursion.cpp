#include<iostream>
using namespace std;

void birth(int n)
{
    if(n==0){
    cout<<"happy birthday";
    return;
    }

    else
    cout<<n<<"left for birthday"<<endl;

    birth(n-1);
}
int main()
{
    birth(10);
}










//ITERATIVE APPROACH

// #include<iostream>
// using namespace std;
// int main()
// {
//    for(int i=10;i>0;i--)
//    {
//     cout<<i<<"days left for birhday\n";
//    }

//    cout<<"happy birhday";
// }