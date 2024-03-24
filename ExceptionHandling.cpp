#include<iostream>
using namespace std;
int average(int arr[],int n)
{
    if(n==0)
    {
        // ...
    }
    int sum=0;
    for(int i=0;i<n;i++)
    {
        sum+=arr[i];
    }
    int res=sum/n;
    return res;
} 
// Cases of exception:
//  no heap memory available
//  divide by zero
//  accessing array elements outside the allowed index range
//  pop from an empty stack
int main()
{
    int x,y;
    try {
        if(y==0)
        throw 0;
        cout<<"Result is "<<x/y;
    }
    catch(int t)
    {
        cout<<"Divisor is zero";
    }
    return 0;
}