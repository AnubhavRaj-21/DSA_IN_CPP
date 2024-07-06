#include<iostream>
#include<fstream>
using namespace std;
int main()
{
    ifstream fin;
    //file open karo
    fin.open("zoom.txt");
    //fir read karo
    char c;
    c=fin.get();

    while(!fin.eof())
    {
        cout<<c;
        c=fin.get();
    }
    fin.close();
}


/*the code written below would work fine but the 
only problem is that it won't be able to print spaces*/

// #include<iostream>
// #include<fstream>
// using namespace std;
// int main()
// {
//     ifstream fin;
//     //file open karo
//     fin.open("zoom.txt");
//     //fir read karo
//     char c;
//     fin>>c;

//     while(!fin.eof())
//     {
//         cout<<c;
//         fin>>c;
//     }
//     fin.close();
// }