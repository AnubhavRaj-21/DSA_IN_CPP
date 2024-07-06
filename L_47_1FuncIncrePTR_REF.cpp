//code 1


// #include<iostream>
// using namespace std;


// void incr(int n)
// {
//     n++;
// }


// int main()
// {
//     int num=10;
//     incr(num);
//     cout<<num;
// }


//Above I tried to create a function to increase the value of a variable num but in result it doesn't happen
//Actually the value of n increase but it doesn't passes to the num.Hence we need pointer


//code 2(By the help of pointers)
// #include<iostream>
// using namespace std;

// void incre(int *ptr)
// {
//     *ptr=*ptr+1;
// }
// int main()
// {
//     int num=10;
//     incre(&num);
//     cout<<num;
// }

//Here the POINTER ptr points to num and the changes mentioned in the function happens only to the num



//code 3(By the help of PASS BY REFERENCE)

#include<iostream>
using namespace std;

void incr(int &temp)
{
    temp++;
}
int main()
{
    int num=10;
    incr(num);
    cout<<num;
}   

//Here in pass by reference the same value has 2 or more different names