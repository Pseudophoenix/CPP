#include<iostream>
using namespace std;
class loc{
    int longi, lati;
    public:
    loc(){}
    loc(int lg,int lt){
        longi=lg;
        lati=lt;
    }
    void show(){
        cout<<longi<<" ";
        cout<<lati<<"\n";
    }
    friend loc operator+(loc op1,loc op2);//using friend function
    loc operator-(loc op2); //using normal function
};
loc operator+(loc op1, loc op2)
{
    loc temp;
    temp.longi=op1.longi+op2.longi;
    temp.lati=op1.lati+op2.lati;
    return temp;
}
loc loc:: operator-(loc op2)
{
    loc temp;
    temp.longi=longi+op2.longi;
    temp.lati=lati+op2.lati;
    return temp;
}
int main()
{
    loc op1(10,20),op2(34,20);
    op1=op1+op2;
    op1.show();
    return 0;
}
