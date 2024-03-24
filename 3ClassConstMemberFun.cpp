#include<iostream>
using namespace std;
class Test
{
    private:
        int x;
        int y;
    public:
        void func1()
        {
            x+=5;
            y-=1;
        }
        void func2() const {
            // x-=6;   //Error: can't modify a data member
            // y+=7;   //Error: can't modify a data member
        }
};
class ComplexNumber
{
    private:
        mutable float  realPart;
        float imaginaryPart;
    public:
        void add(const ComplexNumber&n1,const ComplexNumber&n2)
        {
            realPart=n1.realPart;
            imaginaryPart=n1.imaginaryPart;
            realPart+=n2.realPart;
            imaginaryPart+=n2.imaginaryPart;
        }

};
int main()
{

}
