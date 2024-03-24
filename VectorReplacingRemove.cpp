#include<iostream>
#include<vector>
#include<algorithm>
using namespace std;

int main(){
    char str[]="The STL is power programming";
    vector<char> v,v2(30);
    unsigned int i;
    for(i=0;str[i];i++) v.push_back(str[i]);
    
    cout<<"Input sequence:\n";
    for(i=0;i<v.size();i++) cout<<v[i];
    cout<<endl;
    
    remove_copy(v.begin(),v.end(),v2.begin(),' ');
    
    cout<<"Result after Removing spaces:\n";
    for(i=0;i<v2.size();i++)
    cout<<v2[i];
    cout<<endl<<endl;
    
    cout<<"Input sequence:\n";
    for(i=0;i<v.size();i++) cout<<v[i];
    cout<<endl;
    
    replace_copy(v.begin(),v.end(),v2.begin(),' ',':');
    
    for(i=0;i<v2.size();i++)
    cout<<v2[i];
    cout<<endl<<endl;
    return 0;
}