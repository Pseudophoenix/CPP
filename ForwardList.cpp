#include<iostream>
#include<forward_list>
using namespace std;
int main()
{
    forward_list<int> f{10,12,31,41};
    f.push_front(65);
    f.push_front(65);
    for(int j:f)
    {
        cout<<j<<" ";
    }
    cout<<endl;
    f.pop_front();
    
    for(int j:f)
    {
        cout<<j<<" ";
    }
    cout<<endl;
}