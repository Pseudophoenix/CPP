#include<iostream>
using namespace std;
class test{
        int x;
    public:
    test(int i):x(i)
    {
        cout<<"Constructor: "<<x<<endl;
    }
    ~test(){
        //Destructor : called when the object goes out of scope, thatis when delete is called
        //only one in a class
        //also created by default
        //explicitly written when dynamically allocated memory is there
        cout<<"Destructor: "<<x<<endl;
    }
};
int main()
{
    {
        test t3(30);
    }
    test t1(10);
    test t2(20);
}

