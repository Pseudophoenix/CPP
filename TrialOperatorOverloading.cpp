// following cannot be overloaded
// .
// ::
// 
// function overloading and operator overloading
// operator overloading further two ways: class function and friend function

#include<iostream>
#include<conio.h>

using namespace std;
class demo
{
    int a,b;
    public:
    demo(int x,int y)
    {
        a=x;
        b=y;
    }

    void show()
    {
        cout<<"A="<<a<<" "<<"B="<<b<<endl;
    }
// 1.  Class function
/*    void operator -()
    {
        a=-a;
        cout<<"tIk TInk";
        b=-b;
    }*/
//2. Friend function
    friend void operator -(demo &obj);
};
void operator -(demo &obj)
{
    obj.a=-obj.a;
    obj.b=-obj.b;
    cout<<"Bye";
}
int main()
{
    // clrscr(1);
    demo ob(-10,-20);
    ob.show();
    -ob;
    ob.show();
    getch();
    return 1;
}
