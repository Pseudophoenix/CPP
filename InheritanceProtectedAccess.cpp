#include<iostream>
uisng namespace std;
class base{
    protected:
    int i, j;
    
    public:
    void set(int a, int b)
    {
        i=a;
        j=b;
    }
    void show(){cout<<i<<" "<<j<<"\n";}
};
class derived1:public base{
    int k;
    public:
    derived(int x){k=x;}
    void showk(){cout<<k<<"\n";}
};

class derived2:public derived1{
    int k;
    public:
    derived(int x){k=x;}
    void showk(){cout<<k<<"\n";}
};
int main()
{
    derived ob(3);
    ob.set(1,2);
    ob.show();
    ob.showk();
    return 0;
}