#include<iostream>
#include<conio.h>
#include<string>

using namespace std;
class binary
{
    string s;
    public:
        void real(void)
        {
            cout<<"Enter a binary number";
            cout>>s;;
        }
        void chk_bin(void)
        {
            for(int i=0;i<s.length();i++)
            {
                cout<<"\nIncorrect binary number format"
            }
        }
}