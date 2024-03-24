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
    void show(){
        cout<<lati<<" ";
        cout<<longi<<"\n";
    }
    loc operator=(loc op2);
    friend loc operator++(loc &op2);
    friend loc operator--(loc &op2);
};
loc loc::operator=(loc op2){
    longi=op2.longi;
    lati=op2.lati;
    return *this;
}
loc operator++(loc &op)
{
    op.longi++;
    op.lati++;
    return op;
}
loc operator--(loc &op)
{
    op.longi--;
    op.lati--;
    return op;
}
int main()
{
    loc ob1(10,20),ob2;
    ob1.show();
    ++ob1;
    ob1.show();
    ob2=++ob1;
    ob2.show();
    --ob2;
    ob2.show();
    return 0;
}