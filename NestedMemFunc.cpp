// A member function can be called by using its
// name inside another member function of the same class. This is
// known as nesting of member functions

#include<iostream>
#include<conio.h>
#include<string>
using namespace std;
class binary{
    string s;
    public:
    void read(void)
    {
        cout<<"Enter a binary number";
        cin>>s;
    }
    void chk_bin(void)
    {
        for(int i=0;i<s.length();i++)
        {
            if(s.at(i)!='0'&&s.at(i)!='1')
            {
                cout<<"\nIncorrect binary number format...the program will quit";
                getch();
                exit(0);
            }
        }
    }
    void ones(void)
    {
        chk_bin();
        for(int i=0;i<s.length();i++)
        {
            if(s.at(i)=='0')
            s.at(i)='1';
            else
            s.at(i)='0';
        }
    }
    void displayones(void)
    {
        ones();
        cout<<"The 1's complement of the above binary number is"<<s;
    }
};
int main()
{
    binary b;
    b.read();
    b.displayones();
    getch();
    return 0;
}