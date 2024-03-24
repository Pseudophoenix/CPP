/******************************************************************************

Welcome to GDB Online.
GDB online is an online compiler and debugger tool for C, C++, Python, Java, PHP, Ruby, Perl,
C#, OCaml, VB, Swift, Pascal, Fortran, Haskell, Objective-C, Assembly, HTML, CSS, JS, SQLite, Prolog.
Code, Compile, Run and Debug online from anywhere in world.

*******************************************************************************/
#include <iostream>
#include<vector>
#include<cctype>

using namespace std;

int main()
{   
    vector<char> v(10);
    unsigned int i;
    // cout<<"Hello World";
    cout<<"Size="<<v.size()<<endl;
    for(i=0;i<10;i++)
    v[i]=i+'a';
    cout<<"Current Contents:\n";
    for(i=0;i<v.size();i++)
    cout<<v[i]<<" ";
    cout<<"\n\n";
    
    for(i=0;i<10;i++)
    v.push_back(i+10+'a');
    
    cout<<"Size now="<<v.size()<<endl;
    cout<<"Current contents:\n";
    for(i=0;i<v.size();i++)
    cout<<v[i]<<" ";
    
    for(i=0;i<v.size();i++)
    v[i]=toupper(v[i]);
    cout<<"\nModified Content:\n";
    for(i=0;i<v.size();i++)
    cout<<v[i]<<" ";
    cout<<endl;
    return 0;
}