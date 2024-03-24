#include<iostream>
using namespace std;
int main()
{
    char c;
    cout<<"ENter the input text\n";
    cin.get(c);
    while(c!='\n')
    {
        cout.put(c);
        cin.get(c);
    }

    return 0;
}

#include<iostream>
    using namespace std;
    int main()
    {
        char c;
        char name[40];
        cout<<"ENter the input text\n";
        cin.get(c);
        cin.getline(name,20);
        while(c!='\t')
        {
            cout.put(c);
            cin.get(c);
        }
        cout<<name;
    
        return 0;
    }