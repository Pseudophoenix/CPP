#include<iostream>
using namespace std;
int main()
{
    int a,b,c;
    cout<<"Enter three numbers: \n";
    cin>>a>>b>>c;
    if(a>b)
    {
        if(a>c)
        cout<<"a:"<<a;
        else{
            cout<<"c:"<<c;
        }
    }
    else if(a<b)
    {
        if(b>c)
        cout<<"b:"<<b;
        else{
            cout<<"c:"<<c;
        }
    }
    return 0;
}