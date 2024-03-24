#include<iostream>
using namespace std;

class item{
    // private by default;
    int number;
    float cost;
    public:
        void getdata(int a,float b);
        void putdata(void)
        {
            cout<<"Number"<<number<<"\n";
            cout<<"Cost"<<cost<<"\n";
        }
};
// inline void item::getdata(int a, float b)
// {
//     number=a;
//     cost=b;
// }
void item::getdata(int a,float b){
    number=a;
    cost=b;
}
int main()
{
    item x;
    cout<<"\nObject x"<<"\n";
    x.getdata(100,299.95);
    x.putdata();
    item y;
    cout<<"\nObject y"<<"\n";
    y.getdata(100,299.95);
    y.putdata();
    return 0;
}