#include<iostream>
using namespace std;

int main()
{
    //here it will print the num's 2 compliment as an answer as it is an unsigned int
    //and in x it will print -1 itself as if nothing is mentioned it will by default take as 
    //signed int.
   /*unsigned int num=-1;
    int x=num;
    cout<<num<<","<<x;*/ 

    bool b= 35;
    int i= b;
    i=3.14;
    double pi=i;
    unsigned char c=-1;

    cout<< "value of bool= "<<b<<endl<<"value of int i assigned value b= "<<i<<endl<<"value of int i assigned float value ="<<i<<endl<<"value of pi= "<<pi<<endl<<"value of unsigned char c= "<<c<<endl;
//the unsigned char c will print blank as it will convert the -1 to 2's compliment i.e 255.
// but 255 wont be printed as it is a char and so it will print the ASCII value equivalent to it
//i.e a blank space.
    return 0;
}