#include<iostream>
#include<list>
#include<functional>
#include<algorithm>
using namespace std;
int main()
{
    list<int> lst;
    list<int>::iterator p,endp;
    int i;
    for(i=1;i<20;i++) lst.push_back(i);
    cout<<"Original Sequence:\n";
    p=lst.begin();
    while(p!=lst.end())
    {
        cout<<*p<<" ";
        p++;
    }
    cout<<endl;
    endp=remove_if(lst.begin(),lst.end(),bind2nd(greater<int>(),8));
    cout<<"Resulting Sequence:\n";
    p=lst.begin();
    while(p!=endp){
        cout<<*p<<" ";
        p++;
    }
    return 0;
    
}