#include<iostream>
#include<list>
#include<cstdlib>
using namespace std;
int main()
{
    list<int> lst;
    int i;
    for(i=0;i<10;i++)
    lst.push_back(rand()/1000000);
    
    cout<<"Original contents:\n";
    list<int>::iterator p=lst.begin();
    while(p!=lst.end())
    {
        cout<<*p<<" ";
        p++;
    }
    cout<<endl<<endl;
    lst.sort();
    p=lst.begin();
    cout<<"Sorted contents:\n";
    p=lst.begin();
    while(p!=lst.end())
    {
        cout<<*p<<" ";
        p++;
    }
    return 0;
}
