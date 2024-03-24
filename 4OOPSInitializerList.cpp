#include<iostream>
using namespace std;
class Test{
    public:
    Test()
    {
        cout<<"Default\n";
    }
    Test(int x)
    {
        cout<<"Paramater\n";
    }
};
class Main
{
    Test t;
    //first initialized with default value
    //declaring the object
    //Here first class members are initialized with some random value
    public:
        /*Main()
        {
            t=Test(10);//initializing the object t
        }*/
        
};

int main()
{
    Main m;
    return 0;
}