// If else
// If...elseif...else
#include<iostream>
using namespace std;

int main()
{
    int mon;
    cout<<"Enter the money that you have: ";
    cin>>mon;
    if(mon>9000)// more than 9000
    {
        cout<<"Vistara: ";
        if(mon>12000)
            cout<<"Business Class\n";
        else
            cout<<"Economy Class\n";
    }
    else if(mon>5000)//9000-5000
    {
        cout<<"Air India\n";
    }
    else{//lesser than 5000
        cout<<"Indigo"<<endl;
    }
    return 0;
}
// Nested If Else: If else inside If else
