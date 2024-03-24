#include<iostream>
using namespace std;
template<class T> class myclass{
template<typename T> class myclass{ //using the typename keyword
    T x;
    public:
    myclass(T a){
        cout<<"Inside generic myclass\n";
        x=a;
    }
    T getx(){return x;}
};
template<>class myclass<int>{
    int x;
    public:
    myclass(int a){
        cout<<"Inside myclass<int> specialisation";
        x=a*a;
    }
    int getx(){return x;}
    
};
int main()
{
    myclass<double> d(10.1);
    cout<<"double:"<<d.getx()<<endl;
    
    myclass<int> i(5);
    cout<<"int: "<<i.getx()<<endl;
    return 0;
}