#include<iostream>
#include<map>
#include<string>
using namespace std;

int main()
{
    map<string, string> directory;
    directory.insert(pair<string,string>("Tom","555-4533"));
    string s;
    cout<<"Enter name:";
    cin>>s;
    map<string,string>::iterator p;
    p=directory.find(s);
    if(p!=directory.end())
    {
        cout<<"Phone number: "<<p->second;
    }
    else
        cout<<"Name not in directory\n";
    return 0;
    
}