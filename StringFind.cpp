#include<iostream>
#include<string>
using namespace std;
int main()
{
    int i;
    string s1="Quick of Mind, Strong of Body, Pure of Heart";
    string s2;
    i=s1.find("Quick");
    if(i!=string::npos)
    {
        cout<<"Match found at "<<i<<endl;
        cout<<"Remaining string is:\n";
        s2.assign(s1,i,s1.size());
        cout<<s2;
    }
    cout<<"\n\n";
    i=s1.find("Strong");
    if(i!=string::npos){
        cout<<"Match found at "<<i<<endl;
        cout<<"Remaining string is :\n";
        s2.assign(s1,i,s1.size());
        cout<<s2;
        cout<<string::npos;
    }
    cout<<"\n\n";
    
    i=s1.find("Pure");
    if(i!=string::npos)
    {
        cout<<"Match found at "<<i<<endl;
        cout<<"Remaining string is: \n";
        s2.assign(s1,i,s1.size());
        cout<<s2;
    }
    cout<<"\n\n";
    i=s1.rfind("of");
    if(i!=string::npos)
    {
        cout<<"Match found at "<<i<<endl;
        cout<<"Remaining string is:\n";
        s2.assign(s1,i,s1.size());
        cout<<s2;
    }
    return 0;
}