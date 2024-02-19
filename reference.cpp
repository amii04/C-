#include<iostream>
using namespace std;

int main()
{
    int ival=1024;
    int &refval=ival;
    cout<<"ival="<<ival<<endl<<"refval="<<refval<<endl;
    refval=1000;
    cout<<"ival="<<ival<<endl<<"refval="<<refval;
    return 0;
}