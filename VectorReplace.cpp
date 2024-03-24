#include<iostream>
#include<vector>
#include<algorithm>
using namespace std;

int main()
{
    char str[]="This STL is power programming";
    vector<char>v,v2(30);
    unsigned int i;
    
    for(i=0;str[i];i++)
    v.push_back(str[i]);
    
    cout<<"Input Sequence:\n";
    for(i=0;i<v.size();i++) cout<<v[i];
    cout<<endl;
    
    cout<<"Result after removing spaces:\n";
    for(i=0;i<v2.size();i++) cout<<v2[i];
    cout<<endl;
    
    replace_copy(v.begin(),v.end(),v2.begin(),' ',':');
    cout<<"Result after replacing spaces with colons:\n";
    for(i=0;i<v2.size();i++) cout<<v2[i];
    
    cout<<endl<<endl;
    return 0;
}