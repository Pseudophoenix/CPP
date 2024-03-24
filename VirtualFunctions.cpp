#include<iostream>
using namespace std;
/*
//  a base class type reference or pointer can refer to a derived class object
class Base{};
class Derived:public Base{};
int main()
{
    
    Base *b=new Derived; //a Base pointer refering to object of Derived type 
    Derived d;
    Base &b=d;//assigning the Derived class object to a Base class pointer
    return 0;
    
}*/
class base{
    public:
        void print(){cout<<"Base\n";}
        // virtual void print(){cout<<"Base\n";}
};
class derived: public base{
    public:
        void print(){cout<<"Derived\n";}  //Runtime Polymorphism: function overriding
};
int main()
{
    base b;
    derived d;
    b.print();
    d.print();
    base *ptr=&d;
    ptr->print();//base->decided by the type of pointer and not type of object it is pointing to
    //to solve this problem we use virtual keyword and make virtual functions-> to make it possible for ptr to use the function to object of pointed object and not to the type of pointer it is
    return 0;
}