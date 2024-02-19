#include<iostream>
using namespace std;
int main()
{
    int age;
    cout<<"Tell me your age"<<age<<endl;
    cin>> age;
    switch (age)
    {
    case 18:
        cout<<"you are eligible for voting"<<endl;
        break;
    case 17:
        cout<<"you are not eligible for voting"<<endl;
        break;
    case 14:
        cout<<"you are still minor for voting"<<endl;
        break;
    
    default:
        break;
    }
    return 0;

}