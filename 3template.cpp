#include <iostream>

using namespace std;
template<class X> void swapargs(X &a, X &b)
{
    X temp;
    temp=a;
    a=b;
    b=temp;
}

int main()
{   int i=12;
int j=23;
double x=10.2,y=23.1;
char a='x' , b='z';
cout<<i<<" "<<j<<endl;
cout<<a<<" "<<b<<endl;
cout<<x<<" "<<y<<endl;
swapargs(i,j);
swapargs(a,b);
swapargs(x,y);
cout<<i<<" "<<j<<endl;
cout<<a<<" "<<b<<endl;
cout<<x<<" "<<y<<endl;

    cout<<"Hello World";

    return 0;
}