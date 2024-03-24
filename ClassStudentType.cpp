#include <iostream>
#include <string>
using namespace std;
class StudentType
{
private: // accessed by only the class //also private is the default accessSpecifier
    int studentRollNo;
    char studentName[20];

public: // accessed by anyone
    void setData(int rollNo, char *name)
    {
        studentRollNo = rollNo;
        // strcpy(studentName,name);
    }
    void printData()
    {
        cout << endl;
        cout << "Roll no of Student: ";
        cout << studentRollNo;
        cout << endl;
        cout << "Name of Student: ";
        cout << studentName;
    }
    void printData()
    {
    }
    StudentType()
    {
    }
} stud;
int main()
{
    StudentType student;
    stud.setData(12, "alok");
}
