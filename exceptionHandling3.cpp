/******************************************************************************

Welcome to GDB Online.
GDB online is an online compiler and debugger tool for C, C++, Python, Java, PHP, Ruby, Perl,
C#, OCaml, VB, Swift, Pascal, Fortran, Haskell, Objective-C, Assembly, HTML, CSS, JS, SQLite, Prolog.
Code, Compile, Run and Debug online from anywhere in world.

*******************************************************************************/
#include <iostream>

using namespace std;
void Xhandler(int test)
{
    try{
        if(test) throw test;
    }
    catch(int i)
    {
        cout<<"Caught Exception #:"<<i<<"\n";
    }
}

void Xtest(int test){
    cout<<"Inside Xtest, test is: "<<test<<"\n";
    if(test) throw test;
}
int main()
{   cout<<"Start\n";
Xhandler(1);
// try{
//     cout<<"Inside try block\n";
//     Xtest(0);
//     Xtest(1);
//     Xtest(2);
//     // throw 100;
//     cout<<"This will not execute\n";
// }
// catch(int i)
// {
//     cout<<"Caught an exception--value is: ";
//     cout<<i<<"\n";
// }
Xhandler(2);
Xhandler(3);
cout<<"End";
try{
    cout<<"Inside try block\n";
    cout<<"Still inside try block\n";
}
catch(int i)
{
    cout<<"Caught an exception -- value is: ";
    cout<< i <<"\n";
    
}

// catch(int i)
// {
//     cout<<"Caught an exception--value is: ";
//     cout<<i<<"\n";
// }
    cout<<"End\n";

    return 0;
}