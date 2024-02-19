#include<iostream>
using namespace std;
typedef struct employee
{
    int eId;
    float salary;
    string department;
}emp;
union loans
{
    char tploan;
    double money;
    float interest;

};

int main()
{
   /* cout<<"-----Structure-----"<<endl;
    emp ami;
    ami.eId=1010;
    ami.salary=12000;
    ami.department="ce"; 
    emp aarav;
    aarav.eId=1002;  

    cout<<ami.eId<<endl;
    cout<<ami.salary<<endl; 
    cout<<ami.department<<endl; 
    cout<<aarav.eId<<endl; */
    //cout<<"-----Union-----"<<endl;
    //here in union at a time the memory is given to one element of the union
    //here tploan was given the memory first so it was printed 
    //as soon as i declared l1 with another element the shared memory is allocated to money
    //now even if you try printinh tploan it will give blank space as o/p
    //as the main diff between the union and struct is that it uses shared memory concept
    //once a memory allocated to one of its element it wont be used for another of its kind.
    /*union loans l1;
    l1.tploan='H';
    l1.money=1000;
    cout<<l1.tploan<<endl;
    cout<<"--"<<endl;*/
    cout<<"-----Enum-----"<<endl;
    //here the meal becomes a userdefined datatype 
    //numbering starting from 0 is given inside the element of the enum members consecutively
    // therefore breakfast=0,lunch=1,dinner=2
    //i have made an obj of meal m1 and is assigned it with lunch 
    // while printing the m1 it will give us the value assigned to it by the enum.

    enum meal{breakfast,lunch,dinner};
    meal m1= lunch;
    cout<<breakfast<<endl;
    cout<<lunch<<endl;
    cout<<dinner<<endl;
    cout<<m1<<endl;

   

    
    return 0;
}
