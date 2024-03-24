#include<iostream>
using namespace std;
int indexSearc(int arr[],int n,int sear)
{
    int index,r;
    for(r=0;r<n;r++)
    {
        if(sear==arr[r])
        break;
    }
    index=r;
    return index;
}
int main()
{
    int n,sear,r;
    cin>>n;
    int arr[n];
    cout<<"Enter the array numbers: ";
    for(int t=0;t<n;t++)
    cin>>arr[t];
    cout<<"Enter the number that you want to search for: ";
    cin>>sear;
    for(r=0;r<n;r++)
    {
        if(sear==arr[r])
        break;
    }
    cout<<arr[r]<<" present at index: "<<r+1;
    cout<<arr[r]<<" present at index: "<<indexSearc(arr,n,sear)+1;

    return 0;
}