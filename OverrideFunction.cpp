#include<iostream>
using namespace std;
class base{
    public:
        virtual void print(){cout<<"Base\n";}
};
class derived{
    public:
        void derived::print() override{cout<<"Derived\n";}//override keyword overrides the function present in base class
        // available in C++
};
int main()
{

}