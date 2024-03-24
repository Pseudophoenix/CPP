#include <iostream>
// #include"IntroHero.cpp"
using namespace std;
class Hero
{
private:
    int health;
public:
    char level;
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
// we can also make class somewhere else then import that class

// class Hero
// {
//     //empty class occupies one byte in memory
// };
int main()
{
    // Hero h1;//dynamic allocation of hero
    //dynamically allocating hero
    Hero *h1 = new Hero;//pointer to Heap for a Hero object
    // accessing property using . (dot) operator
    // h1.health=90; cannot be accessed because health is private member
    // cin>>h1->level;//arrow operator
    cin>>(*h1).level;//dereferencing
    // h1.level='A';
    cout<<"size: "<<sizeof(*h1);//size should have been 5 but it is coming to be 8 
    // ::padding
    // ::gredy alignment
    h1->setHealth(90,'c');
    cout<<"\nhealth: "<<h1->getHealth();
    cout<<"\nLevel: "<<h1->getLevel();
    return 0;
}