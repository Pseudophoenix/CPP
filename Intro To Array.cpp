#include<iostream>
using namespace std;
int main(){
    int a[5];
    cout<<"size of a is "<<sizeof(a)<<" bytes"<<endl;
    cout<<"address of a[0] is "<<(unsigned int)&a[0]<<endl;
    cout<<"address of a[1] is "<<(unsigned int)&a[1]<<endl;
    cout<<"address of a[2] is "<<(unsigned int)&a[2]<<endl;
    return 5;
    }