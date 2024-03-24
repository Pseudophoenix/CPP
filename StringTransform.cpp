#include<iostream>
#include<string>
#include<algorithm>
using namespace std;

int main()
{
    string str1("Strings handling is easy in C++");
    string::iterator p;
    unsigned int i;
    for(i=0;i<str1.size();i++)
    cout<<str1[i];
    cout<<endl;
    
    p=str1.begin();
    while(p!=str1.end())
    cout<<*p++;
    cout<<endl;
    i=count(str1.begin(),str1.end(),'i');
    cout<<"There are "<<i<<" i's in str1\n";
    
    transform(str1.begin(),str1.end(),str1.begin(), [](unsigned char c) { return toupper(c); });
    p=str1.begin();
    while(p!=str1.end())
    cout<<*p++;
    cout<<endl;
    return 0;
}