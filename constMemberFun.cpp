#include<iostream>
using namespace std;

class Complex{
    private:
        int real;
        int imag;
    public:
        void add(Complex &n1,Complex &n2) const{
            cout<<n1.real+n2.real;
            cout<<n1.imag+n2.imag;
        }
};