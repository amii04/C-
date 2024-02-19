#include<iostream>
using namespace std;
int main()
{
    int num;
    cout<<"enter any number"<<endl;
    cin>> num;
    if(num>0)
    {
        cout<< num <<" is greater than 0";
    }
    else if(num<0)
    {
        cout<< num <<" is less than 0";
    }
    else
    {
        cout<<num<< " is equal to 0";
    }
    return 0;
}