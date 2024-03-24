#include<iostream>
using namespace std;
class base1{
    public:
    base1(){cout<<"Constructing Base1\n";}
    ~base1(){cout<<"Constructing Base1\n";}
};
class base2{
    public:
    base2(){cout<<"Constructing Base2\n";}
    ~base2(){cout<<"Constructing Base2\n";}
};
class derived1: public base1, public base2{
    public:
    derived1(){cout<<"Constructing derived1\n";}
    ~derived1(){cout<<"Destructing derived1\n";}
};
// class derived2: public derived1{
//     public:
//     derived2(){cout<<"Constructing derived2\n";}
//     ~derived2(){cout<<"Destructing derived2\n";}
// };
int main()
{
    derived1 ob;
    return 0;
}