#include<iostream>
#include<string>
using namespace std;
int main()
{
    string str1("String handling C++ style");
    string str2("STL Power");
    cout<<"Initial Strings:\n";
    cout<<"str1:"<<str1<<endl;
    cout<<"str1:"<<str1<<"\n\n";
    
    cout<<"Insert str2 into str1:\n";
    str1.insert(6,str2);
    cout<<str1<<"\n\n";
    
    cout<<"Remove 9 characters from str1:\n";
    str1.erase(6,9);
    cout<<str1<<"\n\n";
    
    cout<<"Replace 8 characters in str1 with str2:\n";
    str1.replace(7,8,str2);
    cout<<str1<<endl;
    return 0;
}