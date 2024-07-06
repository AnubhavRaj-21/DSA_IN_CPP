//POINTERS

#include<iostream>
using namespace std;
int main(){
    //Printing the address of a variable
    int a=10;
    cout<<&a<<endl;

    //printing the address of a variable using pointers
    int *ptr=&a;
    cout<<"address of a is"<<ptr<<endl;
    cout<<"the value of the variable ptr is pointing is "<<*ptr<<endl;

    //printing the size of pointer
    cout<<"the size of the pointer is "<<sizeof(ptr)<<endl;


    //once the pointer is declared no need to mention * again
    //for example
    int b=20;
    ptr=&b;
    cout<<ptr<<endl;
    cout<<*ptr<<endl;
}