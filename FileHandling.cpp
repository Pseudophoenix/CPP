#include<iostream>
#include<fstream>
using namespace std;
int main()
{
    fstream fp;
    char buf[100];
    int pos;
    fp.open("random.txt",ios::out | ios ::ate);
    cout<<"Writing to a file"<<endl;
    fp<<"This is a line"<<endl;
    fp<<"This is another file"<<endl;
    pos=fp.tellp();
    cout<<pos<<endl;
    fp.seekp(-10,ios::cur);
    fp<<endl<<"Writing at random location"<<endl;
    fp.seekp(7,ios::beg);
    fp<<"Hello World"<<endl;
    fp.close();
    cout<<"Writing complete..."<<endl;
    fp.open("random.txt",ios::in | ios::ate);
    fp.seekg(0);
    while(!fp.eof()){
        fp.getline(buf,100);
        cout<<buf<<endl;
    }
    pos=fp.tellg();
    cout<<pos<<endl;
    return 0;
    
}