#include<iostream>
#include<string>
struct student{
    char name[20];
    int roll_number;
    float total_marks;
};
student A;
// strcpy(A.name,"John");
// A.roll_number=22;
// A.total_marks=233;
double final_total=A.total_marks+3;
/*
class class_name{
    private:
        variable declarations;
        function declarations;
    public:
        variable declarations;
        function declarations;
};*/
class item{
    int number;
    float cost;
    public:
        void getdata(int a,float b);
        void putdata(void)
        {
            // cout<<number<<"\n";
            // cout<<cost<<"\n";
        }

};
void item::getdata(int a,float b)
{
    number=a;
    cost=b;
}
void item::putdata(void)
{
    // cout<<"Number:"<<number<<"\n";
    // cout<<"Cost:"<<cost<<"\n";
}