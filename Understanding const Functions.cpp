#include<iostream>
using namespace std;
class Point{
    public:
    // void func(){
    //      cout<<"Point::Func"<<endl;
    // }
    void func() const{
         cout<<"Point::Func const"<<endl;
    }
};
int main(){
    Point P1;
    const Point P2=P1;
    P1.func();
    P2.func();
    return 5;
}