//function overloading happens when we use two function of same name but having 
//different parameters
#include<iostream>
using namespace std;
class area
{
    public:
    int calculatearea(int r){
    return 3.14*r*r;
    }

    int calculatearea(int l,int b)
    {
        return l*b;
    }

};
int main()
{
    area a1,a2;
    a1.calculatearea(4);
    a2.calculatearea(3,4);
}