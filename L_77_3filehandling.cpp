#include<iostream>
#include<fstream>
using namespace std;
int main()
{
    ofstream fout;
    fout.open("z1.txt");
    fout<<"hello\n";
    fout<<"hello india\n";
    fout<<"hello anubhav\n";
    fout<<"hello bro\n";
    fout.close();

    ifstream fin;
    fin.open("z1.txt");

    string line;

    while(getline(fin,line))
    {
        cout<<line<<endl;
    }

    fin.close();

}