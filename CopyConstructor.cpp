#include <iostream>
#include<string.h>
// #include"IntroHero.cpp"
using namespace std;
class Hero
{
private:
    int health;
public:
    char level;
    char *name;
    // Default Constructor Non Parameterized
    // Hero()
    // {
    //     //has same name as class name
    //     //has no return type
    //     //invoked during object creation
    //     //by default a constructor is involked by compiler
    //     cout<<"Constructor called"<<endl;
    //     name=new char[100];

    // }
    // Parameterized constructor
    /*Hero(int Health)
    {
        //this consists the address of calling object
        this->health=Health;
        cout<<"this->"<<this<<endl;//has same address as h1
    }*/
    //Polymorphism: Function Overlaoding
    Hero(int Health,char Level)
    {
        //this consists the address of calling object
        this->level=Level;
        this->health=Health;
        name=new char[100];
    }
    
    //making our own copy constructor
    // Hero(Hero temp)shows error due to pass by value
    Hero(Hero *temp)
    {
        this->health=temp->health;
        this->level=temp->level;
        this->name=temp->name;        
        cout<<"Copied"<<endl;
    }
    Hero(Hero &temp)
    {
        char *ch=new char[strlen(temp.name)+1];
        this->health=temp.health;
        this->level=temp.level;
        strcpy(ch,temp.name);
        this->name=ch;
        cout<<"Copied"<<endl;
    }
    void setHealth(int h,char pow)
    {
        if(level=='A')
        health=h+20;
        else if(level=='B')
        health=h+10;
        else
        health=h;
    }
    void setName(char Name[])
    {
        strcpy(this->name,Name);
           // destination source
    }
    int getHealth()
    {
        return health;
    }
    char getLevel()
    {   
        return level;
    }
    void print()
    {
        cout<<"Health:"<<this->health<<endl;
        cout<<"Level:"<<this->level<<endl;
        cout<<"Name:"<<this->name<<endl;
    }
};
int main()
{
    char name[5]="Paol";
    char namE[6]="Leena";
    // Hero h1;//dynamic allocation of hero
    //dynamically allocating hero
    Hero Paul(80,'C');
    Paul.setName(name);
    // Paul.setHealth(80,'c');
    // Paul.setLevel('A');

    // Calls Default COPY CONSTRUCTOR
    // Hero Jin(Paul);
    // on making our own copy constructor the defualt copy constructor gets removed
    
    // Hero Jin=Paul;
    Hero Jin(70,'J');
    Jin.setName(namE);
    Paul.print();
    Jin.print();
    Jin=Paul;

    //same as ```Hero Jin(Paul);```
    // *****deep and shallow copy*******
    //default copy constructor makes shallow copy: address reference for name pointer here
    //deep copy is implemented by user copy constructor
    
    
    // Jin.health=Paul.health;
    // Jin.level=Paul.level;

    Paul.print();
    Jin.print();
    cout<<"size: "<<sizeof(Paul);//size should have been 5 but it is coming to be 8 
    // ::padding
    // ::gredy alignment
    Paul.name[0]='R';
    Paul.level='O';
    Paul.print();
    Jin.print();
    return 0;
}