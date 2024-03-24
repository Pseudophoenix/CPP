#include<iostream>
#include<sstream>
using namespace std;
int main()
{
    stringstream s("THis is initial string");
    string str=s.str();
    cout<<str<<endl;
    s<<"Numbers:"<<10<<" "<<123.3;
    int i;
    double d;
    s>>str>>i>>d;
    cout<<str<<" "<<i<<" "<<d;
    return 0;
}