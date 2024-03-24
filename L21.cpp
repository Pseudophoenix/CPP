#include<iostream>
#include<fstream>
using namespace std;
int main()
{   
    char buf[100];
    fstream fp;
    int pos;
    fp.open("random.txt",ios::out|ios::ate);
    cout<<"\nWriting to a file..."<<endl;
    fp<<"This is a line"<<endl;
    fp<<"This is a another line"<<endl;
    pos=fp.tellp();
    cout<<"Current position of put pointer: "<<pos<<endl;
    fp.seekp(-10,ios::cur);
    fp<<"Hello World";
    fp.close();
    cout<<"Writing Complete...."<<endl;
    fp.open("random.txt",ios::in|ios::ate);
    fp.seekg(0);
    while(!fp.eof())
    {
        fp.getline(buf,100);
        cout<<buf<<endl;
    }
    pos=fp.tellg();
    cout<<"\nCurrent position of get pointer: "<<pos<<endl;
    
    return 0;
}