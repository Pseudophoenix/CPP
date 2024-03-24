#include<malloc.h>
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
void show()
{
    cout<<longi<<" ";
    cout<<lati<<"\n";
}
void *operator new(size_t size);
void operator delete(void *p);
};
void *loc::operator new(size_t size){
    void *p;
    cout<<"In overloaded new\n";
    p=malloc(size);
    if(!p){
        bad_alloc ba;
        throw ba;
    }
    return p;
}
void loc::operator delete(void *p)
{
    cout<<"In overloaded delete\n";
    free(p);
}
int main()
{
    loc *p1,*p2;
    try{
        p1=new loc(10,20);
    }
    catch(bad_alloc xa){
        cout<<"Allocation error for p1\n";
        return 1;
    }
    try{
        p2=new loc(3,5);
    }
    catch(bad_alloc xa){
        cout<<"Allocation error for p2\n";
    }
    p1->show();
    p2->show();
    delete p1;
    delete p2;
    return 0;
}