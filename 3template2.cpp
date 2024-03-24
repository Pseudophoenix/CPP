#include<iostream>
using namespace std;
template<class X> 
void swapargs(X &a,X &b)
{
    X temp;
    temp=a;
    a=b;
    b=temp;
}
int main()
{
    int i=23;
    int j=56;
    double x=34.45,y=54.3;
    char a='x',b='z';
    cout<<i<<" "<<j<<endl;
    cout<<a<<" "<<b<<endl;
    cout<<x<<" "<<y<<endl;
    swapargs(i,j);
    swapargs(a,b);
    swapargs(x,y);
    
    cout<<i<<" "<<j<<endl;
    cout<<a<<" "<<b<<endl;
    cout<<x<<" "<<y<<endl;
    return 0;
}