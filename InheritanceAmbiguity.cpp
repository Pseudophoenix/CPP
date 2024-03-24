#include<iostream>
using namespace std;
class A{
    public:
        int m(){

        }
};
class B{
    public:
    int m(){
        
    }
};
class C:public A,public B{
    // now when object of C invokes the function 'm' then which 'm' will it use?
    // This is the Inheritance Ambiguity
};
int main()
{
    C cat;
    // cat.m();
    cat.A::m();//Solution for ambiguity using Scope Resolution
    cat.B::m();//Solution for ambiguity using Scope Resolution
}