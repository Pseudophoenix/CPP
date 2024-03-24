#include<iostream>
#include<forward_list>
using namespace std;
int main()
{
    forward_list<int> f;
    f.assign(10,4);
    for(auto i:f)
    {
        cout<<i<<" ";
    }
    cout<<endl;
    for(auto it=f.begin();it!=f.end();it++)
    {
        cout<<(*it)<<" ";
    }
    cout<<endl;
}