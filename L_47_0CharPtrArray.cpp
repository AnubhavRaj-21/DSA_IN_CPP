#include<iostream>
using namespace std;
int main(){
    char arr[6]= "12345";

    //prints the value of the arr values not the address
    cout<<arr<<" line no.7"<<endl;
    
    //even this prints the arr values not the address
    char *ptr=arr;
    cout<<ptr<<" line no.11"<<endl;

    //this happens because the implementation of char type data is different from the int type
    //char type data works like 'if i pass the address value in cout it starts reading the 
    //valures of the data of the given address'.

    //printing the char address

    cout<<(void*)arr<<" line no.19"<<endl;   
    //this actually changes the type of arr from char to void*(type casting)
    //void* is a pointer that indicate the value (like any other pointer)but didn't tell the type

    cout<<(void*)ptr<<" line no. 23"<<endl;


    char name='a';
    char *pttr=&name;
    cout<<pttr<< " line no. 28"<<endl;//prints random value until it finds the 'o/' value.

    //using void pointer again
    cout<<(void*)&name<<endl;


    cout<<static_cast<void*>(arr);
}
