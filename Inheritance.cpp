#include<iostream>
using namespace std;
class Human{
    public :
    int height;
    
    // private:
    int age;
    int roll;

    protected:
    float weight;

    public:
    float getWeight()
    {
        return this->weight;
    }
    int getHeight()
    {
        return this->height;
    }
    void getAge()
    {
        cout<<this->age;
    }
    void setWeight(int w)
    {
        this->weight=w;
    }

};
class Male: public Human{
//the private data members of base class are not available to child classes and changes are made only to protected and public data members
//here we have inherited the human class in public way so all the public data members will become public
//if private them all access modifiers of base class  will become private access modifiers
//if private them all access modifiers of base class  will become private access modifiers
    public :
    int marks;
    char beardDensity;
    public:
    void Crimes()
    {
        cout<<"Gangster, Criminal, Castist";
    }
    void print()
    {
        cout<<this->weight;
        cout<<this->height;
        cout<<this->marks;
        cout<<this->age;
    }
};
class Female: public Human{
    public :
    float hairLength;
    int marks;
    public:
    void Works()
    {
        cout<<"Prefered: Teacher, Doctor, Consutancy";
    }
    void print()
    {
        cout<<this->weight;
        cout<<this->height;
        cout<<this->marks;
        cout<<this->age;
    }
};
int main()
{
    Male Alok;
    Alok.Crimes();
    Alok.setWeight(50);
    cout<<endl<<Alok.getWeight()<<endl;
    Female Roma;
    Roma.Works();
    Roma.setWeight(67);
}