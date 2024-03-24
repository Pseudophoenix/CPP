//Destructor also called automatically
// has no return type
// same name as class name with ~ tilde in front
//used to deallocate memory 
//destroys object
//only one type of destructor
//destructor automatically called for static allocated object and not so for dynamically allocated objects....we need to create and call the destructor by ourself by using delete keyword
#include<iostream>
using namespace std;
class Hero{
    public:
    Hero(){

    }
    ~Hero()
    { 

    }
//use delete keyword to deallocate memory and space that was alloted using new keyword
};
int main()
{
    Hero *h1=new Hero;
    delete h1;

}