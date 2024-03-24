#include <iostream>

using namespace std;

class Base{
    int val;
    public:
    Base(): val(0)
    {
        
    }
    Base(int a)
    {
        this->val=a;
    }
    // void print()
    // {
    //     cout<<"Print the data Base"<<val<<endl;
    // }
    virtual void print()
    {
        cout<<"Print the data Base"<<val<<endl;
    }
    
};
class Derived:public Base{
    int derVal;
    public:
    Derived(int b)
    {
        this->derVal=b;
    }
    void print()
    {
        cout<<"Print the data overloaded Derived "<<derVal<<endl;
    }
    
};
int main()
{
    Base obj(5);
    Base*bptr;
    bptr=&obj;
    bptr->print();
    // obj.print();
    Derived der(6);
    // Derived *dptr;
    der.print();
    bptr=&der;
    // dptr=&obj;
    // dptr->print();
    bptr->print();
    // cout<<"Hello World";

    return 0;
}
