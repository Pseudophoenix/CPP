#include<iostream>
#include<fstream>
using namespace std;
struct Person{
    char name[50];
    int age;
    char phone[24];
};
int main()
{
    Person me={"Alok",29,"083-423"};
    Person book[30];
    int x=23;
    double fx=23.42;
    ofstream outfile;
    outfile.open("junk.dat",ios::binary| ios::out);
    // outfile.write((char*)&x,sizeof(int));
    // outfile.write((char*)&fx,sizeof(fx));
    outfile.write((char*)&me,sizeof(me));
    // outfile.write((char*)book,30*sizeof(Person));
    outfile.close();
    return 0;
    
}