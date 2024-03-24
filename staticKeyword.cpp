// creates a data member that belongs to class and not bind to object
// static members of a class can be a static data member or a static function
// even if we don't have any object initialized we can use static variables
#include<iostream>
#include"string.h"
using namespace std;
class Hero{
    private:
        char level;
        int height;
        int health;
    public:
        static int count;//static data member
        // const static int count=9;
        //for makin a constant, we can also define its value here only
        char *name;
    Hero()
    {
        cout<<"Constructor called\n";
        name=new char[20];
    }
    Hero(int level,int height,int health,char name[])
    {
        this->level=level;
        this->height=height;
        this->health=health;
        cout<<"Constructor called\n";
        // name=new char[20];
        this->name=name;
        Hero::count++;
        this->getCount();
    }
    ~Hero()
    {
        cout<<"Destructor called\n";
        Hero::count--;
    }
    void print()
    {
        cout<<this->level<<endl;            cout<<this->health<<endl;
        cout<<this->height<<endl;
        cout<<"->"<<this->count<<endl;
        cout<<this->name<<endl;
        // this->getCount();
    }
    void setLevel(int Level)  
    {
        this->level=Level;
    }
    void setHeight(int Height)  
    {
        this->height=Height;
    }
    void setCount(int Count)  
    {
        this->count=Count;
    }
    static int getCount()//static function member
    {
        // cout<<"Current Object count is "<<Hero::count<<endl;
        return Hero::count;
        
        // cout<<"Current Object count is "<<this->count<<endl;
        // error: 'this' is unavailable for static member functions
        //also we cannot use this keyword inside static function
        //we can use only static variable in static function member
    }
    void setName(char name[])  
    {
        strcpy(this->name,name);
    }
};
class Player{
    public:
        static int count;
        Player(){count++;}
        ~Player(){count--;}
};
int Player::count=0;
int Hero::count;
int main()
{   /*
    char name[4][5]={"Paul","Kama","Vija","Olar"};
    Hero Paul('P',4,98,name[1]);
    Paul.print();
    Paul.setName(name[0]);
    Paul.print();
    // cout<<Hero::count<<endl;
    Paul.getCount();
    Paul.print();
    //doesnot work
    // Hero::count=45;
    Paul.print();
    // Paul.count=34; // not recommended
    Hero *Kama=new Hero('K',5,90,name[2]);
    Kama->print();
    delete Kama;
    Hero::getCount();
    Hero Vija('V',15,90,name[3]);
    Vija.print();
    cout<<Hero::getCount()<<endl; */  
    
    /*
    Player p1;
    cout<<Player::count<<" ";//1
    Player p2;
    cout<<Player::count<<" ";//2
    return 0;
    */
   Player p1;
   cout<<Player::count<<" ";//1
   {
    Player p2;
    cout<<Player::count<<" ";//2
   }
   cout<<Player::count<<" ";//1
   //accessing the static variables using class names (preferred)
}