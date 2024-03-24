#include<iostream>
#include<fstream>
using namespace std;
int main()
{   
    ifstream f1, f2;
    f1.open("country");
    f2.open("capital");
    char arr[100];
    while(!f1.eof()||!f2.eof())
    {
        f1.getline(arr,100);
        cout<<"Capital of "<<arr<<endl;
        f2.getline(arr,100);
        cout<<arr<<endl;
    }
    f1.close();
    f2.close();
    return 0;
}