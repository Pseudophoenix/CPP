#include<iostream>
// the idea of class itself supports the concept of encapsulation and data abstraction

// class and object 
// object is an instance of an object: varaible of a class
// class is a datatype with function 
// OOPS is prefered for complex programs
// CPP suppports both procedural and object oriented programming
//  example :
class Student 
{
    public:
        int roll;
        char* name;
        float marks;
};
class Teacher{
    public:
        int Serial;
        char*Name;
        int Class;
        char* Subject;
};
// more helpful for editing only a particular part of the program

class Complex{
    private://data members are usually private members of a class
    // private members are available only to the class, can be called from inside the class
    // private memebers concept supports the concept of data abstraction: users sees what can be done and not how is it done

    int real;
    int img;
    public://function members are ussually public
    // public members are available all across the program, can be called from everywhere
    void print();
    Complex(int r,int i){
        real=r;
        img=i;
    }//constructor that run when we initialize the object
};
int main()
{
    Complex c1(12,43);
    // c1.print();
    // cout<<c1.real;//throughs error
    return 0;
}