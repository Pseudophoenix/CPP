#include<iostream>
using namespace std;
class Complex{
    private:
    int real,img;
    public:
        Complex(int r=0,int i=0):real(r),img(i)
        {

        }
        Complex operator+(Complex const&obj)
        {
            Complex res;
            res.real=real+obj.real;
            res.img=img+obj.img;
            return res;
        }
        void print()
        {
            cout<<real<<"+i"<<img<<endl;
        }
};

int main()
{
    Complex c1(10,2),c2(5,7);
    Complex c3=c1+c2;//c1.operator+(c2);
    c3.print();
    return 0;
}
//use of operator overloading: adds readibility
//precedence, associativity and arity do not change when we overload the operators
// we cannot overload the . :: sizeof and ? operator
// assignment operator is overloaded by compiler that does member by member copy//again shallow copy