#include<iostream>
#include<fstream>
using namespace std;
int main()
{
    ofstream fout;
    fout.open("country");
    fout<<"United States of America\n";
    fout<<"United Kingdom\n";
    fout<<"South Korea";
    fout.close();
    fout.open("capital\n");
    fout<<"Washington\n";
    fout<<"London\n";
    fout<<"Seoul";
    fout.close();
    const int N=200;
    char line[200];
    ifstream fin;
    fin.open("country");
    cout<<"Components of country file\n";
    // while(fin)
    // {
    //     fin.getline(line,N);
    //     cout<<line<<endl;
    // }
    while(!fin.eof())
    {
        fin.getline(line,N);
        cout<<line<<endl;
    }
    fin.close();
    return 0;
}