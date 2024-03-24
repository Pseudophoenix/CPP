#include<iostream>
using namespace std;
int main()
{
    int n,tempMin,tempMax;
    cin>>n;
    int arr[n];
    for(int t=0;t<n;t++)
    cin>>arr[t];
    tempMax=tempMin=arr[0];
    for(int p=0;p<n;p++)
    {
        if(tempMin>arr[p])
    tempMin=arr[p];
    // min function
    // tempMin=min(tempMin,arr[p]);
    if(tempMax<arr[p])
    tempMax=arr[p];
    // max function
    // tempMax=max(tempMax,arr[p]);
    }
    cout<<"Max:"<<tempMax<<endl;
    cout<<"Min:"<<tempMin<<endl;
    return 0;
}