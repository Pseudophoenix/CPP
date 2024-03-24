#include<iostream>
#include<vector>
using namespace std;
int myCmp(pair<int,int>p1,pair<int,int>p2)
{
    return p1.second>p2.second;
}

void printSortedByMarks(int roll[],int marks[],int n)
{
    vector<pair<int,int>> v;
    for(int i=0;i<n;i++)
        v.push_back({roll[i],marks[i]});
    sort(v.begin(),v.end(),myCmp);
    // sort(v.begin(),v.end(),greater<pair<int,int>>());
    for(int i=0;i<n;i++)
    {
        cout<<v[i].first<<" "<<v[i].second;
        cout<<endl;
    }
}

int main()
{
    int roll[]={101,108,103,105};
    int marks[]={70,80,40,90};
    
    return 0;
}