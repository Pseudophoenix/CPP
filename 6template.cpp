#include <iostream>
using namespace std;
const int TABWIDTH = 8;
template <class X>
void tabOut(X data, int tab)
{
    for (; tab; tab--)
    {
        for (int i=0; i<TABWIDTH; i++)
        {
            cout<<" "<<endl;
        }
        cout<<data<<endl;
    }
}
int main()
{
    tabOut("This is a test",0);
    tabOut(100,1);
    tabOut('X',2);
    tabOut(10/3,3);
}