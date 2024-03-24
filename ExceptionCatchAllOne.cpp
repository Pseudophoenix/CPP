#include<iostream>
using namespace std;
void Xhandler(int test)
{
    try{
        if(test==0) throw test;
        if(test==1) throw 'a';
        if(test==2) throw 123.3;
    }
    catch(int i)
    {
        cout<<"Caught an integer\n";
    }
    catch(int r)
    {
        cout<<"Caught One!\n";
    }
}
int main(){
    cout<<"Start\n";
    Xhandler(0);
    Xhandler(1);
    Xhandler(2);
    cout<<"End\n";
    return 0;
}