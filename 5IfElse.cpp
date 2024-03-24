
//Nested IF ELSE

#include<iostream>
using namespace std;
int main(){
    int num;
    cout<<"Enter an integer";
    cin>>num;
    if(num!=0)
    {
        if(num>0){
            cout<<"Positive"<<endl;
        }
        else{
            cout<<"Negative"<<endl;
        }
    }
    else{
        cout<<"Zero"<<endl;
    }
    return 0;
}
