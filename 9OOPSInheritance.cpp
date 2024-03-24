#include<iostream>
using namespace std;
// Inheritance stands for reusability
class Person{
    protected://protected access specifier means things(data and function members) are available only inside the class and the child classes
    string name;
    int id;    
};
class Student: public Person{
    private:
        int marks;
    public:
        string getName()
        {
            return name;
        }
        void print()
        {
            cout<<name<<" "<<id<<" "<<marks<<endl;
        }
};
// when we create an object of class student(child class) constructors of both the base class and derived class are called