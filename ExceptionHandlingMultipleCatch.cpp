#include<iostream>
using namespace std;
void Xhandler(int test)
{
    try{
        if(test) throw test;
        else throe "Value is zero";
    }
    catch(int i)
    {
        cout<<"Caught Exception #: "<<i<<"\n";
    }
    catch(const char*str)
    {
        cout<<"Caught a string \n";
        cout<<str<<"\n";
    }
}
int main()
{
    cout<<"Start\n";
    Xhandler(1);
    Xhandler(2);
    Xhandler(0);
    Xhandler(3);
    cout<<"End\n";
    return 0;
}