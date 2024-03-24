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
    demo operator +(demo obj)
    {
        demo temp(0,0);
        temp.a=a+obj.a;
        temp.b=b+obj.b;
        cout<<a<<"tIk TInk"<<obj.a;
        return temp;
    }
//2. Friend function
    // friend demo operator +(demo &obj,demo &obj2);
};
/* demo operator +(demo &obj,demo &obj2)
{
    demo temp(0,0);
    cout<<obj.a*obj2.a<<endl;
    cout<<obj.a*obj2.b<<endl;
    cout<<obj.b*obj2.b<<endl;
    obj2.a=-obj2.a;
    obj2.b=-obj2.b;
    cout<<"TataBye";
    temp.a=obj.a-obj2.a;
    temp.b=obj.b-obj2.b;
    return temp;
}*/
int main()
{
    // clrscr(1);
    demo ob(-10,-20),obj2(-23,3),obj3(5,7);
    ob.show();
    obj3=obj2+ob;
    // ob passed into operator function of obj2 object
    ob.show();
    obj3.show();

    getch();
    return 1;
}