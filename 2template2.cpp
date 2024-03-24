#include<iostream>
using namespace std;
template<class type1,class type2>

void myfunc(type1 &a,type2 &b)
{
    cout<<a<<" "<<b<<endl;
}

int main()
{
    int i=12;
    int j=45.34;
    myfunc(i,"I like cricket");
    myfunc(j,"43LK");
    return 0;
}