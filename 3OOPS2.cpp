#include<iostream>
#include<string>
struct Student{
    char name[23];
    int roll_number;
    float total_marks;
};
Student A;
double final_total=A.total_marks=+3;
class item{
    int number;
    float cost;
    public:
    void getdata(int a, float b);
    void putdata(void)
    {

    }
};
void item::getdata(int a,float b)
{
    number=a;
    cost=b;
}
void item::putdata(void)
{
    
}