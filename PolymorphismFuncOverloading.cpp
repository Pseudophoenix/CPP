// Polymorphism: Poly: many
//               Morphism: forms
//can be of two types:
// 1. Compiled time polymorphism
// Function Overloading
// Operator Overloading

// 2. Run time polymorphism
#include<iostream>
using namespace std;
class A{
    // function overloading
    // different number of parameters or types of parameters
    // overloading with return type change not allowed
    public:
        int fun1()
        {
            cout<<"Hello fun1"<<endl;
            return 0;
        }
        int fun1(int a)
        {
            cout<<"Hello fun1 you entered "<<a<<endl;
            return 5;
        }
        int fun1(double a)
        {
            cout<<"Hello fun1 you entered "<<a<<endl;
            return 5;
        }
        // int fun1(int a, int b)
        // {
        //     cout<<"Hello fun1 you entered "<<a<<" and "<<b<<endl;
        //     return 5;
        // }
        int fun1(int a, int b,int t=5)
        {
            cout<<"Hello fun1 you entered "<<a<<" and "<<b<<endl;
            cout<<"Default value of t is "<<t<<endl;
            return 5;
        }
        // void fun1()
        // {
        //     cout<<"Hello fun1"<<endl;
        // }
        // This way we cannot overloaded just by changing the return type

};
int main()
{
    A a;
    a.fun1();
    a.fun1(6);
    a.fun1(6,7);// here we didn't enter the parameter value for t therefor default value of t is used
    a.fun1(6.8);
}