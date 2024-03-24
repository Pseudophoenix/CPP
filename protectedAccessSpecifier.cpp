#include<iostream>
#include"string.h"
using namespace std;
// protected access specifier : available within class and its subclasses inherited from it.
class Person{
    // protected:
    public:
        string name;
        int id;
};
class Student: public Person{
    private:
        int marks;
    public:
        void print()
        {
            cout<<name<<" "<<id<<" "<<marks<<endl;//protected data members available to Child class
        }
};
class Teacher: public Person{//this access specifier specifies that the protected and public members are now in public access of Teachers otherwise if private was use then only available to use within the child class

};
int main()
{
    Person alok;
    // alok.name="Alok"; valid for public->(private or protected)
    Student sumit;
    // sumit.name="Sumit"; gives error because protected member cannot be made to public inside the child class
    // sumit.name="Slok"; invalid for public->(private or protected)
}
// private: not accessible
// protected: remain protected or can be made private to child class
// public can be made private or protected or public


//Inheritance Access
//public=> protected and public of base class remain as they are
//private=> protected and public of base class becomes private
//protected=> protected and public of base class becomes protected