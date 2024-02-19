#include<iostream>
using namespace std;
int main()
{
    int currval=0,val=0,counter=1;
    cout<<"We are checking the number of occurence for any number that the user enters consecutivily only"<<endl;
    if(cin>>currval)
    {
       // int counter=1;
        while(cin>>val)
        {
            if(val==currval)
                ++counter;
            else
            {
                cout<<currval<<" occured "<<counter<<" times "<<endl;
                currval=val;
                counter=1;
            }
        }
    }
    else
    {
        cout<<currval<<" occured "<<counter<<" times "<<endl;
        
    }
    return 0;
}