#include <iostream>
#include"IntroHero.cpp"
using namespace std;
// class Hero
// {
// public:
// // private:
//     int health;
//     int level;
// };
//we can also make class somewhere else then import that class

// class Hero
// {
//     //empty class occupies one byte in memory
// };
int main()
{
    Hero h1;
    // accessing property using . (dot) operator
    h1.health=90;
    h1.height=65;
    cout<<"size: "<<sizeof(h1);
    cout<<"\nhealth: "<<h1.health;
    cout<<"\nheight: "<<h1.height;
    h1.print();
}