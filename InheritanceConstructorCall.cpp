#include<iostream>
using namespace std;
class base{
    public:
    base(){cout<<"Constructing Base\n";}
    ~base(){cout<<"Constructing Base\n";}
};
class derived1: public base{
    public:
    derived1(){cout<<"Constructing derived1\n";}
    ~derived1(){cout<<"Destructing derived1\n";}
};
class derived2: public derived1{
    public:
    derived2(){cout<<"Constructing derived2\n";}
    ~derived2(){cout<<"Destructing derived2\n";}
};
int main()
{
    derived2 ob;
    return 0;
}