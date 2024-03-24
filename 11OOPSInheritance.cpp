#include<iostream>
using namespace std;
class Base{
    protected:
    // private://private will give us compiler error as we cannot access it inside the derived class
    // public://public makes x available all over the program
    int x;
    public:
    Base(int a):x(a){cout<<"Base \n";}
};
class Derived: public Base{
    private:
    int y;
    public:
    // Derived(int b):y(b){cout<<"Derived\n";}//gives compiler error because here base class constructor is not being called by the derived class constructor
    //so here compiler will try to call the default constructor having no parameter by itself and as we have declared a parameterized constructor compiler fails to do so.
    // we need to call the parameterized constructor explicitly
    Derived(int a,int b):Base(a),y(b){cout<<"Derived\n";}
    void print(){cout<<x<<" "<<y<<endl;}
};
int main()
{
    Derived d(10,20);
    d.print();
    return 0;
    // cout<<d.x;//works only if we have public
}
// when we create the derived class object first it calls its own constructor and then its base class construuctor