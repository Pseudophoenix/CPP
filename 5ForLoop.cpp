#include<iostream>
using namespace std;
int main()
{
    // for(initialization;condition;update)
    // {
        //...
    // }
    int n;
    cin>>n;
    int sum=0;
    for(int i=0;i<=n;i++)
    {
        sum+=i;
    }
    cout<<sum;

    return 0;
}