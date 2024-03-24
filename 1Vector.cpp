#include<iostream>
#include<vector>
using namespace std;

vector<int> getSmaller(int arr[],int n,int k)
{
    vector<int> res;
    for(int i=0;i<n;i++)
    if(arr[i]>k)
        res.push_back(arr[i]);
    return res;
}

int main()
{   
    
    vector<int> v{8,100,20,40,3,7};
    for(int x:v)
    {
        if(x<10)
        cout<<x<<" ";
    }
    cout<<endl;
    for(int t:v)
    if(t<50)
        cout<<t<<" ";
    // cout<<endl;
    int arr[]={10,5,30,40,20};
    vector<int> res=getSmaller(arr,5,20);
    cout<<endl;
    for(int r:res)
    cout<<r<<" ";
    
    return 0;
}
