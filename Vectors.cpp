// dynamic array
#include<iostream>
#include<vector>
using namespace std;

int main()
{
    vector<int> v;
    // very similar to template class;
    v.push_back(1);
    v.push_back(2);
    v.push_back(24);
    v.pop_back();
    // pop_back removes last element
    v.push_back(22);
    // cout<<v.size();
    for(int t=0;t<v.size();t++)
    {
        cout<<"\'"<<v[t]<<"\'";
    }
    cout<<endl;
    //iterator:
        //v.end
        // v.beg
        // it is a pointer pointing from v.begin to v.end
    vector<int>::iterator it;
    for(it=v.begin();it!=v.end();it++)
    {
        cout<<*it<<endl;
    }
    vector<int> v2(3,5);
    // 50 50 50
    swap(v,v2);
    // swap(vector1,vector2);
    return 0;
}