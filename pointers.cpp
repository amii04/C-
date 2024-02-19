#include<iostream>
using namespace std;

int main()
{
    int a=35;
    int*b=&a;
    
    cout<<"the value at the a is: "<<a<<endl;
    cout<<"the value at a printing with the help of b: "<<*b<<endl;
    cout<<"the address of a:"<<b<<endl;
cout<<"---------------------------------"<<endl;
    *b=53;
    cout<<"the value at the a is: "<<a<<endl;
    cout<<"the value at a printing with the help of b: "<<*b<<endl;
    cout<<"the address of a:"<<b<<endl;
cout<<"---------------------------------"<<endl;
    a=355;
    int *c= b;
    cout<<"the value at the a is: "<<a<<endl;
    cout<<"the value at a printing with the help of b: "<<*b<<endl;
    cout<<"the address of a:"<<b<<endl;
    cout<<"the pointer to a pointer b:"<<*c<<endl;    
    cout<<"the pointer to a pointer b it prints the value at b by *c:"<<*c<<endl;    


    return 0;
}