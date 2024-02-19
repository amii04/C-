#include<iostream>
using namespace std;
int main()
{
    int num,num1;
    int i=1;
    cout<<"Enter the number whose table you want:"<<endl;
    cin>> num;
    do
    {
        //num*=i;6x1=6
           // 12x2=12
           // 36x3=36
           // 144x4=144
           // 720x5=720
           // 4320x6=4320
           // 30240x7=30240
           // 241920x8=241920
           // 2177280x9=2177280
           // 21772800x10=21772800 will show this 
           num1=num*i;
        cout<<num<<"x"<<i<<"="<<num1<<endl;
        i++;    

    }while(i<=10);
    return 0;

}