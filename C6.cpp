#include<iostream>
using namespace std;
int main(){
    int chcount = 0;
    const char ent ='\n';
    char ch;
    cout<<"Enter Character\n";
    cin.get(ch);
    while(ch!=ent){
        if(ch>='a'&& ch<='z')
        {
            chcount++;
            // cout.put(ch);
        }
    cin.get(ch);}
    
    cout<<"The number of character ="<<chcount<<"\n";
    return 0;
}