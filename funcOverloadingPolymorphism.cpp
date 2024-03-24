#include<iostream>
using namespace std;
class complex{
    public:
    void fun()
    {
        cout<<"Without arguement";
    }
    void fun(int a)
    {
        cout<<"With int arguement";
    }
    void fun(double r)
    {
        cout<<"With double arguement";
    }
    void fun(double r,int)
    {
        cout<<"With double arguement";
    }
};
int main()
{
    complex n;
    int r;
    cin>>r;
    // cout<<;
    n.fun(r);
    n.fun();
    n.fun(4);
    n.fun(4.2);
    n.fun(4.2,9);
}