#include<iostream>
using namespace std;
int main(){
    int a[5]={66,77,44,33,11},*pa;
    pa=a;
    cout<<"Value of array: "<<endl;
    for(int i=0;i<=4;i++)
    {
        cout<<" "<<*(pa+i)<<endl;
    }
} // namespace std
