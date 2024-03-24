#include <fstream>
#include <iostream>
// #include <bits/stdc++.h>
using namespace std;
int main()
{
    istream &ignore(streamsize num = 1, int delim = EOF);
    char y_name[60], y_address[120];
    cout << "Enter your name";
    cin.getline(y_name, 60, ':');
    cout << "Enter your city";
    cin.getline(y_address, 60, ':');
    cout << y_name << endl
         << y_address << endl;
// cout<<good();
}
// void fstream::open(const char *filename,ios::openmode mode = ios::in | ios::out);
// void ifstream::open(const char *filename,ios::openmode mode = ios::in);
// void ofstream::open(const char *filename,ios::openmode mode = ios::out | ios::trunc);