#include<iostream>
// class support concept of encapsulation and data abstraction

// class and object
// object is an instance of an object: variable of a class
//  class is a datatype with function
// OOPS is prefered for complex programs
//  CPP supports both procedural and object oriented programming
using namespace std;

class Student{
    public:
    int roll;
    float marks;
    char * name;
};

class teacher{
    public:
    int Serial;
    char*Name;
    int Class;
    char*Subject;
};

class Complex{
    private:
    // data members are usually private member of a class
    // private members are available only to the class, can be called from inside the class
    // private members concept supports the concept of data abstraction:users sees what can be done and not how is it done
    int real;
    int img;
    public:
    // function members are usually public
    // public members are available all across the program, can be called from everywhere
    // void print(){
    //     std::cout<<real<<" ";
    //     std::cout<<img;
    // }
    Complex(int r,int i){
        real=r;
        img=i;
    }
};
int main()
{
    Complex c1(21,44);
    // c1.print();
    return 0;
}