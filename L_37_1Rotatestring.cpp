//rotate string by 2 and check it

#include<iostream>
using namespace std;
void rotateanticlockwise(string &s)
    {
        char c=s[0];
        int index=1;
        while(index<s.size())
        {
            s[index-1]=s[index];
            index++;
        }
        s[s.size()-1]=c;
    }



     void rotateclockwise(string &s)
    {
        char c=s[s.size()-1];
        int index=s.size()-2;
        while(index>=0)
        {
            s[index+1]=s[index];
            index--;
        }
        s[0]=c;
    }


    
int main(){

    string str1 = "amazon";
    string str2;
    cout<<"enter the value of str2   : ";
    cin>>str2;
   

        string clockwise,anticlockwise;
        
        clockwise = str1;
        rotateclockwise(clockwise);
        rotateclockwise(clockwise);
        if(clockwise==str2)
        cout<<"yes it is rotated by 2 clockwise";
        return 0;
        
        anticlockwise = str1;
        rotateanticlockwise(anticlockwise);
        rotateanticlockwise(anticlockwise);
        if(anticlockwise==str2)
        cout<<"yes it is rotated anticlockwise";
        return 0;
        

        cout<<"it is not rotated by 2";
        return 0;
    }

