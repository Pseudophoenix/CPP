#include<iostream>
using namespace std;
void Xhandler(int test) throw(int, char, double)
{
    if(test==0) throw test;
    if(test==1) throw 'a';
    if(test==2) throw 123.3;
    catch(int a)
    {
        cout<<"Caught an integer\n";
    }
}
int main()
{
    cout<<"Start\n";
    try{
        Xhandler(0);
    }
    // catch(int i)
    // {
    //     cout<<"Caught an integer\n";
    // }
    catch(char c)
    {
        cout<<"Caught a character\n";
    }
    catch(double d){
        cout<<"Caught double\n";
    }
    cout<<"End";
    return 0;
}