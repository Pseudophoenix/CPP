#include<iostream>
using namespace std;
class sample{
    int a;
    int b;
    public:
    void setvalue(){
        a=34;
        b=53;
    }
    friend float mean(sample s);
};
float mean(sample s){
    float(s.a+s.b)/2;
}
int main()
{
    sample x;
    x.setvalue();
    cout<<mean(x)<<" ";
}

class X{
    public:
    int fun1();
};
class Y{
    friend int X::fun1();
};

class Z{
    friend class X;
};
class ABC;
class XYZ{
    int x;
    public:
    void setValue(int i){x=i;}
    friend void max(XYZ,ABC);
};
class ABC{
    int a;
    public:
        void setvalue(int i){a=i;}
        friend void max(XYZ,ABC);
};
void max(XYZ m,ABC n)
{
    if(m.x>=n.a)
    cout<<m.x;
    else
    cout<<n.a;
}
class class_2{
    int value1;
    public:
    void indata(int a){
        value1=a;
    }
};
class class_1{

};