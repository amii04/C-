#include<iostream>
using namespace std;
int global_var=100;
int main()
{
    cout<<"The global variable value is printed like this :"<<::global_var<<endl;
    
    cout<< "Hello world "<<endl;
    return 0; 
}