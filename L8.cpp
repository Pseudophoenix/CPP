#include<iostream>
using namespace std;
int main()
{
    char c;
    cout<<"Enter the input text\n";
    cin.get(c);
    while(c!='\n')
    {
        cout<<c;
        cin.get(c);
    }
    return 0;
}
