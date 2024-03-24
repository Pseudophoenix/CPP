#include<iostream>
using namespace std;
class Player{
    private:
    int age;
        static int count;

    public:
    Player()
    {
        count++;
    }
    ~Player()
    {
        count--;
    }
    static int getCount(){
        // cout<<age; //static function can only access static data members and cannot access non static data members
        //although non static functions can access static data members
        return count;}
};
int Player::count=0;
int main()
{
    Player p1,p2;
    cout<<Player::getCount();//2
    return 0;
}