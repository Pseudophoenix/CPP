#include<iostream>
using namespace std;
template<class X>void bubble(X*items,int count){
    register int a, b;
    X t;
    for(a=1;a<count;a++)
    {
        for(b=count-1;b>=a;b--)
        {
            if(items[b-1]>items[b]){
                t=items[b-1];
                items[b-1]=items[b];
                items[b]=t;
            }
        }
    }
}
int main()
{
    int iarray[7]={7,5,4,6,9,3,1};
    double darray[5]={6.7,4.3,8.2,2,9.1};
    int i;
    cout<<"Here os unsorted integer array";
    for(i=0;i<7;i++)
    {
        cout<<iarray[i]<<" ";
    }   
    cout<<endl;
    cout<<"Here os unsorted double array";
    for(i=0;i<5;i++)
    {
        cout<<darray[i]<<" ";
    }   
    cout<<endl;
    bubble(iarray,7);
    bubble(darray,5);
    cout<<"Here os sorted integer array";
    for(i=0;i<7;i++)
    {
        cout<<iarray[i]<<" ";
    }   
    cout<<endl;
    cout<<"Here os sorted double array";
    for(i=0;i<5;i++)
    {
        cout<<darray[i]<<" ";
    }
}
