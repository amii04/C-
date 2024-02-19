#include<iostream>
using namespace std;

int main()
{
    int i=0,j=0;
    int a[]={10,20,23,40,35};
    while(i<5)
    {
        cout<<"a["<<i<<"]="<<a[i]<<endl;
        i++;
    }

    /*cout<<"a[0]="<<a[0]<<endl;
    cout<<"a[1]="<<a[1]<<endl;
    cout<<"a[2]="<<a[2]<<endl;
    cout<<"a[3]="<<a[3]<<endl;
    cout<<"a[4]="<<a[4]<<endl;*/

    int mathmark[4];
    mathmark[0]=34;
    mathmark[1]=45;
    mathmark[2]=56;
    mathmark[3]=54;
    mathmark[4]=94;

    do
    {
        cout<<"mathmark["<<j<<"]="<<mathmark[j]<<endl;
        j++;
    }while(j<5);

   /*for(i=0;i<5;i++)
    {
        cout<<"the value of array a ["<<i<<"]is "<<a[i]<<endl;
    }*/ 
    
    return 0;
}