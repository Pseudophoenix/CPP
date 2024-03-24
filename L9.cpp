#include<iostream>
using namespace std;
int main()
{
    int count=0;
    char c;
    cout<<"INPUT TEXT\n";
    cin.get(c);
    while(c!='\n')
    {
        count++;
        cout.put(c);
        cin.get(c);
    }
    cout<<"\nNumber of characters= "<<count<<"\n";
    return 0;
}

