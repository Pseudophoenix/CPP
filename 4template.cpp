/******************************************************************************

Welcome to GDB Online.
GDB online is an online compiler and debugger tool for C, C++, Python, Java, PHP, Ruby, Perl,
C#, OCaml, VB, Swift, Pascal, Fortran, Haskell, Objective-C, Assembly, HTML, CSS, JS, SQLite, Prolog.
Code, Compile, Run and Debug online from anywhere in world.

*******************************************************************************/
#include <iostream>

using namespace std;
template <class X> void swapargs(X &a,X &b)
{
    X temp;
    temp=a;
    a=b;
    b=temp;
    cout<<"__"<<endl;
}
// void swapargs(int &a,int &b)
// {
//     int temp;
//     temp=a;
//     a=b;
//     b=temp;
//     cout<<"Inside the swapargs int specialization"<<endl;
// }

template<> void swapargs<int>(int &a,int &b)
{
    int temp;
    temp=a;
    a=b;
    b=temp;
    cout<<"Inside swapargs int specialization.\n";
}
int main()
{
    double i=12.76;
double j=23.567;
int x=6,y=7;
cout<<x<<" "<<y<<endl;
cout<<i<<" "<<j<<endl;
swapargs(i,j);
swapargs(x,y);
cout<<x<<" "<<y<<endl;
cout<<i<<" "<<j<<endl;
    cout<<"Hello World";

    return 0;
}