#include<iostream>
#include<conio.h>
using namespace std;
void main()
{
    int a,*ptr1,**ptr2;
    // clrscr();
    ptr1=&a;
    ptr2=&ptr1;
    cout<<"The address of a: "<<ptr1<<"\n";
    cout<<"The address of ptr1: "<<ptr2;
    cout<<"\n\n";
    cout<<"After incrementing values:\n\n";
    ptr1+=2;

    cout<<"The address of a: "<<ptr1<<"\n";
    ptr2+=2;
    cout<<"The address of ptr1: "<<ptr2<<"\n";
    return 0;

}