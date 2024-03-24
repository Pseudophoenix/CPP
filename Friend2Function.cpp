#include<iostream>
using namespace std;
class loc{
    int longi, lati;
    public:
    loc(){}
    loc(int lg, int lt){
        longi=lg;
        lati=lt;
    }
    void show();
    friend loc operator+(loc op1,int x);
    friend loc operator+(int x,loc op1);
};
void loc::show()
{
    cout<<longi<<" ";
    cout<<lati<<"\n";
}
loc operator+(loc op1,int x)
{
    loc temp;
    temp.longi=op1.longi+x;
    temp.lati=op1.lati+x;
    return temp;
}
loc operator+(int x,loc op1)
{
    loc temp;
    temp.longi=op1.longi+x;
    temp.lati=op1.lati+x;
    return temp;
}
int main(){
    loc ob1(10,20),ob2(5,30),ob3(7,13);
    ob1.show();
    ob2.show();
    ob3.show();
    ob1=ob2+6;
    ob3=12+ob2;
    ob1.show();
    ob3.show();
    return 0;
}