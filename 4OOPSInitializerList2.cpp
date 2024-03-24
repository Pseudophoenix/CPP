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
        cout<<"Parameter\n";
    }
};
class Main{
    Test t;
    //first initialised with default values
    //declaring the object;
    //here first class members are initialized with some random value
    public:
    Main(){
        // t=Test(10); //initializing the object
    }
};
int main()
{
    Main m;
    return 0;
}
