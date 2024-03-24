#include<iostream>
#include<forward_list>
using namespace std;
int main()
{
    forward_list<int> l1={15,43,25,77};
    auto it=l1.insert_after(l1.begin(),10);
    for(int x:l1)
        cout<<x<<" ";
        cout<<endl;
    it=l1.insert_after(it,{2,3,5,1});
    for(int x:l1)
        cout<<x<<" ";
        cout<<endl;
    it=l1.emplace_after(it,34);
    for(int x:l1)
        cout<<x<<" ";
        cout<<endl;
    it=l1.erase_after(it);
    for(int x:l1)
        cout<<x<<" ";
    return 0;
}