// friend contradicts/goes against the concept of data abstraction and data encapsulation
// friend class not available in Java
#include<iostream>
using namespace std;
class Employee;
class Printer{
    public:
        void printEmp(const Employee &e);
};
class Employee{
    private:
        int id;
        string name;
    public:
    // 1. Friend function
        // friend void Printer:: printEmp(const Employee & e);// printEmp function of Printer is declared in Employee as the friend function of Employee
        //Employee has said that Printer is a friend function and so it can access my id and name 
    //2. Friend Class
        friend class Printer;
        // here we have declared the Printer class as friend class
        Employee(int i, string n):id(i),name(n){}
};
void Printer::printEmp(const Employee &e)
{
    cout<<e.id<<" "<<e.name<<" ";
}
int main()
{
    Printer p;
    Employee e(101,"ABC");
    p.printEmp(e);
    return 0;
}

//Global functions


// Friendship is not transitive
//               not mutual
//               not inherited
//               granted not taken