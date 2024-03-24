#include<iostream>
using namespace std;
int main()
{
    int num_int=9;
    int nint=45;
    double ndouble;
    double num_double;
    // IMPLICIT CONVERSION
    num_double=num_int;
    // EXPLICIT CONVERSION
    ndouble=(double)nint;
    // ndouble=double(nint); //function style casting
    cout<<"INT: "<<num_int<<endl;
    cout<<"DOU: "<<num_double<<endl;
    cout<<"INT: "<<nint<<endl;
    cout<<"DOU: "<<ndouble<<endl;
    return 0;
}