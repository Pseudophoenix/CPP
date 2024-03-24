#include<iostream>
using namespace std;
int main()
{
    // char str[50];
    string str;
    string revStr;
    cout<<"Enter the string"<<endl;
    cin>>str;
    cout<<"You have entered "<<str;
    int i=0;
    cout<<str.size();
    
    while(str[i]!='\0')
    {
        // cout<<str[i++];
        revStr[i++]=str[str.size()-i];
    }
    revStr[str.size()]='\0';
    i=0;
    // while(revStr[i]!='\0')
    cout<<revStr[0];
    cout<<endl<<"OP";
    return 0;
}

// STRING OBJECT
