#include<iostream>
#include<string>
using namespace std;
int main()
{
    string str1("Alpha");
    string str2("Beta");
    string str3("Omega");
    string str4;
    
    str4=str1;
    cout<<str1<<"\n"<<str3<<"\n";
    str4=str1+str2;
    cout<<str4<<"\n";
    str4=str1+" to "+str3;
    cout<<str4<<"\n";
    
    if(str3>str1) cout<<"str3>str1\n";
    
    if(str3==str1+str2)
    cout<<"str3==str1+str2\n";
    
    str1="This is a null-terminated string.\n";
    cout<<str1;
    
    string str5(str1);
    cout<<str5;
    cout<<"Enter a string:";
    cin>>str5;
    cout<<str5;
    return 0;
}