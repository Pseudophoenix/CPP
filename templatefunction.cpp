#include<iostream>
using namespace std;

int main()
{
    int arr[]={4,3,6,1,8};
    for(int i=0;i<sizeof(arr)/sizeof(int);i++)
    cout<<arr[i]<<endl;
    return 0;
}