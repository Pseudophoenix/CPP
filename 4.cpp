#include<iostream>
using namespace std;
int main()
{
    int a[6],*pa,i;
    pa=a;
    cout<<"Enter values: "<<endl;
    for(i=0;i<=5;i++)
    {
        cin>>*pa++;
    }
    pa=&a[5];
    cout<<"\nValues in reverser order are: "<<endl;
    for(i=0;i<=5;i++)
    {
        cout<<*pa--<<endl;
    }
}