#include<iostream>
using namespace std;
class base{
    protected:
        int x;
    public:
        base(int a):x(a){cout<<"Base\n";}
};
class derived:public base{
    private:
        int y;
    public:
        // derived(int b):y(b){cout<<"Derived\n";}//generates an error as we are not calling any base class constructor
        // initializer list
        derived(int a,int b):base(a),y(b){cout<<"Derived\n";}
        void print(){
            cout<<x<<" "<<y<<endl;
        }
};
int main()
{
    derived d(10,20);
    d.print();
    return 0;
}
// when we create a derived class then first it calls the base class constructor and then derived class constructor
//  implicit calling vs explicit calling
// implicit calling: constructor without parameter called
// explicit calling: constructor with parameter cannot be called by compiler by default. We need to call it by ourself