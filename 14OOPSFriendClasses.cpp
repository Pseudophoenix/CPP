// why needed?
// It allows classes to let other classes access their private data and function members
#include<iostream>
using namespace std;
class employee;
class printer{
    public:
    void printEmp(const employee &e);
};
class employee{
    private:
    int id;
    string name;
    public:
    // friend void printer ::printEmp(const employee &e);//friend function
    friend class printer;//friend class
    employee(int i, string n):id(i),name(n){}
};
void printer::printEmp(const employee &e)
{
    cout<<e.id<<" "<<e.name<<" ";
}
int main()
{
    printer p;
    employee e(101,"Alok");
    p.printEmp(e);
    return 0;
}
// friendship is granted and not taken
// is mutual and not transitive and not inherited