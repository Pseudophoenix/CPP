#include<iostream>
using namespace std;
class Point{
    public:
    Point(){
        cout<<"Point:consturctor"<<endl;
    }
    ~Point(){
        cout<<"Point:desturctor"<<endl;
    }
};
void makeThePoint(){
    cout<<"before making thePoint"<<endl;
    Point thePoint;
    cout<<"makeThePoint complete..."<<endl;
}
int main(){
    makeThePoint();
    cout<<"main over"<<endl;
    return 0;
}