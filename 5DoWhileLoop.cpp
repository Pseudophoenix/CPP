#include<iostream>
using namespace std;
int main()
{
    // for(initialization;condition;update)
    // {
        //...
    // }
    int n,i=1;
    cin>>n;
    int sum=0;
    do{
        sum+=i;
        i++;
    }while(i<=n);
    cout<<sum;

    return 0;
}