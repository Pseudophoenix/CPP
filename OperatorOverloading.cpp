// Operator overloading is not supported in Java
// Operator overloading is using an operator to perform a special function or action on a particular class object (for our own data types or operands)
// Not analogous to function overloading where a same name function can be redefined again and again with different number and types of parameters
#include<iostream>
using namespace std;

class Complex{
    private:
        int real, imag;
    public:
        Complex(int r=0,int i=0):real(r),imag(i){
        }
        Complex operator +(Complex const &obj)  
        {
            // here we are doing c1.operator+(c2)
            // and then returning the result of addition back using temp object
            Complex temp;
            temp.real=real+obj.real;
            temp.imag=imag+obj.imag;
            return temp;
        }
        void print()
        {
            cout<<real<<" + i "<<imag<<endl;
        }
};
int main()
{
    Complex c1(10,5),c2(2,4);
    Complex c3=c1+c2;//acts as a call to function c1.operator+(c2)
    c3.print();
    return 0;
}

// Use of operator overloading:
//        helpful in reducing the efforts of programmer by using more abvious operators
// Can we write anything inside these operator functions?
//        yes, but not done usually as this disturbs the understandability of operator meaning
// What about precedence, associativity and arity?
// arity: number of operator it takes
// precedence does not change 

// We cannot overload . , ::, ?: and sizeof() operator

// Assignment operator is automatically overloaded by compiler as doing obj1=obj2 copies the data of obj2 to obj1 (shallow copy)
// we need to make an assignment operator to enforce deep copy in case when there is dynamic memory alloction in first object i.e a pointer