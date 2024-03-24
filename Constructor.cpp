#include <iostream>
// #include"IntroHero.cpp"
using namespace std;
class Hero
{
private:
    int health;
public:
    char level;
    // Default Constructor Non Parameterized
    // Constructors are the default function called during object initialization
    // Compiler creates a default constructors with garbage values
    Hero()
    {
        //has same name as class name
        //has no return type
        //invoked during object creation
        //by default a constructor is involked by compiler
        cout<<"Constructor called"<<endl;

    }
    // Parameterized constructor
    Hero(int Health)
    {
        //this consists the address of calling object
        this->health=Health;
        cout<<"this->"<<this<<endl;//has same address as h1
    }
    //Polymorphism: Function Overlaoding
    Hero(int Health,char Level)
    {
        //this consists the address of calling object
        this->level=Level;
        this->health=Health;
    }
    // There can be different types of constructors like copy constructor, 
    void setHealth(int h,char pow)
    {
        if(level=='A')
        health=h+20;
        else if(level=='B')
        health=h+10;
        else
        health=h;
    }
    int getHealth()
    {
        return health;
    }
    char getLevel()
    {   
        return level;
    }
};
int main()
{
    // Hero h1;//dynamic allocation of hero
    //dynamically allocating hero
    Hero *h1 = new Hero(56,'B');//constructor will be called for both type of allocation
    cout<<"\nLevel: "<<h1->getLevel()<<endl;
    // accessing property using . (dot) operator
    // h1.health=90; cannot be accessed because health is private member
    cin>>h1->level;
    // h1.level='A';
    cout<<"size: "<<sizeof(h1);//size should have been 5 but it is coming to be 8 
    // ::padding
    // ::gredy alignment
    cout<<"\nhealth: "<<h1->getHealth();
    h1->setHealth(90,'c');
    cout<<"\nh1: "<<h1;
    cout<<"\nhealth: "<<h1->getHealth();
    cout<<"\nLevel: "<<h1->getLevel();
    return 0;
}