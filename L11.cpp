#include<iostream>
using namespace std;
int main()
{
    int size=20;
    char string[50];
    cout<<"Enter a string:\n";
    cin.getline(string,size);
    cout.write(string,50);
    return 0;
}
