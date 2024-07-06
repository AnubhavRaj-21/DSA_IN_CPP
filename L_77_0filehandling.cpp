#include<iostream>
#include<fstream>

using namespace std;
int main()
{
    /*objective:-ek file hai usko write karna
    (1)file ko open karna
    (2)file ko write karna*/


    //file open karna
    ofstream fout;
    fout.open("zoom.txt");//"eske andar file ka path dena hai agar exist nhi karta toh yeh khud create kar dega"
    fout<<"hello india";

    fout.close(); //resource relese karwa saku

}