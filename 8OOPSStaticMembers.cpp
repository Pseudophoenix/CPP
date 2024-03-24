#include<iostream>
using namespace std;
class Player{
    public:
        static int count;
        int ram;
        Player(){count++;}
        ~Player(){count--;}
        static int getCount()
        {
            // ram=0;//gives error
            // static function can only access the static data members although normal functions can access all data members
            // static functions don't have any this pointer 
            return count;
        }
};
int Player::count=0;//IMP: defining the count static data member: special way to do so
int main(){
    Player p1;
    cout<<Player::count<<" ";//accessing the static data member using the class name although we can do so using object name but class name is preferred mostly
    {
        Player p2;
        cout<<Player::count<<" ";//p2.count or p1.count
    }//here p2 goes out of scope although we can also use delete keyword
    cout<<Player::count<<" ";//p2.count or p1.count
    cout<<Player::getCount();
    return 0;
}