#include<iostream>
class FriendClass;
class myclass{
    private:
    int num;
    public:
    myclass(int value){

    }
    friend class FriendClass;
    friend void frfun(myclass o);
};

class FriendClass{
    public:
    void displ(myclass obj){
        std::cout<<obj.num;
    }
};
void frfun(myclass obj)
{
    std::cout<<obj.num;
}
int main()
{
    myclass myobj(43);
    FriendClass friendobj;;
    friendobj.displ(myobj);
    frfun(myobj);
    return 0;
}