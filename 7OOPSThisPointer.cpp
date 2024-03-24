#include<iostream>
using namespace std;
class Point{
    int x,y;
    public:
        Point(int x1,int y1)
        {
            x=x1;
            this->x=x1;
            y=y1;//invisible this pointer available here
            //internally converted by compiler as this->y=y1
        }
        Point & setX(int x1)
        {
            this->x=x1;
            return *this;
        }
        Point &setY(int y1)
        {
            this->y=y1;
            return *this;
        }
};
int main()
{
    Point p1(2,3), p2(5,6);
    return 0;
}
// this pointer is a constant pointer we cannot change the this pointer, trying to change will give compiler erroe
// this pointer helpful in function chaining
// p1.setX(5).setY(5)
// here setX must return *this so   Point &setX()
                                    // {    
                                    // ...
                                    //  return *this
                                    // }

// same happens in cout chaining
// ((cout<<"a")<<" ")<<"b";
// each paranthesis stands as an object of ostream type