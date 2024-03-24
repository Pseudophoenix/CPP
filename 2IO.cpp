#include<iostream>
using namespace std;
int main()
{
    cout<<"Hey!";
    std::cout<<"Hey!";
    int num1=56;
    double num2=455.32;
    char ch='A';
    cout<<num1<<endl;
    cout<<num2<<endl;
    cout<<"Character :"<<ch<<endl;
    cin>>num1;
    cout<<"Changed num1 is"<<num1<<endl;
    cout<<"Enter values"<<endl;
    cin>>num1>>num2;
    cout<<num1<<num2;
    return 0;
}