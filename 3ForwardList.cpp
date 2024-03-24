#include<iostream>
#include<forward_list>
using namespace std;
int main()
{
    forward_list<int> f;
    f.assign({10,20,30,10});
    f.remove(10);
    for(auto it=f.begin();it!=f.end();it++)
        cout<<*it<<" ";
    cout<<endl;
    forward_list<int>f2;
    f2.assign(f.begin(),f.end());
    for(auto it=f2.begin();it!=f2.end();it++)
        cout<<*it<<" ";
    cout<<endl;
    return 0;
}