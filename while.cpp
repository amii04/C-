#include<iostream>
using namespace std;
int main()
{
    int value;
    cout<<"enter the number till where you want to find the sum:"<<endl;
    cin>> value;
    int count=1;
    int sum=0;
    while(count<=value)
    {
        sum += count;
        count++;
    }
    cout<< "Sum of 1 to "<< value <<" is:"<< sum <<endl;
    return 0;
}