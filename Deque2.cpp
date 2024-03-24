#include<iostream>
#include<deque>

using namespace std;

int main()
{
    deque<int>dq{10,15,43,63,86};
    deque<int>dq={10,15,43,63,86};
    auto it=dq.begin();
    it++;
    dq.insert(it,20);
    dq.pop_front();
    dq.pop_back();
    cout<<dq.size();
    for(auto x:dq)
        cout<<x<<" ";
        cout<<endl;
    return 0;
}