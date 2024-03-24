#include<iostream>
#include<fstream>

using namespace std;
int main()
{
    int x;
    ifstream infile;
    infile.open("junk.dat",ios::binary| ios::in);
    infile.read((char*)&x,7);
    cout<<x;
    return 0;
}
