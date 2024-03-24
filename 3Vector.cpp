#include<iostream>
#include<vector>

using namespace std;

void printSortedIndex(int arr[],int n)
{
    vector<pair<int,int>> v;
    for(int i=0;i<n;i++)
        v.push_back({arr[i],i});
    sort(v.begin(),v.end());
    for(auto x:v)
    cout<<x.first<<" "<<x.second<<endl;
}