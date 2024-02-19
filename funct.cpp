#include<iostream>
using namespace std;
int sum(int ,int);
void g();
void swaps(int *a,int *b);
void referswap(int &a,int &b);
int main()
{
   /* int num1,num2;
    cout<<"enter no 1:"<<endl;
    cin>>num1;
    cout<<"enter no 2:"<<endl;
    cin>>num2;
    cout<<"the sum of "<<num1<<" and "<<num2<<" is: "<<sum(num1,num2)<<endl;
    g();*/
    //THIS IS CALL BY VALUE
    //As we are passing the value of a and b into th fucntion
    //so we need to use this pointers for the case.
    int x=4,y=5;
    cout<<"the value of x "<<x<<" and y "<<y<<endl;
    //swaps(&x,&y);
    //cout<<"the value of x "<<x<<" and y "<<y<<endl;
    referswap(x,y);
    cout<<"the value of  x using refernce "<<x<<" and y using reference  "<<y<<endl;

    return 0;
}
void swaps(int *a,int *b)
{
    int temp;
    temp=*a;
    *a=*b;
    *b=temp;
}
void referswap(int &a,int &b)
{
    int temp;
    temp=a;
    a=b;
    b=temp;
}
int sum(int a,int b)
{
    int c=a+b;
    return c;
}
void g()
{
    cout<<"hello world!!!!";
}