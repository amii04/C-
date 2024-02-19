#include<iostream>
using namespace std;
int main()
{
    int value=0; 
    int sum=0;
    cout<<"enter any number of digits & it will provide the sum once you press enter after putting a , or ctrl+z:"<<endl;
    while(cin>> value)
    {
        sum=sum+value;
    }
    cout<<"The sum of the values you entered is:"<<sum;
    return 0;

}