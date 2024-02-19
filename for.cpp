#include<iostream>
using namespace std;
int main()
{
    int i,n;
    int sum=0;
    cout<<"enter the no you want to print the sum of numbers "<< endl;
    cin>>n;
    for(i=1;i<=n;i++)
    {
        sum=sum+i;
    }
    
    cout<<"the sum of 1 to"<< n << "is:"<<sum;
    return 0;
}