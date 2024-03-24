#include<iostream>
using namespace std;
template<class X>void f(X a)
{
    cout<<"Inside of f(X &a)\n";
}
// Overloading the template function
template<class X,class Y>void f(X a,Y b)
{
    cout<<"Inside of f(X &a, Y &b)\n";
}
int main()
{
    f(10);
    f(10,20);
    return 0;
}