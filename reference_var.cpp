#include<iostream>
using namespace std;
int main()
{
    int x=45;
    int &y=x;
    cout<<"PRINTING THE VALUE OF X via Y "<< y;
    return 0;

}